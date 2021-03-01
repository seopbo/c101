/* 7. 뱅글 뱅글 (for, while)
    - for 문 (for statement)
        for (초기식; 조건식; 증감식;) {
            // 명령
        }
*/
#include <stdio.h>

int main() {
    int i;
    for (i = 1; i < 20; i++) {
        printf("숫자 : %d \n", i);
    }
    return 0;
}