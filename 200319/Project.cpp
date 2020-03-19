#include <cstdio> // same as stdio.h
#include <ctime> // same as time.h
#include <cstdlib> // srand , same as stdlib.h
#include <conio.h>
#include <windows.h> // for Sleep

/*
 * Project
 *
 * 괴상한 게임
 * gacha inspired from stockmarket
 *
 * TVIX차트에서 영감을 받음
 *
 * 흐름(사용자):     현재값 확인 > 코인 집어넣기 > 다시 현재값 확인 > 코인 꺼내기
 * 흐름(시스템):     (랜덤) 현재값 변경 > 출력
 *                   코인 잔량 반입/반출 > 출력
 *
 * 계산 방법:        반입 =  사용자 입금 코인 * 현재값
 *                   반출 =  사용자 출금 코인 * 현재값
 *                   평균 단가 = (시스템 코인 갯수 * 평균 단가 + 반입/반출 코인 갯수 * 현재가) / (시스템 코인 갯수 + 반입/반출 코인 갯수) [시스템 코인 갯수는 처리 전 갯수를 말함]
 *                   평가 금액 = 총액 * 평균단가 - 총액 * 현재가 
 *                   
 * 취급 데이터 유형:       !사용자의 코인 잔량 (TODO: int로 변경)
 *                         사용자 데이터 (??)
 *                         !평균 단가 (float)
 *                         !평가 금액 (float)
 *                         TODO: 최대 구매 가능 개수 (int)
 *                         !시스템 코인 잔량 >> value의 영향을 받지 않음. (TODO: int로 변경)
 *
 * 생명주기 특성 :         TODO: ESC를 누르기 전까지 프로그램을 종료하지 않음
 *                         !사용자의 행동 이후 화면을 고침
 *                         (Very hard) 사용자의 행동이 없는 경우 '5'초마다 화면을 고침, 행동을 받는 경우 일시 중단
 *                     
 */

/*void arrayTest() {
    int num[6] = { 1, 3, 5, 7, 9, 10 };
    int num2[] = { 2,4,6 };

    for (int i = 0; i < 6; i++) {
        printf("[ %d ]", num[i]);
    }
    printf("\n============================\n");
    for (int i = 0; i < 3; i++) {
        printf("[ %d ]", num2[i]);
    }
}
void arrayTest2() {
    int num[6] = { 1, 3, 5, 7, 9, 10 };

    num[3] = 12;
    for (int i = 0; i < 6; i++) {
        printf("[ %d ]", num[i]);
    }
}
void arrayTest3() {
    char name[20] = "hello";

    for (int i = 0; i < 20; i++) {
        printf("[ %c ]", name[i]);
        name[i] += 3;
    }
    printf("%s\n", name);
}
void arrayTest4() {
    char name[20] = "hello";
    //name[i] != NULL  <- 문자가 NULL이 아닌동안
    //name[i] 문자가 존재하면
    for (int i = 0; name[i]/*name[i] != NULL#1#; i++) {
        printf("[ %c ]", name[i]);
        name[i] += 3;
    }
    printf("%s\n", name);
}
void lotto1() {
    int lotto[5] = { 0, };

    for (int i = 0; i < 5; i++) {
        printf("[%d]", lotto[i]);
        printf("%d\n", rand() % 5 + 1);
    }

}

void lotto2() {
    int lotto[5] = { 0, }, lottoNum;

    for (int i = 0; i < 5; i++) {
        lottoNum = rand() % 5 + 1;
        if (lotto[lottoNum] == 0) {
            lotto[lottoNum] = 1;
        }
    }

    for (int i = 0; i < 5; i++)
        printf("[%d]", lotto[i]);

}

void lotto3() {
    int lotto[5] = { 0, }, lottoNum;

    for (int i = 0; i < 5; i++) {
        lottoNum = rand() % 5 + 1;
        if (lotto[lottoNum] == 0) {
            lotto[lottoNum] = 1;
        }
    }

    for (int i = 0; i < 5; i++)
    {
        if (lotto[i] == 1)
            printf("[%d]", i + 1);
    }


}

void lotto4() {
    int lotto[5] = { 0, }, lottoNum;

    for (int i = 0; i < 5; ) {
        lottoNum = rand() % 5;
        if (lotto[lottoNum] == 0) {
            lotto[lottoNum] = 1;
            i++;
        }
    }
    for (int i = 0; i < 5; i++)
    {
        if (lotto[i] == 1)
            printf("[%d]", i + 1);
    }
}

void lotto5() {
    int lotto[45] = { 0, }, lottoNum;

    for (int i = 0; i < 6; ) {
        lottoNum = rand() % 45;
        if (lotto[lottoNum] == 0) {
            lotto[lottoNum] = 1;
            i++;
        }
    }
    for (int i = 0; i < 45; i++)
    {
        if (lotto[i] == 1)
            printf("[%d]", i + 1);
    }
    char chosen[30] = "YOU HAVE BEEN CHOSEN!";
}*/

float owned_coin = 100000, system_coin = 0;
float average = 0.00;

int main(int argc, char* argv[]) {
    srand(time(NULL));
    while (true)
    {
        int selection = 3;
        const float current = (float)(rand() % 10000000) / 100.00;
        const float evaluated = system_coin * (current - average);
        printf("Value : %.2f\n\n", current);
        printf("Average value: %.2f\n", average);
        printf("Evaluated Balance : %.2f\n", evaluated);
        printf("Your Coin : %.0f\n", system_coin);
        printf("Your Account Balance : %.0f\n\n", owned_coin);
        printf("===============================\n");
        printf("1. Buy coin now!\n");
        printf("2. Sell coin now!\n");
        printf("3. Refresh\n");
        scanf_s("%d", &selection);
        switch (selection) {
        case 1:
            float to_buy;
            printf("Amount to buy: ");
            scanf_s("%f", &to_buy);
            average = (system_coin * average + to_buy * current) / (system_coin + to_buy);
            owned_coin -= to_buy * current;
            system_coin += to_buy;
            printf("You Bought : %.0f Coin.\nPress any key.\n", to_buy);
            _getch();
            break;
        case 2:
            float to_sell;
            printf("Amount to sell: ");
            scanf_s("%f", &to_sell);
            if (to_sell < system_coin && to_sell != 0) {
                average = (float)((system_coin * average - to_sell * current) / (int)(system_coin - to_sell));
                owned_coin += to_sell * current;
                system_coin -= to_sell;
                printf("You Sold : %.0f Coin.\nPress any key.\n", to_sell);
            }
            else if (to_sell == system_coin && to_sell != 0) {
                average = 0.00;
                owned_coin += to_sell * current;
                system_coin -= to_sell;
                printf("You Sold : %.0f Coin.\nPress any key.\n", to_sell);
            }
            else printf("You entered Too much value or zero!\n");
            _getch();
            break;
    	case 3:
			break;
        }
        system("cls");
    }
}
