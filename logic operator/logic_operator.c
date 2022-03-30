#include <stdio.h>

int xor(register int a, register int b);

int main(void){

    printf("%d\n", xor(1,0));
    printf("%d\n", xor(0,1));
    printf("%d\n", xor(0,0));
    printf("%d\n", xor(1,1));

    return 1;
};

int xor(register int a, register int b){
    // any number different that zero is true and zero is false
    return(a || b) && !(a && b);
};