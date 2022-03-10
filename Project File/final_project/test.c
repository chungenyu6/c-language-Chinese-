#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <windows.h>
#include "data.h"
/*讀取鍵盤字元
    while (1)
    {
        c=getchar();
        if (c == 97)
        {
            printf("%c\n", c);
        }

        system("pause");
        system("CLS");
    }
*/

//傳遞變數值
/*int main ()
int *ptr_test1;
ptr_test1 = &man.HP;

//origin
printf("HP:%d\n", man.HP);
printf("attack:%d\n", man.attack);
//given value
man.HP = 100000000;
man.attack = 200000000;
printf("HP:%d\n", man.HP);
printf("attack:%d\n", man.attack);
//test return
test(ptr_test1, man.attack);
printf("HP:%d\n", man.HP);
printf("attack:%d\n", man.attack);

void test (int *ptr, int b)
{
    *ptr= 12345;
    b= 23456;
}
*/

void test_2(int *ptr)
{
    *ptr = 200000;
}
