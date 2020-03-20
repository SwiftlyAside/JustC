#include <cstdio> // same as stdio.h
#include <ctime> // same as time.h
#include <cstdlib> // srand , same as stdlib.h
#include <conio.h>
#define ESC 0x1b
#define NUM1 0x31
#define NUM2 0x32
#define NUM3 0x33

/*
 * Project
 *
 * 괴상한 게임
 * Easy gacha game inspired from stockmarket
 *
 * TVIX차트에서 영감을 받음. https://www.tradingview.com/symbols/NASDAQ-TVIX/
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
 * 취급 데이터 유형:       !사용자의 코인 잔량 (int)
 *                         사용자 데이터 (??)
 *                         !평균 단가 (float)
 *                         !평가 금액 (float)
 *                         !최대 구매 가능 개수 (float)
 *                         !시스템 코인 잔량 >> value의 영향을 받지 않음.
 *
 * 생명주기 특성 :         !ESC를 누르기 전까지 프로그램을 종료하지 않음
 *                         !사용자의 행동 이후 화면을 고침
 *                         (Very hard) 사용자의 행동이 없는 경우 '5'초마다 화면을 고침, 행동을 받으면 중단
 *
 * 최적화 & 수정:          반복구간 함수화
 *                         오차 감소
 *                         오버플로우 대응
 *                         
 *                     
 */

int owned_coin = 100000, system_coin = 0, to_buy, to_sell;
float average = 0.00;

int main() {
    srand(time(NULL));
    while (true)
    {
        const float current = (float)(rand() % 10000000) / 100.00;
        const float evaluated = (float)system_coin * (current - average);
        const int available = (int)((float)owned_coin / current);
        printf("===============================\n\n");
        printf("현재가 : %.2f\n\n", current);
        printf("평균단가: %.2f\n", average);
        printf("평가금액 : %.2f\n", evaluated);
        printf("투자한 금액 : %d\n", system_coin);
        printf("계좌 잔고 : %d\n\n", owned_coin);
        printf("===============================\n\n");
        printf("1. 매수하기!\n");
        printf("2. 매도하기!\n\n");
        printf("화면을 새로 고치려면 아무 키나 누르세요.\n\n");
        printf("종료하려면 ESC키를 누르세요.\n\n");
        const int selection = _getch();
        switch (selection) {
        case NUM1:
            printf("매수가능 수량: %d\n", available);
            printf("매수할 수량을 입력하십시오.: ");
            scanf_s("%d", &to_buy);
            if (to_buy <= available && to_buy != 0) {
                average = ((float)system_coin * average + (float)to_buy * current) / (float)(system_coin + to_buy);
                owned_coin -= to_buy * (int)current;
                system_coin += to_buy;
                printf("You Bought : %d Coin.\n아무 키나 누르세요.\n", to_buy);
            }
            else printf("구매 가능수량보다 크거나 값이 0입니다!\n");
            _getch();
            break;
        case NUM2:
            printf("매도할 수량을 입력하십시오.: ");
            scanf_s("%d", &to_sell);
            if (to_sell < system_coin && to_sell != 0) {
                average = ((float)system_coin * average - (float)to_sell * current) / (float)(system_coin - to_sell);
                owned_coin += to_sell * (int)current;
                system_coin -= to_sell;
                printf("You Sold : %d Coin.\n아무 키나 누르세요.\n", to_sell);
            }
            else if (to_sell == system_coin && to_sell != 0) {
                average = 0.00;
                owned_coin += to_sell * (int)current;
                system_coin -= to_sell;
                printf("You Sold : %d Coin.\n아무 키나 누르세요.\n", to_sell);
            }
            else printf("투자금액보다 크거나 값이 0입니다!\n");
            _getch();
            break;
        case ESC:
            exit(0);
        default:
            ;// 아뇨, 아무 것도 없군요.
        }
        system("cls");
    }
}
