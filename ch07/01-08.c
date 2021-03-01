/* 7. 뱅글 뱅글 (for, while)
    - while 문
        while (조건식) {
            명령
        }
*/
// while 문
#include <stdio.h>

int main() {
    int i = 1, sum = 0;

    while (i <= 100) {
        sum += i;
        i++;
    }

    printf("1 부터 100 까지의 합 : %d \n", sum);

    return 0;
}