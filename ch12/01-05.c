/* 12-1. 포인터는 영희이다! (포인터)
    - 포인터에는 왜 타입이 있을까?
        주소값에 대응되는 데이터를 가져오는 연산자
    - 포인터도 변수다
*/
// 포인터도 변수이다.
#include <stdio.h>

int main() {
    int a;
    int b;
    int *p;

    p = &a;
    *p = 2;
    p = &b;
    *p = 4;

    printf("a : %d \n", a);
    printf("b : %d \n", b);
    return 0;
}