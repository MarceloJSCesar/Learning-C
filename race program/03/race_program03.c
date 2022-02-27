#include <stdio.h>

int main(void){
    int place, points;
    printf("Em que lugar ficaste? ");
    scanf("%d", &place);
    /*
        Implementing with grafic logical 
        y = 12 - 2 * x(place) for place 1, 2 and 3
        y = 9 - x(place) for place 4,5,6,7,8 
        
    */
    switch(place){
        case 1: case 2: case 3:
        points = 12 - 2 * place;
        printf("You got: %d points", points);
        break;
        case 4: case 5: case 6: case 7: case 8:
        points = 9 - place; 
        printf("You got: %d points", points);
        break;
        default:
        points = 0;
        printf("You got %d point", points);
    }

    return 0;
}