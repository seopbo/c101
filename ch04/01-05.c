/* prefix, postfix
    prefix (전위형): 
        - ++a
        - 먼저 a의 값을 1증가시키고 return함.
    postfix (후위형)
        - a++
        - a의 값을 먼저 return하고 a를 1증가시킴. 
*/
#include <stdio.h>

int main() {
    int a = 1;

    printf("++a : %d \n", ++a);

    a = 1;
    printf("a++ : %d \n", a++);
    printf("a : %d \n", a);
    return 0;
}