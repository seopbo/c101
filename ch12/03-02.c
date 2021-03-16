/* 12-3. 포인터는 영희이다! (포인터)
    - 1차원 배열 가리키기
*/
// 포인터 이용하기
#include <stdio.h>

int main() {
    int arr[10] = {100, 98, 97, 95, 89, 76, 92, 96, 100, 99};

    int *parr = arr;
    int sum = 0;

    while (parr - arr <= 9) {
        printf("%ld\n", parr-arr);
        sum += (*parr);
        parr++;
    }

    printf("내 시험 점수 평균 : %d \n", sum / 10);
    return 0;
}