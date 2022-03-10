#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <windows.h>
#include "data.h"

void mission_page (int n)
{
    srand(time(NULL));

    int a;

    printf("<< 往 前 %d 步 >>\n\n\n\n\n\n\n\n\n\n", n);
    switch (n)
    {
        case 2:  case 5: case 7:                 //civilian
        {
            printf("遇 到 平 民 需 要 幫 助 ...\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
            system("pause");    system("CLS");
            conversation_civilian();
            system("pause");    system("CLS");  break;
        }
        case 3: case 8:         //ally
        {
            printf("遇 到 大 俠 相 助 ...\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
            system("pause");    system("CLS");
            conversation_ally();
                system("CLS");  break;
        }
        case 1:                //weapon seller
        {
            printf("好 像 有 人 在 賣 裝 備 ...\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
            system("pause");    system("CLS");
            conversation_store();
            system("pause");    system("CLS");  break;
        }
        case 4: case 6: case 9:  case 10:        //items
        {
            a = (rand()%5+1);
            printf("地 上 好 像 有 甚 麼 東 西 ...\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
            system("pause");    system("CLS");
            conversation_items(a);
            system("pause");    system("CLS");  break;
        }
    }

}

