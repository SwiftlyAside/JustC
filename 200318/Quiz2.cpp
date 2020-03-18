#include <cstdio>

int main(int argc, char* argv[]) {
	/*// 4연속 헬룽
	for (int i = 1; i <= 4; i++) {
		printf("%d. Hello\n", i);
	}
	printf("\n\n");

	// A ~ Z 순차출력
	for (char i = 'A'; i <= 'Z'; i++) {
		printf("%c", i);
		if (i == 'Z') break;
		printf(", ");
	}
	printf("\n\n");

	// 3 + 6 + 9 = [결과] 출력
	int sum = 0;
	for (int i = 3; i <= 9; i += 3) {
		printf("%d", i);
		sum += i;
		if (i == 9) {
			printf(" = %d", sum);
			break;
		}
		printf("+");
	}*/

	/*// 다른 방법
	int i, sum = 0;
	for (i = 3; i <= 9; i += 3) {
		printf("%d + ", i);
		sum += i;
	}
	printf("\b\b = %d", sum);*/

	/*int su1, su2;

	for (su1 = 1; su1 <= 5; su1++) {
		for (su2 = 1; su2 <= 5; su2++)
			printf("su1 = %d\t su2 = %d\n", su1, su2);
	}*/

	/*// 구구단
	printf("x\t1\t2\t3\t4\t5\t6\t7\t8\t9\n\n");
	for (int i = 1; i <= 9; i++) {
		printf("%d\t", i);
		for (int j = 1; j <= 9; j++) {
			printf("%d\t", i * j);
		}
		printf("\n\n");
	}*/

	/*// 첫날에 10원을 예금하고, 다음날에는 전날의 2배를 예금하는
	// 방식으로 한달 동안 저축한 금액은 ?
	double money = 0, money_to_put = 10;
	for (int i = 1; i <= 30; i++, money_to_put *= 2) {
		money += money_to_put;
	}
	printf("%.0f원", money);*/

	/*// 1 ~ 1000 덧셈 (조건: 3의배수는 제외, 그러나 15의배수는 더함)
	// 다르게 표현하면, 3으로 나눈 나머지가 0이 아닌것 추가, 여기에 15의 배수를 추가.
	int sum = 0;
	for (int i = 1; i <= 1000; i++) {
		if (i % 15 == 0 || i % 3 != 0)
			sum += i;
	}
	printf("3의 배수를 제외하나, 15의 배수는 포함한 총합 %d", sum);*/

	/*// 1부터 홀수합, 합이 1만에 다다르기 전에 마지막 수 출력.
	int sum = 0;
	int i;
	for (i = 1; i + sum < 10000; i += 2)
		sum += i;
	printf("총 합: %d\n마지막 수: %d", sum, i);*/

	/*// 문제 직접 보고 해결
	int n, sum;
	printf("n값 지정: ");
	scanf_s("%d", &n);
	sum = 1 + n;
	for (int i = 2; i <= n - 1; i++) 
		sum += 2 * i;
	printf("계산 결과: %d", sum);*/

	/*// 1, 1+2, 1+2+3, 1+2+3+4,…, 1+2+…+n의 합
	int n, sum = 0;
	printf("n값 지정: ");
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) 
			sum += j;
	}
	printf("%d", sum);*/

	/*// 하지마
	for (int i = 1; i <= 3; i++) {
		for (int j = 1; j <= i; j++)
			printf("☆");
		printf("\n");
	}
	printf("\n");
	for (int i = 3; i >= 1; i--) {
		for (int j = 1; j <= i; j++)
			printf("☆");
		printf("\n");
	}*/
}
