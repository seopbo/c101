/* 5. 문자 입력받기
    - scanf의 도입
        - scanf는 화면(키보드)로부터 결과를 받아들이는 입력 함수
        - scanf는 어떠한 입력을 하기 전까지 계속 대기하며, 입력을 할 때 엔터를 눌러야지만 입력으로 처리됨.
        - scanf는 각 변수의 타입마다 입력 받는 포맷을 다르게 해야함.
*/
// scanf 총 정리
#include <stdio.h>

int main() {
    char ch; // 문자
    short sh; // 정수
    int i;
    long lo;
    float fl; // 실수
    double du;

    printf("char 형 변수 입력 : ");
    scanf("%c", &ch);

    printf("short 형 변수 입력 : ");
    scanf("%hd", &sh);

    printf("int 형 변수 입력 : ");
    scanf("%d", &i);

    printf("long 형 변수 입력 : ");
    scanf("%ld", &lo);

    printf("float 형 변수 입력 : ");
    scanf("%f", &fl);

    printf("double 형 변수 입력 : ");
    scanf("%lf", &du);

    printf("char : %c, short : %d, int: %d ", ch, sh, i);
    printf("long : %ld, float : %f, double : %f \n", lo, fl, du);
    
    return 0;
}