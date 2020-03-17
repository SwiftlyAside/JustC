#include <stdio.h>	
/*
두수를 입력 받아 큰 수가 짝수이면 출력하시오

p
정수형 변수 2개 선언
I
 두 수를 입력
P
1. 두 수의 합 구하기
2. 합이 짝수이고 3의 배수인지 비교
O
저장된 합 출력
*/
void main()
{
    int n1, n2, sum;

    scanf_s("%d%d", &n1, &n2);

    sum = n1 + n2;
    (sum % 2 == 0 && sum % 3 == 0) ? printf("sum = %d", sum) : 0;
}
