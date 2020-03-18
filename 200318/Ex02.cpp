#include <cstdio>

int main(int argc, char* argv[]) {
	/*int su, sum = 0;

	for (su = 1; su <= 10; su++)
		sum += su;
	printf("sum = %d\n", sum);*/

	/*// 위의 역순
	int su, sum = 0;

	for (su = 10; su >= 1; su--)
		sum += su;
	printf("sum = %d\n", sum);*/

	/*int su, sum = 0;

	for(su = 1; su <= 10; su++) {
		if (su % 2 == 1)
			sum += su;
	}
	printf("sum = %d\n", sum);*/

	/*// 적절하다
	int su, sum = 0;

	for (su = 1; su <= 10; su += 2)
		sum += su;
	printf("sum = %d\n", sum);*/

	/*// 생략했다
	int su = 1, sum = 0;

	for (;;)
		sum += su++;
	// Unreachable
	printf("sum = %d\n", sum);*/

	// 다수의 식을 이용할수 있음.
}
