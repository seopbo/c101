/* 4-1. 계산하리
    - 산술 연산자, 대입 연산자
        산술 연산자: +, -, *, /, %를 산술 연산자 (arithmetic operator)라고 함.
*/
// 산술 연산
#include <stdio.h>

int main() {
    int a, b;
    a = 10;
    b = 3;

    printf("a * b 는 : %d \n", a + b);
    printf("a - b 는 : %d \n", a - b);
    printf("a * b 는 : %d \n", a * b);
    printf("a / b 는 : %d \n", a / b);
    printf("a %% b 는 : %d \n", a % b); // %%는 stdout에서 %를 출력하기위한 방법
    return 0;
}