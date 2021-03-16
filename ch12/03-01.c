/* 12-3. 포인터는 영희이다! (포인터)
    - 1차원 배열 가리키기
*/
#include <stdio.h>

int main() {
    int arr[3] = {1, 2, 3};
    int *parr;

    parr = arr; // parr = &arr[0];도 동일하다.

    printf("arr[1] : %d \n", arr[1]);
    printf("parr[1] : %d \n", parr[1]);

}