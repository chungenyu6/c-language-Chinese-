#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <windows.h>
#include "data.h"

int conversation_civilian()
{
    extern DATA man;
    int cin, *ptr_HP, *ptr_repu, *ptr_wealth, *ptr_attack, *ptr_heal;
    char c;
    FILE *ptr;

    print_town();
    system("pause");
    system("CLS");
    ptr = fopen("E:\\課業\\1上 程式設計\\Final Project\\Final Project File\\村民對話.txt", "r");
    while ((c=getc(ptr)) != EOF)
    {
        printf("%c", c);
    }
    fclose(ptr);

    LOOP: do
    {
        printf("\n\n\n\n\n\n\n1. 攻擊平民\t2. 幫助平民\t3. 逃跑\n\n\n\n\n");
        cin = getch();
        if (cin == '1')
        {
            system("CLS");
            print_man();
            system("pause");
            system("CLS");
            printf("撞 見 人 們 有 難，不 僅 沒 有 出 手 相 救 ， 甚 至 出 手 傷 害...\n\n\n\n\n名聲 - 500\t\t財富 + 100\n\n\n");
            ptr_repu = &man.repu;       //改變人物參數
            *ptr_repu -= 500;
            ptr_wealth = &man.wealth;
            *ptr_wealth += 100;
            break;
        }
        else if (cin == '2')
        {
            battle_badguy();
            break;
        }
        else if (cin == '3')
        {
            system("CLS");
            printf("腳 一 使 力，踩 輕 功  一 招 < 踏 雪 無 痕 >，縱 身 而 去 ...\n\n\n名 聲 - 50\n\n\n\n\n");
            ptr_repu = &man.repu;       //改變人物參數
            *ptr_repu -= 50;
            break; break;
        }
    }while (1);

    //return 數值
}

int conversation_ally()
{
    extern DATA man;
    int cin, *ptr_HP, *ptr_repu, *ptr_wealth, *ptr_attack, *ptr_heal;
    char c;
    FILE *ptr;

    system("CLS");
    print_mountain();
    system("pause");
    system("CLS");
    ptr = fopen("E:\\課業\\1上 程式設計\\Final Project\\Final Project File\\大俠對話.txt", "r");
    while ((c=getc(ptr)) != EOF)
    {
        printf("%c", c);
    }
    fclose(ptr);

    LOOP: do
    {
        printf("\n\n\n\n\n\n\n1. 攻擊大俠\t2. 接收祕笈\t3. 逃跑\n\n\n\n\n");
        cin = getch();
        if (cin == '1')
        {
            system("CLS");
            printf("遇 見 大 俠 慷 慨 傳 授 武 功，非 但 沒 有 謝 過 ， 甚 至 出 手 傷 害...\n\n\n\n\n名聲 - 500\n\n\n");
            ptr_repu = &man.repu;       //改變人物參數
            *ptr_repu -= 500;
            system("pause");
            battle_ally();
            break;
        }
        else if (cin == '2')
        {
            system("CLS");
            printf("大 俠 慷 慨 傳 授 武 功，內 功 大 增\n\n\n\n\n生命 + 500\t\t攻擊力 +300\t\t回復力 + 100\n\n\n\n\n\n\n\n");
            system("pause");
            ptr_HP = &man.HP;       //改變人物參數
            *ptr_HP += 500;
            ptr_attack = &man.attack;
            *ptr_attack += 300;
            ptr_heal = &man.heal;
            *ptr_heal += 100;
            break;
        }
        else if (cin == '3')
        {
            system("CLS");
            printf("腳 一 使 力，踩 輕 功  一 招 < 踏 雪 無 痕 >，縱 身 而 去 ...\n\n\n名 聲 - 100\n\n\n\n\n");
            system("pause");
            ptr_repu = &man.repu;       //改變人物參數
            *ptr_repu -= 100;
            break;
        }
    }while (1);

}

