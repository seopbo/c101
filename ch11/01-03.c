/* 11-1. c 언어의 아파트 (배열), 상수
    - 배열 가지고 놀기
*/
// 평균 구하기
#include <stdio.h>

int main() {
    int arr[5];
    int i, avg = 0;

    for (i = 0; i < 5; i++) { // 학생들의 성적을 입력 받는 부분
        printf("%d 번째 학생의 성적은? ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < 5; i++) {
        avg = avg + arr[i];
    }

    // 평균이므로 5로 나누어 준다.
    printf("전체 학생의 평균은 : %d \n", avg / 5);
    return 0;
}