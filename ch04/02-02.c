/* 4-2. 컴퓨터가 수를 표현하는 방법 (2의 보수)
    - 음수가 없는 자료형은 어떨까요?
*/
#include <stdio.h>

int main() {
    unsigned int b = -1;
    printf("b 에 들어있는 값을 unsigned int 로 해석했을 때 값 : %u \n", b); // printf에서 %u는 unsigned int로 해석하라는 의미

    return 0;
}