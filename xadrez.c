#include <stdio.h>

int main(){
    // variavel para guarda a quantidade de movimento para cada uma das peças
    int qtdquadradosTorre, qtdquadradosRainha, qtdquadradosBispo;
    //direção pra onde a peça se move
    char *direcaoTorre, *direcaoRainha, *direcaoBispo;

    //movimenta a Torre 
   printf("Torre \n");
    qtdquadradosTorre = 3;
    direcaoTorre = "direita";
    for(int t = 0;t<=qtdquadradosTorre; t++){
    printf("%s ", direcaoTorre);
    }
   printf("\n");
   printf("\n");
    //movimenta a Rainha 
   printf("Rainha \n");
    int r = 0;
    qtdquadradosRainha = 3;
    direcaoRainha = "esquerda";
    while(r <= qtdquadradosRainha) {
        printf("%s ", direcaoRainha);
        r++;
    }
   printf("\n");
   printf("\n");
    //movimenta a Bispo 
   printf("Bispo (diagonal 'esqueda,cima')\n");
   int b = 0;
   qtdquadradosBispo = 4;
    direcaoBispo = "esquerda, cima";
   do{
        printf("%s ", direcaoBispo);
        b++;
   } while(b<=qtdquadradosBispo);
   printf("\n");
   printf("\n");
    //movimenta a Cavalo 
   printf("Cavalo (duas direçoes em L)\n");
   char *direcaoCavalo1, *direcaoCavalo2;
   int qtdquadradosCavlo1,qtdquadradosCavlo2;
   qtdquadradosCavlo1 = 1;
   qtdquadradosCavlo2 = 2;
   direcaoCavalo1 = "esquerda";
   direcaoCavalo2 = "baixo";
   for(int c = qtdquadradosCavlo1; (c>0); c--){
        for(int v=1; v<=qtdquadradosCavlo2; v++){
        printf("\n%s ", direcaoCavalo2);
         }
        printf("%s ", direcaoCavalo1);
   }
return 0;
    }

