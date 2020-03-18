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

	// 별이 몇개
	// 오른쪽 왼쪽 출력 적절히 사용
	
}
