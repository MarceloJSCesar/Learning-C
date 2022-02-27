#include <stdio.h>

int calcPoints(int place, int points){
    if(place <= 3){
        points = 12 - 2 * place;
        printf("You got: %d points", points);
    }else{
        points = 9 - place;
        printf("You got: %d points", points);
    }

   return 0;
}
void noPoints(int points){
    points = 0;
    printf("You got %d point", points);
} 

int main(void){
    int place, points;
    printf("Which place did you ended up? ");
    scanf("%d", &place);
    if(place > 0 && place <= 8){
        calcPoints(place,points);
    }else{
        noPoints(points);
    }

    return 0;
}