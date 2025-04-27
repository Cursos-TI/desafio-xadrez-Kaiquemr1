#include <stdio.h>

int main(){
    	
    int i=0;
    int j=0;
    int k=0;
    
    printf("***Movimento da Torre***\n");
    for (int i=0; i<5; i++){ //Movimento da Torre em 5 casas para a direita
    printf("Direita \n");
    }
    
    
    printf("***Movimento do Bispo***\n");
    while(i<5){ //Movimento do Bispo em 5 casas para cima, direita
        printf("Cima, direita\n");
        i++;
    }

    printf("***Movimento da Rainha***\n");
    do{
        printf("Esquerda\n");
        j++;
    }while(j<8); //Movimento da Rainha em 8 casas para a esquerda
    printf("\n");
    
    printf("***Movimento do Cavalo***\n");
    while(k<1){
        for(k=0; k<2; k++){ //Movimento do Cavalo em 2 casas para baixo e 1 para a esqueda, com um espaço
            printf("Baixo\n");
        }
        printf("Esquerda\n");
        k++;
    }
    
    return 0;
}

