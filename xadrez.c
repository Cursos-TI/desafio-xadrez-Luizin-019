#include <stdio.h>

int main(){
//declara variaveis de peça, direção e quanitdade de quadros para mopvimento
    char direcao[20];
    int qtdmov, peca;

    char prog;
        int a=1;
    //para finalizar programa
    do{
        //formulário simples, interativos
        printf("Qual a peça que sera movida?\n1 - Torre\n2 - Bispo\n3 - Rainha \n");
        scanf("%d", &peca);
        printf("Qual a quantidade quadros?\n");
        scanf("%d", &qtdmov);
        printf("Qual a direção quadros(Cima, baixo, direita, esquerda)?\n");
        printf("*Diagonal(Frente e trás) pra o bispo*");
        scanf("%s", &direcao);

        //deixa mais dinamico a escolha das peças
        switch (peca)
        {
        case 1:
        //"Move a peça"
            for(int i = 1;i<=qtdmov;i++){
                printf("Torre se moveu 1 quadro para %s\n", direcao);
            }
            break;
        case 2: 
        //"Move a peça"
        for(int i = 1;i<=qtdmov;i++){
                printf("Bispo se moveu 1 quadro para Diagonal da %s\n", direcao);
            }
            break;
        case 3:
        //"Move a peça"
            while( a <= qtdmov){
                printf("Rainha se moveu 1 quadro para %s\n", direcao);
                a++;
            }
            break;
        //peça fora das 3
        default:
            printf("opção de peça inválida inváldia!!");
            break;
        }
    //pergunta se quer jogar mais uma rodada
        printf("Quer continuar o jogo, apete 1, ( ou aperte 0 para encerrar)?");
        scanf("%d", &prog);
    } while (prog != 0);

    return 0;
}
