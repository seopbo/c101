/* 12-3. 포인터는 영희이다! (포인터)
    - 포인터의 형 (type)을 결정짓는 두 가지 요소
        - 2차원 배열을 가리키는 포인터는 배열의 크기에 관한 정보가 필요함.
        배열의 형 (*포인터이름)[2차원배열의 열개수]
        e.g. int (*parr)[3]
*/
// 배열 포인터 (배열을 가리키는 포인터)
#include <stdio.h>

int main() {
    int arr[2][3];
    int brr[10][3];
    int crr[2][5];

    int (*parr)[3];

    parr = arr; // o.k
    parr = brr; // o.k
    // parr = crr; error!
    return 0;
}