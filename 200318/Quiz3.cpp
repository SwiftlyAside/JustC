#include <cstdio>

int main(int argc, char* argv[]) {
	/*// 두 수의 최소 공배수, 최대 공약수
	int num1, num2;
	printf("두 숫자 입력.: ");
	scanf_s("%d %d", &num1, &num2);
	// 최대 공약수
	int a = num1, b = num2, c;
	if (num1 < num2) 
		a = num2, b = num1;
	while (b) {
		c = a % b;
		a = b;
		b = c;
	}
	printf("%d, %d의 최대 공약수: %d\n", num1, num2, a);
	// 최소 공배수
	const int lcm = num1 * num2 / a;
	printf("%d, %d의 최소 공배수: %d\n", num1, num2, lcm);*/
	
	/*// 1 ~ n 사이의 모든 약수를 출력할 것
	int n;
	printf("숫자를 주세요.: ");
	scanf_s("%d", &n);
	printf("\n약수 목록: ");
	for (int i = 1; i <= n; i++) {
		if (n % i == 0)
			printf("%d ", i);
	}*/

	/*// 1 ~ n 사이의 모든 소수를 출력할 것.
	int n, i, j;
	printf("숫자를 주세요.: ");
	scanf_s("%d", &n);
	printf("\n소수 목록: ");
	for (i = 1; i <= n; i++) {
		for (j = 2; j <= i; j++) {
			if (i % j == 0) break;
		}
		if (i <= j)
			printf("%d ", i);
	}*/

	/*// 1 ~ 1000까지의 자연수 중 4와 6으로 나눈 나머지가 1인 수의 총합을 출력할 것.
	for (int i = 1; i <= 1000; i++) {
		if (i % 4 == 1 && i % 6 == 1)
			printf("%d ", i);
	}*/

	// 1 ~ 1000사이의 자연수중 자기 자신을 제외한 모든 약수의 합이 자신과 동일한 수를 출력할 것
	// 약수 구하기 > 다 더하기 > 합이 자신과 같으면 출력
	printf("완전수 목록: ");
	for (int i = 1; i <= 1000; i++) {
		int sum = 0;
		for (int j = 1; j < i; j++)
		{
			if (i % j == 0)
				sum += j;
		}
		if (sum == i)
			printf("%d ", i);
	}
}
