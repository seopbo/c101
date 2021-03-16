/* 12-2. 포인터는 영희이다! (포인터)
    - 포인터의 덧셈
        - 포인터간의 덧셈은 불가능하다.
        - 포인터간의 뺄셈은 가능하다.
*/
// 포인터의 대입
#include <stdio.h>

int main() {
    int a;
    int* pa = &a;
    int* pb;

    *pa = 3;
    pb = pa;

    printf("pa 가 가리키고 있는 것 : %d \n", *pa);
    printf("pb 가 가리키고 있는 것 : %d \n", *pb);
    printf("a 가 가리키고 있는 것 : %d \n", a);

    return 0;
}