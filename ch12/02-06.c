/* 12-2. 포인터는 영희이다! (포인터)
    - 포인터의 덧셈
        - 포인터간의 덧셈은 불가능하다.
        - 포인터간의 뺄셈은 가능하다.
*/
// 포인터 뺄셈
#include <stdio.h>

int main() {
    int a;
    int* pa = &a;

    printf("pa 의 값 : %p \n", pa);
    printf("(pa - 1) 의 값 : %p \n", pa - 1);

    return 0;
}