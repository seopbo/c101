/*
    N 줄인 삼각형을 출력한다. 역 삼각형을 출력한다. 아래는 N = 3 일 때의 출력 예시 이다.
    *****
     ***
      *
*/
#include <stdio.h>

int main() {
    int i, j, k, n;
    scanf("%d", &n);

    for (i = n; i > 0; i--) {
        for (j = 0; j < n - i; j++) {
            printf("%s", " ");
        }
        for (k = 0; k < 2 * i - 1; k++) {
            printf("%s", "*");
        }
        for (j = 0; j < n - i; j++) {
            printf("%s", " ");
        }
        printf("%s", "\n");
    }
    return 0;
}