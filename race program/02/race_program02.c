#include <stdio.h>

int main(void){
    int place, points;
    printf("Which place did you ended up? ");
    scanf("%d", &place);
    switch(place){
        case 1:
        points = 10;
        break;
        case 2:
        points = 8;
        break;
        case 3:
        points = 6;
        break;
        case 4:
        points = 5;
        break;
        case 5:
        points = 4;
        break;
        case 6:
        points = 3;
        break;
        case 7:
        points = 2;
        break;
        case 8:
        points = 1;
        break;
        default:
        points = 0;
        break;
    }
    if(place > 1){
        printf("You got %d points", points);
    }else if(place == 1){
        printf("Congratulations !!! You got %d point", points);
    }else{
        printf("You got %d point", points);
    }
    return 0;
}