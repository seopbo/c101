/*
    사용자로부터 N 값을 입력받고 1부터 N까지의 곱을 출력한다.
*/
#include <stdio.h>

int main() {
    int i, n, result;
    scanf("%d", &n);
    result = 1;
    for (i=1;i<=n;i++) {
        result *= i;
    }
    printf("%d", result);
    return 0;
}