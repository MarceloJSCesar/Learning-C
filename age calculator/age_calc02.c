#include <stdio.h>
#include <math.h>

int main(){
    char name[11];
    int result;
    float age,sqrt_age, pow_age;

    printf("Enter your name: ");
    fgets(name,11,stdin);
    printf("Enter your age: ");
    scanf("%f",&age);
    printf("\n Your name is: %s And you are %f years old \n",name,age);
    result = 2030 - (2022 - age);
    printf("\n You will be %d years old in 2030 \n",result);

    printf("\n The square root of %f is %f",age,sqrt(age));  
    printf("\n The power of %f = %f",age,pow(age,2.0));    

    puts("\n === BYE ===");

    return(0);
}