/* 5. 문자 입력받기 */
// 문자를 저장하는 변수
#include <stdio.h>

int main() {
    char a;
    a = 'a'; // char 자료형에 들어가는 literal은 ''로 감싼 문자 (character) 또는 숫자 (digit) 이다.

    printf("a 의 값과 들어 있는 문자는? 값: %d , 문자 : %c \n", a, a); // %d는 값을 숫자 (10진수)로 출력, %c는 값을 문자로 출력
    return 0;
}