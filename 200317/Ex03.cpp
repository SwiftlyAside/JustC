#include <stdio.h>	
/*
수를 입력 받아 3의 배수이면 출력하시오
p
정수형 변수 3개 선언
두수는 입력
한 수는 큰수
I
 두 수를 입력
P
두 수 비교 큰 수를 저장
O
저장된 큰 수 출력
*/
void main()
{
    int n1, n2, n3, max;

    scanf_s("%d%d%d", &n1, &n2, &n3);

    max = (n1 > n2) ?  n1 : n2;
    max = (max > n3) ? max : n3;
    
    printf("max = %d", max);
}
