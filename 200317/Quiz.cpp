#include <cstdio>
#include <cstdlib>
#include <conio.h>

// 두 수중 최댓값반환.
int evaluate(int su1, int su2) {
	int max = su2;
	if (su1 > su2)
		max = su1;
	return max;
}

// 두 수중 최솟값반환.
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

	// 홀짝검사
	int su;
	printf("NUMBER: ");
	scanf_s("%d", &su);
	if (su % 2 == 0)
		printf("%d is Even Number.", su);
	else printf("%d is Odd Number.", su);
	*/
	
	/*// 도시락 요금
	int total_pay, ea;
	const int default_ea = 10;
	printf("도시락 개수: ");
	scanf_s("%d", &ea);
	total_pay = ea * 2500;
	if (ea > default_ea) 
		total_pay -= (ea - default_ea) * 100;
	printf("\nTotal Pay: %d WON!", total_pay);*/

	/*// 디스켓
	int total_pay, ea;
	printf("디스켓 통 개수: ");
	scanf_s("%d", &ea);
	total_pay = ea * 5000;
	if (ea >= 100)
		total_pay *= 0.88;
	else if (ea >= 10)
		total_pay *= 0.9;
	printf("\nTotal Pay: %d WON!", total_pay);*/
	
	/*// 성적평가하기
	int one, two, three;
	printf("점수를 입력: ");
	scanf_s("%d%d%d", &one, &two, &three);
	const float avg = (float)(one + two + three) / 3;
	if (avg >= 90) printf("A");
	else if (avg >= 80) printf("B");
	else if (avg >= 70) printf("C");
	else if (avg >= 60) printf("D");
	else printf("F");*/

	/*// 요금계산 (분단위)
	int totalPay = 3000, man, useTime;
	const int default_time = 30;
	printf("몇 명?: ");
	scanf_s("%d", &man);
	printf("말을 얼마나 탔는지 입력하쇼 (minutes): ");
	scanf_s("%d", &useTime);
	if (useTime > default_time)
		totalPay += (useTime - default_time) * 50;
	printf("\nYour charge is: %d WON!", totalPay * man);*/

	/*// 요금계산 (올림)
	int totalPay = 3000, man, useTime;
	const int default_time = 30;
	printf("몇 명?: ");
	scanf_s("%d", &man);
	printf("말을 얼마나 탔는지 입력하쇼 (minutes): ");
	scanf_s("%d", &useTime);
	if (useTime > default_time)
		totalPay += (useTime - default_time + 9) / 10 * 500;
	printf("\n%d Peoples, Your charge is: %d WON!", man, totalPay * man);*/

	/*// 요금계산 (반올림)
	int total_pay = 3000, man, use_time;
	const int default_time = 30;
	printf("몇 명?: ");
	scanf_s("%d", &man);
	printf("말을 얼마나 탔는지 입력하쇼 (minutes): ");
	scanf_s("%d", &use_time);
	if (use_time > default_time)
		total_pay += (use_time - default_time + 5) / 10 * 500;
	printf("\n%d Peoples, Your charge is: %d WON!", man, total_pay * man);*/

	/*// 요금계산 (버림, 분당 계산)
	int total_pay = 3000, man, use_time;
	const int default_time = 30;
	printf("몇 명?: ");
	scanf_s("%d", &man);
	printf("말을 얼마나 탔는지 입력하쇼 (minutes): ");
	scanf_s("%d", &use_time);
	if (use_time > default_time)
		total_pay += (use_time - default_time) / 10 * 500;
	printf("\n%d Peoples, Your charge is: %d WON!", man, total_pay * man);*/
	
	/*int num;
	scanf_s("%d", &num);
	switch (num)
	{
	case 1:
		printf("1입력");
		break;
	case 2:
		printf("2입력");
		break;
	default:
		printf("1, 2가 아닌 나머지 입력");
	}*/
	
	/*int num, data;
		while(true) {
			printf("========================\n");
			printf("1. 데이터 입력\n");
			printf("2. 데이터 출력\n");
			printf("3. 종료\n");
			printf("========================\n");
			scanf_s("%d", &num);
			switch (num) {
			case 1:
				printf("데이터를 입력하세요.\n");
				scanf_s("%d", &data);
				break;
			case 2:
				printf("%d", data);
				_getch();
				break;
			case 3:
				exit(1);
			}
			system("cls");
		}*/
	
	/*int num;
	scanf_s("%d", &num);
		switch (num) {
		case 1:
			printf("one");
			break;
		case 2:
			printf("two");
			break;
		case 3:
			printf("three");
			break;
		default:
			printf("error");
		}*/

	/*// 달력
	int num;
	printf("Value: ");
	scanf_s("%d", &num);
	num = (num + 6) / 7;
	switch (num) {
	case 1:
		printf("첫째주");
		break;
	case 2:
		printf("둘째주");
		break;
	case 3:
		printf("셋째주");
		break;
	case 4:
		printf("넷째주");
		break;
	case 5:
		printf("다섯째주");
		break;
	}*/

	/*// 선풍기...
	int num, data = 0;
	while(true) {
		switch (data) {
		case 1 :
			printf("선풍기 - 미풍\n");
			break;
		case 2:
			printf("선풍기 - 약풍\n");
			break;
		case 3:
			printf("선풍기 - 강풍\n");
			break;
		default:
			printf("선풍기 - 정지\n");
		}
		printf("========================\n");
		printf("1. 미풍;\n");
		printf("2. 약풍\n");
		printf("3. 강풍\n");
		printf("4. 정지\n");
		printf("?. 프로그램 종료\n");
		printf("========================\n");
		scanf_s("%d", &num);
		switch (num) {
		case 1:
			data = 1;
			printf("미풍으로 전환했습니다!");
			_getch();
			break;
		case 2:
			data = 2;
			printf("약풍으로 전환했습니다!");
			_getch();
			break;
		case 3:
			data = 3;
			printf("강풍으로 전환했습니다!");
			_getch();
			break;
		case 4:
			data = 0;
			printf("선풍기를 껐습니다!");
			_getch();
			break;
		default:
			exit(1);
		}
		system("cls");
	}*/

}
