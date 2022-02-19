#include <stdio.h>

int main() {
    
    char alphabetic_order;

    puts("\n === Welcome to Alphabetic Order === \n");
    alphabetic_order = 'A';

    do{
        puchar(alphabetic_order);
        alphabetic_order++;
    }while(alphabetic_order == 'Z');

    puts("\n === Thank You === \n");
    puts("\n === BYE ===");

    return 0;
}