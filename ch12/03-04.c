/* 12-3. 포인터는 영희이다! (포인터)
    - 배열 이름의 주소값?
*/
#include <stdio.h>

int main() {
    int arr[3] = {1, 2, 3};
    int (*parr)[3] = &arr; // int (*parr)[3] <- 크기가 3인 배열을 가리키는 포인터

    printf("arr[1] : %d \n", arr[1]);
    printf("parr[1] : %d \n", (*parr)[1]);
    printf("arr : %p \n", arr);
    printf("parr : %p \n", parr);
    return 0;
}