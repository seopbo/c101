/* 12-2. 포인터는 영희이다! (포인터)
    - 상수 포인터
*/
// 상수 포인터?
#include <stdio.h>

int main() {
    int a;
    int b;
    const int* pa = &a; // 포인터 pa가 가리키는 주소의 데이터가 변경되면 안됨, pa를 통해서 변경되면 안됨.
    a = 3;
    *pa = 3; // 올바르지 않은 문장
    pa = &b; // 올바른 문장

    return 0;
}