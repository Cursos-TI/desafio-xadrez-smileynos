#include <stdio.h>
 
     
int main() {
    int opcao;
    
    do{
        printf("Inicie o jogo xadrez\n");
        printf("Escolha a opção da peça que você quer movimentar: \n");
        printf("1. Movimentar o Bispo \n");
        printf("2. Movimentar a Rainha \n");
        printf("3. Movimentar a Torre\n");
        printf("4. Movimentar o Cavalo\n");
        scanf("%d", &opcao);
        
        switch (opcao)
        {
        case 1:
            printf("Você escolheu se movimentar com o bispo:\n");
            for(int movimentarbispo = 0; movimentarbispo <5; movimentarbispo++){
                printf("Direita\n");
            }
            
        break;

        case 2:
            printf("Você escolheu se movimentar com a Rainha:\n");
            for(int movimentarrainha = 0; movimentarrainha <8; movimentarrainha++){
                printf("Esquerda\n");
            }
        break;
        case 3:
            printf("Você escolheu se movimentar com a Torre:\n");
            for(int movimentartorre = 0; movimentartorre <5; movimentartorre++){
                printf("Frente\n");
            }
        break;
        case 4:
            printf("Você escolheu se movimentar com o cavalo:\n");
            for(opcao = 0; opcao <2; opcao++){
                printf("Cima\n");
                for (int movimentocavalo = 0; movimentocavalo <opcao; movimentocavalo++){
                    printf("Esquerda\n");
                }

            }
        break;
        default:
        printf("Nenhuma opção escolhida\n \n"); 
            break;
        }
    }while (opcao >= 5);

    
    return 0;
      

}