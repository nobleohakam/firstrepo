#include "stdio.h"
int main () {
    int s = 0;
    printf("Give me a number: ");
    scanf("%d\n", &s);
    s *= 5;
    printf("num * 5 = %d \n", s);
    s /= 3;
    printf("num / 3 = %d \n", s);
    return(0);

}
