#include <stdio.h>

int main(){

    int tabuleiro[10][10];
    char linhas[10] = {'A','B','C','D','E','F','G','H','I','J'};
    printf("Tabuleiro de Batalha Naval\n");
    printf("  "); //imprimindo espaço no início das letras
    for(int i = 0; i < 10; i++){
        printf(" %c", linhas[i]);
    }
    //pulando uma linha:
    printf("\n");
    //preenchendo a matriz com zeros:
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            tabuleiro[i][j] = 0;
        }
    }
    //imprimindo a matriz com zeros:
    for(int i = 0; i < 10; i++){
        printf("%d", i+1);
        if(i != 9) printf(" "); //"pular o espaço do número 10 que tem dois algarismos"
        for(int j = 0; j < 10; j++){
            //inserindo navio linha 3, colunas C, D e E
            if(i == 2){
                if(j == 2 || j == 3 || j ==4){
                    tabuleiro[i][j] = 3;
                }
            }
            //inserindo navio linha 5, 6 e 7, colunas G
            if(i == 4 || i == 5 || i == 6){
                if(j == 6){
                    tabuleiro[i][j] = 3;
                }
            }
            printf(" %d", tabuleiro[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}