#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <windows.h>
#include "data.h"

void display_characters ()
{
    extern DATA man;
    extern DATA woman;

    puts(man.name);
    printf("\n");
    puts(man.intro);
    printf("\n");
    printf("HP:\t%d\n",man.HP);
    printf("聲望:\t%d\n",man.repu);
    printf("財富:\t%d\n",man.wealth);
    printf("攻擊力:\t%d\n",man.attack);
    printf("回復力:\t%d\n",man.heal);
    printf("\n\n\n\n");                         //換人
    puts(woman.name);
    printf("\n");
    puts(woman.intro);
    printf("\n");
    printf("HP:\t%d\n",woman.HP);
    printf("聲望:\t%d\n",woman.repu);
    printf("財富:\t%d\n",woman.wealth);
    printf("攻擊力:\t%d\n",woman.attack);
    printf("回復力:\t%d\n",woman.heal);
    printf("\n\n\n\n");
}
void print_man()
{
    char c;
    int i, j;
    FILE *ptr;

    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    ptr = fopen("E:\\課業\\1上 程式設計\\Final Project\\Final Project File\\降龍十八掌.txt", "r");
    while ((c=getc(ptr)) != EOF)
    {
        printf("%c", c);
    }
    fclose(ptr);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    Sleep(1000);
    system("CLS");

    ptr = fopen("E:\\課業\\1上 程式設計\\Final Project\\Final Project File\\人物\\man.txt", "r");
    while ((c=getc(ptr)) != EOF)
    {
        printf("%c", c);
    }
    fclose(ptr);

    printf("\n\n\n");
}
void print_woman()
{
    char c;
    int i, j;
    FILE *ptr;

    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    ptr = fopen("E:\\課業\\1上 程式設計\\Final Project\\Final Project File\\落英神劍掌.txt", "r");
    while ((c=getc(ptr)) != EOF)
    {
        printf("%c", c);
    }
    fclose(ptr);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    Sleep(1000);
    system("CLS");

    ptr = fopen("E:\\課業\\1上 程式設計\\Final Project\\Final Project File\\人物\\woman.txt", "r");
    while ((c=getc(ptr)) != EOF)
    {
        printf("%c", c);
    }
    fclose(ptr);

    printf("\n\n\n");
}
void print_badguy()
{
    char c;
    int i, j;
    FILE *ptr;

    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    ptr = fopen("E:\\課業\\1上 程式設計\\Final Project\\Final Project File\\百幻陰拳.txt", "r");
    while ((c=getc(ptr)) != EOF)
    {
        printf("%c", c);
    }
    fclose(ptr);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    Sleep(1000);
    system("CLS");

    ptr = fopen("E:\\課業\\1上 程式設計\\Final Project\\Final Project File\\人物\\badguy.txt", "r");
    while ((c=getc(ptr)) != EOF)
    {
        printf("%c", c);
    }
    fclose(ptr);

    printf("\n\n\n");
}
void print_ally()
{
    char c;
    int i, j;
    FILE *ptr;

    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    ptr = fopen("E:\\課業\\1上 程式設計\\Final Project\\Final Project File\\百式觀音.txt", "r");
    while ((c=getc(ptr)) != EOF)
    {
        printf("%c", c);
    }
    fclose(ptr);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    Sleep(1000);
    system("CLS");

    ptr = fopen("E:\\課業\\1上 程式設計\\Final Project\\Final Project File\\人物\\ally.txt", "r");
    while ((c=getc(ptr)) != EOF)
    {
        printf("%c", c);
    }
    fclose(ptr);

    printf("\n\n\n");
}
void print_boss()
{
    char c;
    int i, j;
    FILE *ptr;

    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    ptr = fopen("E:\\課業\\1上 程式設計\\Final Project\\Final Project File\\弒佛殺神.txt", "r");
    while ((c=getc(ptr)) != EOF)
    {
        printf("%c", c);
    }
    fclose(ptr);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    Sleep(1000);
    system("CLS");

    ptr = fopen("E:\\課業\\1上 程式設計\\Final Project\\Final Project File\\人物\\boss.txt", "r");
    while ((c=getc(ptr)) != EOF)
    {
        printf("%c", c);
    }
    fclose(ptr);

    printf("\n\n\n");
}

