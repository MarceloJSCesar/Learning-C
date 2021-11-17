#include <stdio.h>

int main(void){
    int place, points;
    printf("Em que lugar ficaste? ");
    scanf("%d", &place);
    /*
        Implementing with grafic logical 
        y = 12 - 2 * x(place) for place 1 and 2
        y = 9 - x(place) for place 3,4,5,6,7,8 
        
    */
    switch(place){
        case 1: case 2:
        points = 12 - 2 * place;
        printf("Ficaste com : %d points", points);
        break;
        case 3: case 4: case 5: case 6: case 7: case 8:
        points = 9 - place; 
        printf("Ficaste com : %d points", points);
        break;
        default:
        points = 0;
        printf("Você não ganhou nenhum ponto");
    }

    return 0;
}