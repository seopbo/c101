/* 6. 만약에... (if 문)
    - if 문 시작하기
*/
// 나눗셈 에제
#include <stdio.h>

int main() {
    double i, j;
    printf("나누고 싶은 두 정수를 입력하세요 : ");
    scanf("%lf %lf", &i, &j); // cli에서 argument로 받은 값을 %lf를 사용해서 double 자료형으로 간주함.

    if (j == 0) {
        printf("0 으로 나눌 수 없습니다. \n");
        return 0;
    }
    printf("%f 를 %f 로 나눈 결과는 : %f \n", i, j, i / j);

    return 0;
}