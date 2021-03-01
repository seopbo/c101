/* 6. 만약에... (if 문)
    - 왜 & 대신에 &&를 쓸까?
        - 논리곱 연산자
*/
#include <stdio.h>

int main() {
    int a = 31, b = 15;
    printf("a & b = %d\n", a & b);
    printf("a && b = %d\n", a && b);
    return 0;
}