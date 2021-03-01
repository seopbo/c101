/* 6. 만약에... (if 문)
    - if - else 문 시작하기
*/
#include <stdio.h>

int main() {
    float avg_score;
    float math, english, science, programming;

    printf("수학, 영어, 과학, 컴퓨터 프로그래밍 점수를 각각 입력해 주세요 ! : ");
    scanf("%f %f %f %f", &math, &english, &science, &programming);

    avg_score = (math + english + science + programming) / 4; // 4 과목의 평균을 구한다.
    printf("당신의 평균 점수는 %f 입니다 \n", avg_score);

    if (avg_score >= 90) {
        printf("당신은 우등생 입니다. ");
    } else if (avg_score >= 40) {
        printf("조금만 노력하세요!. \n");
    } else {
        printf("공부를 발로 합니까? \n");
    }

    return 0;
}