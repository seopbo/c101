/*
    1000000 이하의 피보나치 수열 ( N 번째 항이 N - 1 번째 항과 N - 2 번째 항으로 표현되는 수열,
    시작은 1,1,2,3,5,8,...) 의 짝수 항들의 합을 구한다
*/
#include <stdio.h>

int main() {
    int i = 1, j = 1, k, num, sum, cnt;
    sum = j;
    cnt = 2;

    while (num <= 1000000) {

        num = i + j; // n번째 피보나치 수를 계산
        i = j; // n-1번째항을 갱신
        j = num; // n번째항을 갱신
        cnt++;

        if (cnt % 2 == 0) {
            sum += num;
        }
    }

    printf("%d", sum);
    return 0;

}