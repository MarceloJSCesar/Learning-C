#include <stdio.h>

int main() {
    int place;
    printf("Which place did you ended up? ");
    scanf("%d", &place);
    if(place == 1){
        printf("You got 10 points");
    }else if(place == 2){
        printf("You got 8 points");
    }else if(place == 3){
        printf("You got 6 points");
    }else if(place == 4){
        printf("You got 5 points");
    }else if(place == 5){
        printf("You got 4 points");
    }else if(place == 6){
        printf("You got 3 points");
    }else if(place == 7){
        printf("You got 2 points");
    }else if(place == 8){
        printf("You got 1 points");
    }else {
        printf("You got no points");
    }
    return 0;
}