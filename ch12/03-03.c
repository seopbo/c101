/* 12-3. 포인터는 영희이다! (포인터)
    - 포인터의 포인터
*/
// 포인터의 포인터
#include <stdio.h>

int main() {
    int a;
    int *pa;
    int **ppa; // int를 가리키는 포인터를 가리키는 포인터

    pa = &a;
    ppa = &pa;

    a = 3;

    printf("a : %d // *pa : %d // **ppa : %d \n", a, *pa, **ppa);
    printf("&a : %p // pa : %p // *ppa : %p \n", &a, pa, *ppa);
    printf("&pa : %p // ppa : %p \n", &pa, ppa);
    return 0;
}