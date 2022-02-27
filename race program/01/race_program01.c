#include <stdio.h>

int main(void){
    int place, points;
    printf("Which place did you ended up? ");
    scanf("%d", &place);
    if(place == 1){
        points = 10;
    }else if(place == 2){
        points = 8;
    }else if(place == 3){
        points = 6;
    }else if(place == 4){
        points = 5;
    }else if(place == 5){
        points = 4;
    }else if(place == 6){
        points = 3;
    }else if(place == 7){
        points = 2;
    }else if(place == 8){
        points = 1;
    }else{
        points = 0;
    }
    if(points == 1){
        printf("You got %d point",points);
    }else if(points > 1){
        printf("You got %d points",points);
    }else{
        printf("You got %d points",points);
    }
}