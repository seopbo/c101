/* 5. 문자 입력받기
    - scanf의 도입
        - scanf는 화면(키보드)로부터 결과를 받아들이는 입력 함수
        - scanf는 어떠한 입력을 하기 전까지 계속 대기하며, 입력을 할 때 엔터를 눌러야지만 입력으로 처리됨.
        - scanf는 각 변수의 타입마다 입력 받는 포맷을 다르게 해야함.
*/
// 섭씨온도를 화씨로 바꾸기
#include <stdio.h>

int main() {
    double celcius; // 섭씨 온도

    printf("섭씨 온도를 화씨 온도로 바꿔주는 프로그램 입니다. \n");
    printf("섭씨 온도를 입력해 주세요 : ");
    scanf("%lf", &celcius); // 섭씨 온도를 입력 받는다.

    printf("섭시 %f 도는 화씨로 %f 도 입니다. \n", celcius, 9 * celcius / 5 + 32);


    return 0;
}