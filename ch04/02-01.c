/* 4-2. 컴퓨터가 수를 표현하는 방법 (2의 보수)
    - 2의 보수 표현법
*/
#include <stdio.h>

int main() {
    int a = 2147483647;
    printf("a : %d \n", a);

    a++;
    printf("a : %d \n", a);

    return 0;
}