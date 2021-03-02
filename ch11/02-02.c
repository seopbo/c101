/* 11-2. c 언어의 아파트 (고차원의 배열)
    - 고차원의 배열
        (배열의 자료형) (배열의 이름)[m][n];        
*/
// 학생 점수 입력 받기
#include <stdio.h>

int main() {
    int score[3][2];
    int i, j;

    for (i = 0; i < 3; i ++) {
        for (j = 0; j < 2; j++) {
            if (j == 0) {
                printf("%d 번째 학생의 국어 점수 : ", i + 1);
                scanf("%d", &score[i][j]);
            } else if (j == 1) {
                printf("%d 번째 학생의 수학 점수 : ", i + 1);
                scanf("%d", &score[i][j]);
            }
        }
    }

    for (i = 0; i < 3; i++) {
        printf("%d 번째 학생의 국어 점수 : %d, 수학 점수 : %d \n", i + 1,
                score[i][0], score[i][1]);
    }
    return 0;
}
