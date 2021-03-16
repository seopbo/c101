/* 12-2. 포인터는 영희이다! (포인터)
    - 배열은 애별이고 포인터는 포인터이다.
        c 언어 상에서 배열의 이름이 sizeof 연산자나 주소값 연산자 (&)와 사용될 때 (예를 들어 &arr) 경우를 빼면,
        배열의 이름을 사용 시 암묵적으로 첫 번째 원소를 가리키는 포인터로 타입 변환되기 때문입니다.
*/
#include <stdio.h>

int main() {
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int* parr = arr;

    printf("Sizeof(arr) : %d \n", sizeof(arr));
    printf("Sizeof(parr): %d \n", sizeof(parr));
    return 0;
}

