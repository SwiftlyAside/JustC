#include <cstdio>
#include <conio.h>
#include <cstdlib>

#define LINE "================================\n"

char name[10] = "없음";
int scores[3] = { 0, 0, 0 };

void go_to_main() {
	printf("메인화면으로 돌아가려면 아무 키나 누르세요.");
	_getch();
}

void input_student_name() {
	printf("학생 이름을 입력하세요.: ");
	scanf_s("%s", name, sizeof name);
	printf("입력 완료.\n");
	go_to_main();
}

void input_scores() {
	printf("3과목의 성적을 각각 입력하세요.: ");
	scanf_s("%d %d %d", &scores[0], &scores[1], &scores[2]);
	printf("입력 완료.\n");
	go_to_main();
	
}

void menu() {
	printf(LINE);
	printf("\tM e n u\n");
	printf(LINE);
	printf("\t1. 학생이름 입력\n");
	printf("\t2. 성적 3과목 입력\n");
	printf("\t3. 학생이름 출력\n");
	printf("\t4. 합계 출력\n");
	printf("\t5. 평균 출력\n");
	printf("\t6. 데니 로즈\n");
	printf("\t7. 종료\n");
	printf(LINE);
}

void show_student_name() {
	printf("\n학생이름 : %s\n\n", name);
	go_to_main();
}

void show_total_score() {
	printf("\n성적 합계 : %d\n\n", scores[0] + scores[1] + scores[2]);
	go_to_main();
}

void show_avg_score() {
	printf("\n성적 평균 : %.3f\n\n", (float)(scores[0] + scores[1] + scores[2]) / 3.0);
	go_to_main();
}

void danny_rose() {
	while (true) {
		printf("Danny, Danny Rose...\n");
	}
}

int main(int argc, char* argv[]) {
	/*// 달력 (기본버전)
	int n;

	scanf_s("%d", &n);
	n = (n - 1) / 7;
	switch (n) {
	case 0: printf("첫주"); break;//0-6, 1-7
	case 1: printf("둘째주"); break;
	case 2: printf("셋째주"); break;
	case 3: printf("넷째주"); break;
	case 4: printf("다섯째주"); break;
	}*/
	
	/*// 달력 (다른 해법)
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

	// Gareth Emery - Lights & Thunder (Club Remix)
	// 표그리기 문제였다. 알아서 해라

	/*// 계산기
	// Input : 수식, 지금 진도로 한정하는경우 num1, operator, num2
	// Output : 수식과 결과
	int num1, num2, res;
	char op;
	printf(".: ");

	// scanf_s 사용시 char, char*(string) 변수 처리시 그 다음에 반드시 size 명시해야함.
	scanf_s("%d %c %d", &num1, &op, sizeof(char)/* 1과 같음 #1#, &num2);
	switch (op) {
	case '+':
		res = num1 + num2;
		break;
	case '-':
		res = num1 - num2;
		break;
	case '*':
		res = num1 * num2;
		break;
	case '/':
		res = num1 / num2;
		break;
	default:
		printf("error");
		exit(1);
	}
	printf("%d %c %d = %d\n", num1, op, num2, res);*/

	// 그냥 메뉴
	int menuselect, data = 0;
			while(true) {
				menu();
				scanf_s("%d", &menuselect);
				switch (menuselect) {
				case 1:
					input_student_name();
					break;
				case 2:
					input_scores();
					break;
				case 3:
					show_student_name();
					break;
				case 4:
					show_total_score();
					break;
				case 5:
					show_avg_score();
					break;
				case 6:
					danny_rose();
					break;
				case 7:
					exit(1);
				}
				system("cls");
			}
}

