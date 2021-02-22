/* 더하기 1을 하는 방법 */
#include <stdio.h>

int main() {
    int a = 1, b = 1, c = 1, d = 1;
    
    a = a + 1;
    printf("a : %d \n", a);
    b += 1; // 복합대입연산
    printf("b : %d \n", b);
    ++c; // 전위형 증감연산자: 먼저 1을 더해준 후 결과를 돌려준다.
    printf("c: %d \n", c);
    d++; // 후위형 증감연산자: 결과를 돌려준 이후 1을 더한다.
    printf("d : %d \n", d);

    return 0;
}