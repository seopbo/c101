/* 4-2. 컴퓨터가 수를 표현하는 방법 (2의 보수)
    - 음수가 없는 자료형은 어떨까요?
        unsigned int의 overflow
*/
#include <stdio.h>

int main() {
    unsigned int b = 4294967295;
    printf("b : %u \n", b);

    b++;
    printf("b : %u \n", b);
    return 0;
}