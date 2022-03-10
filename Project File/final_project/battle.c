#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <windows.h>
#include "data.h"

void battle_badguy()
{
    extern DATA man, badguy, battle;
    int cin;

    battle = badguy;    //壞人死後數值回復

    LOOP_battle: do
    {
        system("CLS");
        printf("%s:\n\n生命: %d\t\t攻擊力: %d\t\t\t回復力: %d", battle.name, battle.HP, battle.attack, battle.heal);
        printf("\n\n\n\n\n\n\n\n\n\n");
        printf("\n\n\n\n\n%s:\n\n生命: %d\t\t攻擊力: %d\t\t\t回復力: %d", man.name, man.HP, man.attack, man.heal);
        printf("\n\n\n\n\n\n\n\n\n\n");
        printf("------------------------------------------------------------------------------------------------\n\n\n");
        printf("1. 攻 擊\t\t2. 回 復\t\t3. 逃 跑 ");
        cin = getch();
        if (cin == '1')
        {
            system("CLS");
            print_man();
            Sleep(1000);
            system("CLS");
            print_badguy();
            Sleep(1000);
            system("CLS");
            man.HP -= battle.attack;
            battle.HP -= man.attack;
        }
        else if (cin == '2')
        {
            system("CLS");
            printf("運 起 內 功  聚 集 真 氣，提 高 生 命 值\n\n\n生 命 + %d\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n", man.heal);
            system("pause");
            man.HP += man.heal;
            goto LOOP_battle;
        }
        else if (cin == '3')
        {
            system("CLS");
            printf("腳 一 使 力，踩 輕 功  一 招 < 踏 雪 無 痕 >，縱 身 而 去 ...\n\n\n名 聲 - 50\n\n\n\n\n\n\n\n\n\n\n\n");
            /*ptr_HP = &man.HP;
            *ptr_HP -= 50;*/    //保留以防出問題
            man.repu -= 50;
            break;
        }

        if (battle.HP <= 0)
        {
            printf("對 方 已 無 生 命 跡 象...\n\n\n\n\n名聲: +300\t\t財富: +700\n\n\n");
            man.repu += 300;
            man.wealth += 700;
            break;
        }
        else if (man.HP <= 0)
        {
            print_endgame();
            man.HP=200;man.repu=200;man.wealth=200;man.attack=200;man.heal=200;
            break;
        }
    }while (1);
}

void battle_ally()
{
    extern DATA man, ally, battle;
    int cin;

    battle = ally;

    LOOP_battle: do
    {
        system("CLS");
        printf("%s:\n\n生命: %d\t\t攻擊力: %d\t\t\t回復力: %d", battle.name, battle.HP, battle.attack, battle.heal);
        printf("\n\n\n\n\n\n\n\n\n\n");
        printf("\n\n\n\n\n%s:\n\n生命: %d\t\t攻擊力: %d\t\t\t回復力: %d", man.name, man.HP, man.attack, man.heal);
        printf("\n\n\n\n\n\n\n\n\n\n");
        printf("------------------------------------------------------------------------------------------------\n\n\n");
        printf("1. 攻 擊\t\t2. 回 復\t\t3. 逃 跑 ");
        cin = getch();
        if (cin == '1')
        {
            system("CLS");
            print_man();
            Sleep(1000);
            system("CLS");
            print_ally();
            Sleep(1000);
            system("CLS");
            man.HP -= battle.attack;
            battle.HP -= man.attack;
        }
        else if (cin == '2')
        {
            system("CLS");
            printf("運 起 內 功 聚 集 真 氣，提 高 生 命 值\n\n\n生 命 + %d\n\n\n\n\n\n\n\n\n", man.heal);
            system("pause");
            man.HP += man.heal;
            goto LOOP_battle;
        }
        else if (cin == '3')
        {
            system("CLS");
            printf("腳 一 使 力，踩 輕 功  一 招 < 踏 雪 無 痕 >，縱 身 而 去 ...\n\n\n名 聲 - 300\n\n\n\n\n");
            /*ptr_HP = &man.HP;
            *ptr_HP -= 50;*/    //保留以防出問題
            man.repu -= 300;
            break;
        }

        if (battle.HP <= 0)
        {
            printf("對 方 已 無 生 命 跡 象...\n\n\n\n\n名聲: -500\t\t財富: +1000\n\n\n");
            man.repu -= 500;
            man.wealth += 1000;
            break;
        }
        else if (man.HP <= 0)
        {
            print_endgame();
            man.HP=200;man.repu=200;man.wealth=200;man.attack=200;man.heal=200;
            break;
        }
    }while (1);
}

void battle_boss()
{
    extern DATA man, boss;
    int cin;
    char c;
    FILE *ptr;

    LOOP_battle: do
    {
        system("CLS");
        printf("%s:\n\n生命: %d\t\t攻擊力: %d\t\t\t回復力: %d", boss.name, boss.HP, boss.attack, boss.heal);
        printf("\n\n\n\n\n\n\n\n\n\n");
        printf("\n\n\n\n\n%s:\n\n生命: %d\t\t攻擊力: %d\t\t\t回復力: %d", man.name, man.HP, man.attack, man.heal);
        printf("\n\n\n\n\n\n\n\n\n\n");
        printf("------------------------------------------------------------------------------------------------\n\n\n");
        printf("1. 攻 擊\t\t2. 回 復\t\t");
        cin = getch();
        if (cin == '1')
        {
            system("CLS");
            print_man();
            Sleep(1000);
            system("CLS");
            print_boss();
            Sleep(1000);
            man.HP -= boss.attack;
            boss.HP -= man.attack;
        }
        else if (cin == '2')
        {
            system("CLS");
            printf("運 起 內 功 聚 集 真 氣，提 高 生 命 值\n\n\n生 命 + %d\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n", man.heal);
            system("pause");
            man.HP += man.heal;
            goto LOOP_battle;
        }

        if (boss.HP <= 0)
        {
            printf("對 方 已 無 生 命 跡 象...\n\n\n\n\n名聲: +%d\t\t財富: +%d\n\n\n\n\n\n\n", boss.repu, boss.wealth);
            man.repu += boss.repu;
            man.wealth += boss.wealth;

            system("pause");
            system("CLS");
            ptr = fopen("E:\\課業\\1上 程式設計\\Final Project\\Final Project File\\獲勝對話.txt", "r");
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
        else if (man.HP <= 0)
        {
            print_endgame();
            man.HP=200;man.repu=200;man.wealth=200;man.attack=200;man.heal=200;
            break;
        }
    }while (1);
}
