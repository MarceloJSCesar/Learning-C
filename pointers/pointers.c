#include <stdio.h>

int main() {
    char a,b,c,*p;

    a = 'A';
    p = &a;
    b = *p;
    p = &c;
    *p = 'D';

    printf("The value of a is %c, b is %c, c is %c, %c",a,b,c,*p);
    return 0;
}
