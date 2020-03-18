#include <conio.h>
#include <cstdio>
#include <cstdlib>
#define LINE "==============================="
/*
 * Another version of menu
 */

void menu() {
    printf("%s\n", LINE);
    printf("\t%s\n", "   M  e  n  u");
    printf("%s\n", LINE);
    printf("\t%s\n", "1. 학생이름 입력");
    printf("\t%s\n", "2. 성적 3과목 입력");
    printf("\t%s\n", "3. 학생이름 출력");
    printf("\t%s\n", "4. 합계 출력");
    printf("\t%s\n", "5. 평균 출력");
    printf("\t%s\n", "6. 종료");
    printf("%s\n", LINE);
}

void main() {
    int menuSelect;
    char name[20] = {0};
    int c, java, jsp, sum;
    bool exist_score = false, exist_sum = false;
    float avg;

    while (true) {
        menu();
        scanf_s("%d", &menuSelect);

        switch (menuSelect) {
        case 1:
            printf("이름을 입력하세요?");
            scanf_s("%s", name, sizeof name);
            break;
        case 2:
            printf("C언어의 성적을 입력하세요?");
            scanf_s("%d", &c);
            printf("java언어의 성적을 입력하세요?");
            scanf_s("%d", &java);
            printf("jsp언어의 성적을 입력하세요?");
            scanf_s("%d", &jsp);
            exist_score = true;
            break;
        case 3:
            if (name[0] == NULL)
                printf("무엇인가요 너의 이름?");
		        scanf_s("%s", name, sizeof name);
            printf("입력한 이름은  %s 입니다.", name);
            _getch();
            break;
        case 4:
        	if (!exist_score) {
                printf("C언어의 성적을 입력하세요?");
                scanf_s("%d", &c);
                printf("java언어의 성적을 입력하세요?");
                scanf_s("%d", &java);
                printf("jsp언어의 성적을 입력하세요?");
                scanf_s("%d", &jsp);
                exist_score = true;
        	}
            sum = c + java + jsp;
            printf("총점은 %d입니다.", sum);
            _getch();
            break;
        case 5:
            if (!exist_sum) {
                printf("C언어의 성적을 입력하세요?");
                scanf_s("%d", &c);
                printf("java언어의 성적을 입력하세요?");
                scanf_s("%d", &java);
                printf("jsp언어의 성적을 입력하세요?");
                scanf_s("%d", &jsp);
                exist_score = true;
                sum = c + java + jsp;
            }
            avg = sum / 3.0;
            printf("평균은 %.2f입니다.", avg);
            _getch();
            break;
        case 6:
            exit(1);
        }
        system("cls");
    }

}
