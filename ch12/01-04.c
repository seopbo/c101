/* 11-2. 포인터는 영희이다! (포인터)
    - * 연산자
        주소값에 대응되는 데이터를 가져오는 연산자
*/
// 연산자
#include <stdio.h>

int main() {
    int *p;
    int a;

    p = &a;
    *p = 3;

    printf("a 의 값 : %d \n", a);
    printf("*p 의 값 : %d \n", *p);
    return 0;
}