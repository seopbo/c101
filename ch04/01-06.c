/* 비트 연산
    &: and
    |: or
    ^: xor
    ~: reverse
    <<: left shift
    >>: right shift
*/
#include <stdio.h>

int main() {
    int a = 0xAF; // 10101111를 32비트에 저장하고있음을 고려
    int b = 0xB5; // 10110101를 32비트에 저장하고있음을 고려

    printf("%x \n", a & b); // a & b = 10100101 (and)
    printf("%x \n", a | b); // a | b = 10111111 (or)
    printf("%x \n", a ^ b); // a ^ b = 00011010 (xor)
    printf("%x \n", ~a); // ~a = 01010000 (reverse)
    printf("%x \n", a << 2); // a << 2 = 10111100
    printf("%x \n", b >> 3); // b >> 3 = 00010110

    return 0;
}