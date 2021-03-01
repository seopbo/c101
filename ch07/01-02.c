/* 7. 뱅글 뱅글 (for, while)
    - for 문 (for statement)
        for (초기식; 조건식; 증감식;) {
            // 명령
        }
*/
// 1 부터 19 까지의 합
#include <stdio.h>

int main() {
    int i, sum = 0;
    for (i=0; i < 20; i++) {
        sum = sum + i;
    }
    printf("1 부터 19 까지의 합 %d", sum);
    return 0;
}