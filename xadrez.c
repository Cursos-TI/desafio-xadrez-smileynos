#include <stdio.h>


int main() {

    int opcao;

    // Menu de opções
    do{
        printf("Inicie o jogo xadrez\n");
        printf("Escolha a opção da peça que você quer movimentar: \n");
        printf("1. Movimentar o Bispo \n");
        printf("2. Movimentar a Rainha \n");
        printf("3. Movimentar a Torre\n");
        scanf("%d", &opcao);
        
        switch (opcao)
        {
        case 1:
            printf("Você escolheu se movimentar com o bispo\n");
            for(opcao = 0; opcao <5; opcao++){
                printf(" 5 casas para cima direita\n");
            }
            
        break;

        case 2:
            printf("Você escolheu se movimentar com a Rainha\n");
            for(opcao = 0; opcao <8; opcao++){
                printf("8 casas Para Esquerda\n");
            }
        break;
        case 3:
            printf("Você escolheu se movimentar com a Torre\n");
            for(opcao = 0; opcao <5; opcao++){
                printf(" 5 casas para frente\n");
            }
        break;
        default:
        printf("Nenhuma opção escolhida\n \n"); 
            break;
        }
    }while (opcao == 4);

    return 0;
}
