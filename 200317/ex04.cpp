#include <stdio.h>	
/*
두수를 입력 받아 큰 수가 짝수이면 출력하시오

p
정수형 변수 2개 선언
I
 두 수를 입력
P
1. 두 수 비교 큰 수를 저장
2. 저장된 큰수가 짝수인지 비교
O
저장된 큰 수 출력
*/
void main()
{
    int n1, n2, max, ret;

    scanf_s("%d%d", &n1, &n2);

    max = (n1 > n2) ? n1 : n2;
    ret = max % 2;
    (ret==0) ? printf("max = %d", max) : 0;
}
