#include <stdio.h>

int main(){ 
    int age;

    printf("Welcome to Age Calculador \n");
    printf("How old are you: ");
    scanf("%d", &age);

    if(age < 18){
        printf("You have: %d years \n Thanks for typing your age, YOU ARE A MINOR YET \n", age);
    }else{
        printf("You have: %d years \n Thanks for typing your age, YOU ARE OLDER \n", age);
    }

    printf("=== BYE ===");

    return 0;
}