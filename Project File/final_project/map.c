#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <windows.h>

void map (int track, int n)
{
    int i, j;
    extern char a[20][50];


    for (i=0;i<20;i++)
    {
        for (j=0;j<50;j++)
        {
            //START
            a[0][0]='@';
            //CASTLE
            if (i>=17 && i<=19 && j>=2 && j<=21)
                a[i][j] = '+';
            else if (i>15 && i<=16 && j>=4 && j<=19)
                a[i][j] = '+';
            else if (i==15 && j>=9 && j<=14)
                a[i][j] = '+';
            else if (i==14 && j>=10 && j<=13)
                a[i][j] = '+';
            else if (i==13 && j>=11 && j<=12)
                a[i][j] = '+';

            //MOUNTAIN
            else if (i==9 && j>=3 && j<=27)
                a[i][j] = '^';
            else if (i==8)
            {
                if (j>=4 && j<=9)
                    a[i][j] = '^';
                else if (j>=11 && j<=21)
                    a[i][j] = '^';
                else if (j>=23 && j<=26)
                    a[i][j] = '^';
                else if (j>=28 && j<=47)
                    a[i][j] = '~';
                else
                    a[i][j] = '.';
            }
            else if (i==7)
            {
                if (j>=5 && j<=8)
                    a[i][j] = '^';
                else if (j>=12 && j<=20)
                    a[i][j] = '^';
                else if (j>=23 && j<=25)
                    a[i][j] = '^';
                else if (j>=28 && j<=47)
                    a[i][j] = '~';
                else
                    a[i][j] = '.';
            }
            else if (i==6)
            {
                if (j>=6 && j<=7)
                    a[i][j] = '^';
                else if (j>=13 && j<=17)
                    a[i][j] = '^';
                else if (j>=24 && j<=25)
                    a[i][j] = '^';
                else if (j>=34 && j<=47)
                    a[i][j] = '~';
                else
                    a[i][j] = '.';
            }
            else if (i==5)
            {
                if (j>=14 && j<=17)
                    a[i][j] = '^';
                else if (j==25)
                    a[i][j] = '^';
                else if (j>=34 && j<=47)
                    a[i][j] = '~';
                else
                    a[i][j] = '.';
            }
            else if (i==4 && j>=15 && j<=16)
                a[i][j] = '^';
            else if (i==3 && j==15)
                a[i][j] = '^';

            //LAKE
            else if (i>=2 && i<=14 && j>=34 && j<=35)
                a[i][j] = '~';
            else if (i>=4 && i<=16 && j>=36 && j<=37)
                a[i][j] = '~';
            else if (i>=6 && i<=18 && j>=38 && j<=39)
                a[i][j] = '~';
            else if (i>=4 && i<=16 && j>=40 && j<=41)
                a[i][j] = '~';
            else if (i>=2 && i<=17 && j>=42 && j<=45)
                a[i][j] = '~';
            else if (i>=4 && i<=14 && j>=46 && j<=47)
                a[i][j] = '~';

            //ELSEWHERE
            else
                a[i][j] = '.';
        }
    }       //map end
    a[19][27] = 'X';
    pass_map(n, a, track);
}

void pass_map (int n, char a[20][50], int track)
{
    int i=0,j=0;


    if ((track+n) <= 49 && (track+n) > 0)
    {
        for(j=1;j<=(track+n);j++)
            a[0][j] = '>';
        track = track + n;
    }
    else if ((track+n) > 49 && (track+n) <= 68)
    {
        for (j=1;j<50;j++)
            a[0][j] = '>';
        for (i=0;i<(track+n-48);i++)
            a[i][49] = 'v';
        track = track + n;
    }
    else if ((track+n) > 68)
    {
        for (j=1;j<50;j++)
            a[0][j] = '>';
        for (i=1;i<20;i++)
            a[i][49] = 'v';
        for (j=49;j>=(49-(track+n-68));j--)
        {
            a[19][j] = '<';/*
                if (j == 27)
                {
                    a[19][27] = 'X';
                    break;
                }*/
        }
        track += n;
    }
    print_map(a, track);
}

int print_map (char a[20][50], int track)
{
    int i=0, j=0;

    for (i=0;i<20;i++)
    {
        for (j=0;j<50;j++)
            printf("%c", a[i][j]);
        printf("\n");
    }
    printf("\n\n\n");

    return track;
}