void print_temple()
{
    char c;
    int i, j;
    FILE *ptr;

    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    ptr = fopen("E:\\課業\\1上 程式設計\\Final Project\\Final Project File\\全真教.txt", "r");
    while ((c=getc(ptr)) != EOF)
    {
        printf("%c", c);
    }
    fclose(ptr);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    Sleep(1000);
    system("CLS");

    ptr = fopen("E:\\課業\\1上 程式設計\\Final Project\\Final Project File\\人物\\temple.txt", "r");
    while ((c=getc(ptr)) != EOF)
    {
        printf("%c", c);
    }
    fclose(ptr);
}
void print_town()
{

    char c;
    int i, j;
    FILE *ptr;

    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    ptr = fopen("E:\\課業\\1上 程式設計\\Final Project\\Final Project File\\四處著火的村落.txt", "r");
    while ((c=getc(ptr)) != EOF)
    {
        printf("%c", c);
    }
    fclose(ptr);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    Sleep(1000);
    system("CLS");

    ptr = fopen("E:\\課業\\1上 程式設計\\Final Project\\Final Project File\\人物\\town.txt", "r");
    while ((c=getc(ptr)) != EOF)
    {
        printf("%c", c);
    }
    fclose(ptr);

    printf("\n\n\n");
}
void print_store()
{
    char c;
    int i, j;
    FILE *ptr;

    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    ptr = fopen("E:\\課業\\1上 程式設計\\Final Project\\Final Project File\\武器店.txt", "r");
    while ((c=getc(ptr)) != EOF)
    {
        printf("%c", c);
    }
    fclose(ptr);
    printf("\n\n\n\n\n\n\n\n");
    Sleep(1000);
    system("CLS");

    ptr = fopen("E:\\課業\\1上 程式設計\\Final Project\\Final Project File\\人物\\store.txt", "r");
    while ((c=getc(ptr)) != EOF)
    {
        printf("%c", c);
    }
    fclose(ptr);

    printf("\n\n\n");
}
void print_mountain()
{
    char c;
    int i, j;
    FILE *ptr;

    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    ptr = fopen("E:\\課業\\1上 程式設計\\Final Project\\Final Project File\\誤入奇幻仙境.txt", "r");
    while ((c=getc(ptr)) != EOF)
    {
        printf("%c", c);
    }
    fclose(ptr);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    Sleep(1000);
    system("CLS");

    ptr = fopen("E:\\課業\\1上 程式設計\\Final Project\\Final Project File\\人物\\mountain.txt", "r");
    while ((c=getc(ptr)) != EOF)
    {
        printf("%c", c);
    }
    fclose(ptr);

    printf("\n\n\n");
}
void print_final()
{
    char c;
    int i, j;
    FILE *ptr;

    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    ptr = fopen("E:\\課業\\1上 程式設計\\Final Project\\Final Project File\\三個月後.txt", "r");
    while ((c=getc(ptr)) != EOF)
    {
        printf("%c", c);
    }
    fclose(ptr);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    Sleep(1000);
    system("CLS");

    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    ptr = fopen("E:\\課業\\1上 程式設計\\Final Project\\Final Project File\\邪教大本營入口.txt", "r");
    while ((c=getc(ptr)) != EOF)
    {
        printf("%c", c);
    }
    fclose(ptr);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    Sleep(1000);
    system("CLS");

    ptr = fopen("E:\\課業\\1上 程式設計\\Final Project\\Final Project File\\人物\\final.txt", "r");
    while ((c=getc(ptr)) != EOF)
    {
        printf("%c", c);
    }
    fclose(ptr);

    printf("\n\n\n");
}

void print_endgame()
{
    char c;
    int i, j;
    FILE *ptr;

    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    ptr = fopen("E:\\課業\\1上 程式設計\\Final Project\\Final Project File\\您橫死街頭.txt", "r");
    while ((c=getc(ptr)) != EOF)
    {
        printf("%c", c);
    }
    fclose(ptr);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    system("pause");
    system("CLS");
}
void print_conti()
{
    char c;
    int i, j;
    FILE *ptr;

    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    ptr = fopen("E:\\課業\\1上 程式設計\\Final Project\\Final Project File\\未完待續.txt", "r");
    while ((c=getc(ptr)) != EOF)
    {
        printf("%c", c);
    }
    fclose(ptr);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    system("pause");
    system("CLS");
}
