#include <stdio.h>

int main() {
    int place;
    printf("Em que lugar ficaste? ");
    scanf("%d", &place);
    if(place == 1){
        printf("Voce ganhou 10 pontos");
    }else if(place == 1){
        printf("Voce ganhou 10 pontos");
    }else if(place == 2){
        printf("Voce ganhou 8 pontos");
    }else if(place == 3){
        printf("Voce ganhou 6 pontos");
    }else if(place == 4){
        printf("Voce ganhou 5 pontos");
    }else if(place == 5){
        printf("Voce ganhou 4 pontos");
    }else if(place == 6){
        printf("Voce ganhou 3 pontos");
    }else if(place == 7){
        printf("Voce ganhou 2 pontos");
    }else if(place == 8){
        printf("Voce ganhou 1 ponto");
    }else {
        printf("Voce ganhou não ganhou nenhum ponto");
    }
    return 0;
}