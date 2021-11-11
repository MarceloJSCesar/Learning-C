#include <stdio.h>

int main(void){
    int place, points;
    printf("Em que lugar ficou? ");
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
        printf("Ficaste com %d points", points);
    }else if(place == 1){
        printf("Congratulations !!! Ficaste com %d points", points);
    }else{
        printf("Ficaste com %d point", points);
    }
    return 0;
}