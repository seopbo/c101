/* 10. 연예인 캐스팅(?) (c언어에서의 형 변환)
    - 형 변환 (캐스팅)
        (바꾸려는 자료형) 변수 이름
*/
// 형변환
#include <stdio.h>

int main() {
    int a;
    double b;

    b = 2.4;
    a = (int) b;

    printf("%d", a);
    return 0;
}