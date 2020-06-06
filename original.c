/*****
744041 綾本 公平
5000兆円ガチャ
確率　MR 1%, SSR 3%, SR 10%, R 30%, N 56%
天井はないです。
*****/
#include <stdio.h>
#include <handy.h>
#include <stdlib.h> // rand関数を使用
#include <time.h>

int main()
{
    HgOpen(400, 400);
    int n = 0;
    int a = 0;
    int b = 0;
    int x = 0;
    int random;
    int result;
    int v = -5;
    int prize;

    while (n <= 0)
    {
        HgSetColor(HG_RED);
        HgSetFont(HG_HBI, 50);
        HgText(23, 230, "5000兆円ガチャ");
        HgSetColor(HG_BLACK);
        HgSetFont(HG_G, 30);
        HgText(110, 130, "ガチャを引く");
        for (;;)
        {
            a = HgGetChar();
            printf("key = %d\n", a); // デバック用コマンド
            if (a == 13)
                break;
        }
        srand((unsigned int)time(NULL)); //乱数を生成
        random = rand();                 // 乱数を取得
        printf("%d\n", random);          // デバッグ用コマンド
        result = random % 1000;          // ガチャの結果が決まる
        printf("%d\n", result);          // デバッグ用コマンド

        for (int y = 450; y > 210; y += v) //ガチャの演出
        {

            HgClear();
            HgSetFillColor(HG_YELLOW);
            HgCircleFill(200, y, 50, 1);
            HgSleep(0.03);
        }

        HgSetFont(HG_C, 20);
        HgText(105, 100, "enterで結果を表示");

        for (;;)
        {
            b = HgGetChar();
            printf("key = %d\n", b); // デバック用コマンド
            if (b == 13)
                break;
        }
        printf("result = %d\n", result);
        if (0 <= result && result <= 9)
        {
            HgClear();
            HgSetColor(HG_MAGENTA);
            HgSetFont(HG_G, 70);
            HgText(155, 300, "MR");
            HgSetColor(HG_BLACK);
            HgSetFont(HG_C, 70);
            HgText(50, 210, "5000兆円"); // 誰かくれんかな…
        }
        else if (10 <= result && result <= 39) // SSRをPlayerが得る
        {
            srand((unsigned int)time(NULL)); //乱数を生成
            prize = rand();                  //乱数を取得
            printf("%d\n", prize);           //デバック用コマンド
            prize = prize % 2;
            printf("%d\n", prize); //デバック用コマンド
            if (prize == 0)
            {
                HgClear();
                HgSetColor(HG_CYAN);
                HgSetFont(HG_G, 70);
                HgText(120, 300, "SSR");
                HgSetColor(HG_BLACK);
                HgSetFont(HG_C, 40);
                HgText(25, 230, "昔から一途な異性の");
                HgText(120, 190, "幼なじみ");
            }
            else if (prize == 1)
            {
                HgClear();
                HgClear();
                HgSetColor(HG_CYAN);
                HgSetFont(HG_G, 70);
                HgText(120, 300, "SSR");
                HgSetColor(HG_BLACK);
                HgSetFont(HG_C, 55);
                HgText(40, 220, "宝くじの一等");
            }
            else
            {
                HgClear();
                HgSetColor(HG_CYAN);
                HgSetFont(HG_G, 70);
                HgText(120, 300, "SSR");
                HgSetColor(HG_BLACK);
                HgSetFont(HG_C, 40);
                HgText(30, 225, "ロイヤルストレート");
                HgText(100, 165, "フラッシュ");
            }
        }
        else if (40 <= result && result <= 139)
        {
            srand((unsigned int)time(NULL)); //乱数を生成
            prize = rand();                  //乱数を取得
            printf("%d\n", prize);           //デバック用コマンド
            prize = prize % 4;
            printf("%d\n", prize); //デバック用コマンド
            if (prize == 0)
            {
                HgClear();
                HgSetColor(HG_BLUE);
                HgSetFont(HG_C, 70);
                HgText(155, 300, "SR");
                HgSetColor(HG_BLACK);
                HgSetFont(HG_C, 35);
                HgText(10, 230, "自販機の下に落ちていた");
                HgText(135, 190, "500円玉");
            }
            else if (prize == 1)
            {
                HgClear();
                HgSetColor(HG_BLUE);
                HgSetFont(HG_C, 70);
                HgText(155, 300, "SR");
                HgSetColor(HG_BLACK);
                HgSetFont(HG_C, 40);
                HgText(27, 230, "四つ葉のクローバー");
            }
            else if (prize == 2)
            {
                HgClear();
                HgSetColor(HG_BLUE);
                HgSetFont(HG_C, 70);
                HgText(155, 300, "SR");
                HgSetColor(HG_BLACK);
                HgSetFont(HG_C, 50);
                HgText(105, 230, "ツチノコ");
            }
            else if (prize == 3)
            {
                HgClear();
                HgSetColor(HG_BLUE);
                HgSetFont(HG_C, 70);
                HgText(155, 300, "SR");
                HgSetColor(HG_BLACK);
                HgSetFont(HG_C, 38);
                HgText(10, 230, "合コンで運命の出会い");
            }
            else
            {
                HgClear();
                HgSetColor(HG_BLUE);
                HgSetFont(HG_C, 70);
                HgText(155, 300, "SR");
                HgSetColor(HG_BLACK);
                HgSetFont(HG_C, 45);
                HgText(43, 230, "夢のニート生活");
            }
        }
        else if (140 <= result && result <= 439)
        {
            srand((unsigned int)time(NULL)); //乱数を生成
            prize = rand();                  //乱数を取得
            printf("%d\n", prize);           //デバック用コマンド
            prize = prize % 4;
            printf("%d\n", prize); //デバック用コマンド
            if (prize == 0)
            {
                HgClear();
                HgSetColor(HG_GREEN);
                HgSetFont(HG_C, 70);
                HgText(175, 300, "R");
                HgSetColor(HG_BLACK);
                HgSetFont(HG_C, 45);
                HgText(60, 230, "商品券1500円");
            }

            else if (prize == 1)
            {
                HgClear();
                HgSetColor(HG_GREEN);
                HgSetFont(HG_C, 70);
                HgText(175, 300, "R");
                HgSetColor(HG_BLACK);
                HgSetFont(HG_C, 45);
                HgText(25, 230, "アイスの当たり券");
            }
            else if (prize == 2)
            {
                HgClear();
                HgSetColor(HG_GREEN);
                HgSetFont(HG_C, 70);
                HgText(175, 300, "R");
                HgSetColor(HG_BLACK);
                HgSetFont(HG_C, 50);
                HgText(75, 230, "海外の切手");
            }
            else if (prize == 3)
            {
                HgClear();
                HgSetColor(HG_GREEN);
                HgSetFont(HG_C, 55);
                HgText(175, 300, "R");
                HgSetColor(HG_BLACK);
                HgSetFont(HG_C, 45);
                HgText(16, 230, "ギザギザの10円玉");
            }
            else
            {
                HgClear();
                HgSetColor(HG_GREEN);
                HgSetFont(HG_C, 55);
                HgText(175, 300, "R");
                HgSetColor(HG_BLACK);
                HgSetFont(HG_C, 50);
                HgText(77, 230, "お米5キロ");
            }
        }
        else
        {
            srand((unsigned int)time(NULL)); //乱数を生成
            prize = rand();                  //乱数を取得
            printf("%d\n", prize);           //デバック用コマンド
            prize = prize % 9;
            printf("%d\n", prize); //デバック用コマンド
            if (prize == 0)
            {
                HgClear();
                HgSetColor(HG_DGRAY);
                HgSetFont(HG_C, 55);
                HgText(175, 300, "N");
                HgSetColor(HG_BLACK);
                HgSetFont(HG_C, 55);
                HgText(110, 227, "たわし");
            }
            else if (prize == 1)
            {
                HgClear();
                HgSetColor(HG_DGRAY);
                HgSetFont(HG_C, 55);
                HgText(175, 300, "N");
                HgSetColor(HG_BLACK);
                HgSetFont(HG_C, 55);
                HgText(133, 227, "石鹸");
            }
            else if (prize == 2)
            {
                HgClear();
                HgSetColor(HG_DGRAY);
                HgSetFont(HG_C, 55);
                HgText(175, 300, "N");
                HgSetColor(HG_BLACK);
                HgSetFont(HG_C, 40);
                HgText(25, 227, "ポケットティッシュ");
            }
            else if (prize == 3)
            {
                HgClear();
                HgSetColor(HG_DGRAY);
                HgSetFont(HG_C, 55);
                HgText(175, 300, "N");
                HgSetColor(HG_BLACK);
                HgSetFont(HG_C, 50);
                HgText(71, 227, "ベルマーク");
            }
            else if (prize == 4)
            {
                HgClear();
                HgSetColor(HG_DGRAY);
                HgSetFont(HG_C, 55);
                HgText(175, 300, "N");
                HgSetColor(HG_BLACK);
                HgSetFont(HG_C, 40);
                HgText(25, 227, "ペットボトルのふた");
            }
            else if (prize == 5)
            {
                HgClear();
                HgSetColor(HG_DGRAY);
                HgSetFont(HG_C, 55);
                HgText(175, 300, "N");
                HgSetColor(HG_BLACK);
                HgSetFont(HG_C, 55);
                HgText(110, 227, "レジ袋");
            }
            else if (prize == 6)
            {
                HgClear();
                HgSetColor(HG_DGRAY);
                HgSetFont(HG_C, 55);
                HgText(175, 300, "N");
                HgSetColor(HG_BLACK);
                HgSetFont(HG_C, 55);
                HgText(110, 227, "爪楊枝");
            }
            else if (prize == 7)
            {
                HgClear();
                HgSetColor(HG_DGRAY);
                HgSetFont(HG_C, 55);
                HgText(175, 300, "N");
                HgSetColor(HG_BLACK);
                HgSetFont(HG_C, 43);
                HgText(25, 227, "A1のプリント用紙");
            }
            else if (prize == 8)
            {
                HgClear();
                HgSetColor(HG_DGRAY);
                HgSetFont(HG_C, 55);
                HgText(175, 300, "N");
                HgSetColor(HG_BLACK);
                HgSetFont(HG_C, 50);
                HgText(80, 227, "9Hの鉛筆");
            }
            else
            {
                HgClear();
                HgSetColor(HG_DGRAY);
                HgSetFont(HG_C, 55);
                HgText(175, 300, "N");
                HgSetColor(HG_BLACK);
                HgSetFont(HG_C, 50);
                HgText(83, 227, "単5の電池");
            }
        }
        HgSetFont(HG_MB, 30);
        HgText(50, 70, "enterで終了");
        HgSetFont(HG_MB, 30);
        HgText(50, 30, "他のキーで続行");
        x = HgGetChar();
        printf("key = %d\n", x); // デバック用コマンド
        if (x == 13)
        {
            n++;
        }
        HgClear();
    }

    HgClose();
    return 0;
}
