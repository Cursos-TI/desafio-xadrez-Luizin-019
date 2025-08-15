#include <stdio.h>

//função recursiva
    void rainhaMoviment(int quadros,char *direcao){
        if(quadros >= 1){
            printf("%s ", direcao);
            rainhaMoviment(quadros-1, direcao);
        }
    }
//função sem retorn de valor em variavel
    void torreMoviment(int quadros, char *direcao){
        for(int i = quadros; i > 0; i--){
            printf("%s ", direcao);
        }
    }


int main(){
    //movimento da Rainha
    int qtdMovRainha = 3;
    char *direcaoRainha = "esquerda";
    //ela se movimentará 3 quadros para esquerda
    printf("Movimento da Rainha\n");
    rainhaMoviment(qtdMovRainha, direcaoRainha);
    printf("\n\n");

    //movimento da Torre
    int qtdMovTorre = 4;
    char *direcaoTorre = "direita";
    //ele se movimentará 4 quadros para direita
    printf("Movimento da Torre\n");
    torreMoviment(qtdMovTorre, direcaoTorre);
    printf("\n\n");

    
    printf("Movimento do Bispo\n");
    //movimento da Bispo em diagonal(horizontal e vertical) com loop aninhado
    int qtdMovBispoHor = 1,qtdMovBispoVert = 4;
    char *direcaoBisHor = "direita",*direcaoBisVert = "baixo";
    int bh = 0;
    while(bh < qtdMovBispoVert){
             printf("%s ", direcaoBisVert);
        for(int bv=qtdMovBispoHor; bv > 0 ;bv --){
             printf("%s ", direcaoBisHor);
        }
        bh++;
    }
    printf("\n\n");

    //movimento da Cavalo
    int qtdMovCavHor = 1,qtdMovCavVert = 2;
    char *direcaoCavHor = "direita",*direcaoCavVert = "cima";

    //movimento do calavo em L com loop com multipla variaver
    printf("Movimento do Cavalo\n");
    for(int c=qtdMovCavHor, v=qtdMovCavVert; c > 0 || v > 0; c--, v--){
             printf("%s ", direcaoCavHor);
             if(c == 0){
             printf("%s ", direcaoCavVert);
             }
    }

return 0;
    }
