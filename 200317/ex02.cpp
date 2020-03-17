#include <cstdio>

int evaluate(int su1, int su2) {
	int max = su2;
	if (su1 > su2)
		max = su1;
	return max;
}

int min_evaluate(int su1, int su2) {
	int min = su1;
	if (su1 > su2)
		min = su2;
	return min;
}

void show_absolute_value(int su) {
	if (su >= 0)
		printf("Absolute : %d", su);
	else
		printf("Absolute : %d", -su);
}

void is_even_or_odd(int su) {
	if (su % 2 == 0)
		printf("Even : %d", su);
	else
		printf("Odd : %d", su);
}

void evaluate_three(int su1, int su2, int su3) {
	int max = 0, min = 0;
	max = evaluate(evaluate(su1, su2), su3);
	min = min_evaluate(min_evaluate(su1, su2), su3);
	printf("%d is max\n", max);
	printf("%d is min\n", min);
}

void print_max_number(int su1, int su2) {
	int max = evaluate(su1, su2);
	printf("Max value: %d", max);
}

void print_sixth(int su1, int su2) {
	int sum = su1 + su2;
	if (sum % 6 == 0)
		printf("%d is OK", sum);
}

void print_even(int su1, int su2) {
	int max = evaluate(su1, su2);
	if (max % 2 == 0)
		printf("%d is Even.\n", max);
}

int main(int argc, char* argv[]) {
	/*
	float su1 = 3.01, su2 = 3.0;
	
	printf("변수 su1과 su2의 크기 비교 결과 : \n");

	int num;

	printf("Ay, Enter the score...");
	scanf_s("%d", &num);
	if (!((num > 0) && (num <= 100)))
	{
		printf("Out of range.\n");
	}

	int su1;
	float su2;

	// 전부 변경후의 값으로 출력됨.
	su1 = 5; ++su1; printf("++su1 = %d\n", su1);
	su1 = 5; su1++; printf("su1++ = %d\n", su1);
	su2 = 12.3; ++su2; printf("++su2 = %f\n", su2);
	su2 = 12.3; su2++; printf("su2++ = %f\n", su2);

	int su1, su2, su3;

	su1 = 10; su2 = ++su1;
	su1 = 10; su3 = su1++;
	printf("su2 = %d\n", su2);
	printf("su3 = %d\n", su3);

	int su;
	printf("Enter any number :");
	scanf_s("%d", &su);
	su % 2 == 0 ? printf("%d : 짝수\n", su) : printf("%d : 홀수\n", su);
	printf("Enter any number again :");
	scanf_s("%d", &su);
	su % 2 == 0 ? printf("%d : 짝수\n", su) : printf("%d : 홀수\n", su);

	// 비트연산은 안합니다.

	int su;
	printf("Enter any number :");
	scanf_s("%d", &su);
	su % 3 == 0 ? printf("%d : 3의 배수\n", su) : printf("%d : 그냥 숫자\n", su);

	int su1, su2;
	printf("Enter two numbers :");
	scanf_s("%d%d", &su1, &su2);
	su1 > su2 ? printf("%d > %d\n", su1, su2) : printf("%d < %d\n", su1, su2);


	int su1, su2, su3;
	printf("Enter three numbers :");
	scanf_s("%d%d%d", &su1, &su2, &su3);
	su1 > su2 ?
		su1 > su3 ? 
		printf("%d is the biggest number.\n", su1) : printf("%d is the biggest number.\n", su3) : su2 > su3 ? 
		printf("%d is the biggest number.\n", su2) : printf("%d is the biggest number.\n", su3);

	int su1, su2, max;
	printf("Enter two numbers :");
	scanf_s("%d%d", &su1, &su2);
	su1 > su2 ? 
		su1 % 2 == 0 ? 
		max = su1 : max = 0 :
	su2 % 2 == 0 ? 
		max = su2 : max = 0;
	printf("%d is the biggest even number. Zero means neither two numbers are satisfied conditions.\n", max)

	int su1, su2;
	printf("Enter two numbers :");
	scanf_s("%d%d", &su1, &su2);
	int sum = su1 + su2;
	sum % 6 == 0 ? printf("Yes\n") : printf("No");

	int num1 = 1, num2 = 0;
	if (num1 == 1)
		printf("True");
	if (num2 != 0)
		printf("False");

	int su;
	printf("Enter any number : ");
	scanf_s("%d", &su);
	if (su % 3 == 0)
		printf("%d : 3의 배수\n", su);

	int su;
	printf("Enter any number : ");
	scanf_s("%d", &su);
	is_even_or_odd(su);

	int su;
	printf("Enter any number : ");
	scanf_s("%d", &su);
	show_absolute_value(su);

	int su1, su2;
	printf("Enter two numbers :");
	scanf_s("%d%d", &su1, &su2);
	print_max_number(su1, su2);

	int su1, su2;
	printf("Enter two numbers :");
	scanf_s("%d%d", &su1, &su2);
	print_even(su1, su2);

	int su1, su2;
	printf("Enter two numbers :");
	scanf_s("%d%d", &su1, &su2);
	print_sixth(su1, su2);

	int su1, su2, su3;
	printf("Enter two numbers :");
	scanf_s("%d%d%d", &su1, &su2, &su3);
	evaluate_three(su1, su2, su3);
	
	int su1, su2, max, min;
	printf("Enter two numbers :");
	scanf_s("%d%d", &su1, &su2);
	if (su1 > su2)
	{
		max = su1;
		min = su2;
	}
	else
	{
		max = su2;
		min = su1;
	}
	printf("\n max = %d min = %d", max, min);
	*/
	int su;
	printf("NUMBER: ");
	scanf_s("%d", &su);
	if (su >= 0)
	{
		if ((su % 2) == 0)
			printf("%d : Even Positive", su);
		else
			printf("%d : Odd Positive", su);
	}
	else
		printf("%d : Negative", su);
	printf("\n===END===");
}
