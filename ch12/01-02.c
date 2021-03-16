/* 12-1. 포인터는 영희이다! (포인터)
    - 포인터
        메모리 상에 위치한 특정한 데이터의 시작주소값을 보관하는 변수
        (포인터에 주소값이 저장되는 데이터의 형) *(포인터의 이름);
        (포인터에 주소값이 저장되는 데이터의 형)* (포인터의 이름);
    - & 연산자
        &(주소값을 계산할 데이터)
*/
// 포인터의 시작
#include <stdio.h>

int main() {
    int *p;
    int a;

    p = &a;

    printf("포인터 p에 들어있는 값 : %p \n", p);
    printf("int 변수 a가 저장된 주소 : %p \n", &a);

    return 0;
}