int conversation_items(int a)
{
    extern DATA man, kongfu, medi, red_envolope, deadbody, paperman;

    switch (a)
    {
    case 1:
        {
            system("CLS");
            printf("走 近 一 看 發 現 竟 然 是 %s !\n\n\n攻擊力 + %d\n\n\n\n\n\n", kongfu.name, kongfu.attack);
            man.attack += kongfu.attack;
            break;
        }
    case 2:
        {
            system("CLS");
            printf("走 近 一 看 發 現 竟 然 是 %s !\n\n\n生命 - %d\t\t財富 - %d\t\t攻擊力 - %d\n\n\n\n\n\n", paperman.name, paperman.HP, paperman.wealth, paperman.attack);
            man.HP -= paperman.HP;
            man.wealth -= paperman.wealth;
            man.attack -= paperman.attack;
            break;
        }
    case 3:
        {
            system("CLS");
            printf("走 近 一 看 發 現 竟 然 是 冥 婚 紅 包 !\n\n\n生命 - %d\t\t財富 - %d\t\t攻擊力 - %d\n\n\n\n\n\n", red_envolope.HP, red_envolope.wealth, red_envolope.attack);
            man.HP -= red_envolope.HP;
            man.wealth -= red_envolope.wealth;
            man.attack -= red_envolope.attack;
            break;
        }
    case 4:
        {
            system("CLS");
            printf("走 近 一 看 發 現 竟 然 是 %s !\n\n\n生命 - %d\t\t財富 - %d\t\t攻擊力 -%d\n\n\n\n\n\n", deadbody.name, deadbody.HP, deadbody.wealth, deadbody.attack);
            man.HP -= deadbody.HP;
            man.wealth -= deadbody.wealth;
            man.attack -= deadbody.attack;
            break;
        }
    case 5:
        {
            system("CLS");
            printf("走 近 一 看 發 現 竟 然 是 %s !\n\n\n生命 + %d\t\t回復力 + %d\n\n\n\n\n\n", medi.name, medi.HP, medi.heal);
            man.HP += medi.HP;
            man.heal += medi.heal;
            break;
        }
    }
}

int conversation_store()
{
    extern DATA man, weaponseller, kongfu, medi;
    int cin, *ptr_HP, *ptr_repu, *ptr_wealth, *ptr_attack, *ptr_heal;
    char c;
    FILE *ptr;

    system("CLS");
    print_store();
    system("pause");
    system("CLS");

    printf("歡 迎 光 臨 ， 請 問 需 要 甚 麼 服 務 ?\n\n\n\n\n\n\n\n\n\n");
    LOOP: do
    {
        printf("\n\n\n\n\n\n\n1. 攻擊店家\t2. 買祕笈\t3. 買仙丹\n\n\n\n\n");
        cin = getch();
        if (cin == '1')
        {
            system("CLS");
            printf("無 辜 傷 害 平 民 ， 非 俠 義 之 行 為 !\n\n\n\n\n名聲 - %d\t\t財富 + %d\n\n\n", weaponseller.repu, weaponseller.wealth);
            man.repu -= weaponseller.repu;
            man.wealth += weaponseller.wealth;
            break;
        }
        else if (cin == '2')
        {
            system("CLS");
            printf("得 到 武 林 秘 笈 ， 功 力 大 增\n\n\n\n\n攻擊力 + %d\t\t財富 - %d\n\n\n\n\n\n", kongfu.attack, kongfu.wealth);
            man.attack += kongfu.attack;
            man.wealth -= kongfu.wealth;
            break;
        }
        else if (cin == '3')
        {
            system("CLS");
            printf("得 到 仙 丹 補 藥 ， 提 高 生 命 和 回 復\n\n\n\n\n生命 +%d\t\t回復力 +%d\t\t財富 -%d\n\n\n\n\n\n", medi.HP, medi.heal, medi.wealth);
            man.HP += medi.HP;
            man.heal += medi.heal;
            man.wealth -= medi.wealth;
            break;
        }
        system("pause");
    }while (1);
}

int conversation_boss()
{
    extern DATA man;
    int cin, *ptr_HP, *ptr_repu, *ptr_wealth, *ptr_attack, *ptr_heal;
    char c;
    FILE *ptr;

    print_final();
    system("pause");
    system("CLS");
    ptr = fopen("E:\\課業\\1上 程式設計\\Final Project\\Final Project File\\楊康對話.txt", "r");
    while ((c=getc(ptr)) != EOF)
    {
        printf("%c", c);
    }
    fclose(ptr);

    LOOP: do
    {
        printf("\n\n\n1. 攻 擊 楊 康\t\t\t2. 加 入 邪 教");
        cin = getch();
        if (cin == '1')
        {
            system("CLS");
            printf("郭 靖 : 少 說 廢 話 ，敢 動 我 的 女 人 ， 一 決 高 下 吧 !\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
            system("pause");
            system("CLS");
            battle_boss();
            break;
        }
        else if (cin == '2')
        {
            system("CLS");
            ptr = fopen("E:\\課業\\1上 程式設計\\Final Project\\Final Project File\\叛逃對話.txt", "r");
            while ((c=getc(ptr)) != EOF)
            {
                printf("%c", c);
            }
            fclose(ptr);
            printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
            system("pause");
            system("CLS");
            break;
        }

    }while (1);
}
