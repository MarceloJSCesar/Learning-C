#include <stdio.h>

int calcPoints(int place, int points){
    if(place <= 2 && place > 0){
        points = 12 - 2 * place;
        printf("Ficaste com: %d points", points);
    }else{
        points = place <= 8 && place > 0 ? 9 - place : 0;
        printf("Ficaste com: %d points", points);
    }

   return 0;
}

int main(void){
    int place, points;
    printf("Em que lugar ficaste? ");
    scanf("%d", &place);
    if(place <= 2 && place > 0){
        calcPoints(place,points);
    }else{
        calcPoints(place,points);
    }

    return 0;
}