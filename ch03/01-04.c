/* 3. 변수가 뭐지?
    - printf의 또다른 형식
*/
// printf 형식
#include <stdio.h>

int main() {
    float a = 3.141592f;
    double b = 3.141592;
    int c = 123;

    printf("a : %.2f \n", a); // 소수점 이하 둘째 자리까지만 표시
    printf("c : %5d \n", c); // 숫자의 자리수를 되도록 5자리로 맞추기
    printf("b : %6.3f \n", b); // 전체 자리수는 6자리로 맞추돼 반드시 소수점 이하 셋째자리까지만 표시
    return 0;
}