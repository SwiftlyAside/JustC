#include <cstdio>
// 주석

/*
'전역' 변수
*/
int global_variable;

int main() {
	/*
	printf("이름 : 홍길동\n");
	printf("나이 : 16\n");
	printf("주소 : 산골짜기\n");

	printf("\t<(^. .^)>\n");
	printf("\t(\"(00)\")\n\n");
	printf("\t배고프다 애용~");

	printf("%d + %d = %d\n", 5, 12, 5 + 12);
	printf("%d + %d = \n", 5, 12, 5 + 12);
	printf("%d + %d = %d\n", 5, 12);

	printf("실수형 상수 : %f \n", 123.456);
	printf("지수형 상수 : %d \n", 123.456);
	printf("실수형 상수 : %f \n", 123);

	printf("문자 %c의 ASCII 코드 값은 %d이다.\n", 'a', 'a');
	printf("ASCII 코드 값이 %d인 문자는 %c 이다.\n", 98, 98);

	printf("%s\n", "This is a string.");

	printf("======================================\n");
	printf("%s\t\t%s\t\t%s\n", "이름", "나이", "주소");
	printf("======================================\n");
	printf("%s\t\t%d\t\t%s\n", "홍길동", 20, "산골짜기");
	printf("%s\t\t%d\t\t%s\n", "이순신", 28, "바다");

	int age = 21;
	float weight = 50, height = 163.5;

	printf("나의 나이는 %2d세 입니다.\n", age);
	printf("나의 몸무게는 %2.2f(kg)입니다.\n", weight);
	printf("나의 신장은 %3.2f(cm) 입니다.\n", height);

	int num = 123;
	char ch = 'D';

	num = num + 1;
	ch = 'G';
	printf("num = %d\n", num);
	printf("ch = %c\n", ch);

	float height_inch = 70.0;
	float height_cm = height_inch * 2.54;
	printf("나의 신장은 %3.2f(cm) 입니다.\n", height_cm);

	char ch = 'A';
	int num = 5, ret;

	ret = ch + num;
	printf("ret = %d\n", ret);

	int num1 = 25, num2 = 3;

	printf("num1 / num2 = %d\n", num1 / num2);
	printf("num1 / num2 = %f\n", (float) num1 / (float) num2);
	printf("num1 * num2 = %d\n", num1 * num2);

	char ch = 'A', str[20] = "character string";
	printf("문자 = %3c\n", ch);
	printf("문자열 = %-20s\n", str);

	int num1, num2, sum;

	printf("Hey, Give me two integers...");
	scanf_s("%d%d", &num1, &num2);
	sum = num1 + num2;
	printf("%d.", sum);

	char name1[30], name2[30];
	printf("이름을 입력하세요. ");

	// (배열 자료형) Buffer overflow 방지를 위해 크기를 명시해야한다.
	scanf_s("%s", name1, sizeof(name1));
	printf("이름을 입력하세요. ");
	scanf_s("%s", name2, sizeof(name2));
	printf("나의 이름은 %s입니다.\n", name1);
	printf("나의 이름은 %s입니다.\n", name2);

	int su1, su2, sum;

	printf("정수 두 개를 입력하세요.");

	// 입력받는 함수는 얌전히 입력만 받아라.
	scanf_s("%d %d", &su1, &su2);
	sum = su1 + su2;
	printf("두 정수의 합은 %d입니다.\n", sum);

	int age;

	// 이름 배열의 길이는 적절히 계산
	char name[20];

	printf("당신의 이름은 무엇입니까? ");
	scanf_s("%s", name, sizeof(name));
	printf("%s님의 나이는 몇 살입니까? ", name);
	scanf_s("%d", &age);
	printf("%s님의 나이는 %d살입니다.\n", name, age);
	*/

	// Input: a, b	Output: >, <, ==  삼항식 활용.
	// 삼항식은 프로그램 성능을 약간 향상시키지만, 너의 머리는 완전히 돌아버리게 만든다.
	// 결론: 성능보다 가독성이 먼저다. 성능은 마지막에 챙긴다.
	int a, b;
	char res;
	printf("Ay, Enter two numbers...");
	scanf_s("%d%d", &a, &b);
	if (a == b)
	{
		res = '=';
	}
	else
		a > b ? res = '>' : res = '<';
	printf(res == '=' ? "%c%c": "%c", res, res);
}
