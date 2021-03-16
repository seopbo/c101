/* 12-3. 포인터는 영희이다! (포인터)
    - 2차원 배열의 [] 연산자
*/
// 정말로?
#include <stdio.h>

int main() {
    int arr[2][3];

    printf("arr[0] : %p \n", arr[0]);
    printf("&arr[0][0] : %p \n", &arr[0][0]);

    printf("arr[1] : %p \n", arr[1]);
    printf("&arr[1][0] : %p \n", &arr[1][0]);

    return 0;    
}