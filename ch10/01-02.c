/* 10. 연예인 캐스팅(?) (c언어에서의 형 변환)
    - 형 변환 (캐스팅)
        (바꾸려는 자료형) 변수 이름
*/
// 두 수의 비율
#include <stdio.h>

int main() {
    int a, b;
    float c, d;

    printf("두 숫자 입력 : ");
    scanf("%d %d", &a, &b);

    c = a / b;
    d = (float) a / b;

    printf("두 수의 비율 : %f %f", c, d);

    return 0;
}