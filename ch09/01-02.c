/* 9. 만약에... 2탄 (switch 문)
    - switch 문
        switch (변수) {
            case 값1:
                명령
                break;
            ...
            default:
                명령
                break;
        }    
*/
// 영어 말하기
#include <stdio.h>

int main() {
    char input;

    printf("(소문자) 알파벳 읽기\n");
    printf("알파벳 : ");

    scanf("%c", &input);

    switch (input) {
        case 'a':
            printf("에이 \n");
            break;

        case 'b':
            printf("비 \n");

        case 'c':
            printf("씨 \n");

        default:
            printf("죄송해요.. 머리가 나빠서 못 읽어요 \n");
            break;
    }

    return 0;
}