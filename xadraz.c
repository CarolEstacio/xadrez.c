#include <stdio.h>

   int main(){
    int casaTorre = 1, casaBispo = 1, casaRainha = 1;

     // laço de repetição em while para Torre
        printf("**Movimentando a peça Torre!!**\n");
     while ( casaTorre <= 5){  //repete o bloco enquanto casas for menor ou igual a 5   
        printf ("Direita\n");  // imprime a direção do movimento
        casaTorre++;  // incrementa o valor das casas em +1
       }
        printf("Movimente a próxima peça!\n");

     // laço de repetição em do while para Bispo
        printf("**Movimentando a peça Bispo!!**\n");
     do
       {
       printf("Cima Direita\n"); // imprime a direção do movimento
       casaBispo++;  // incrementa o valor das casas em +1
     } while (casaBispo <= 5);  //repete o bloco enquanto casas for menor ou igual a 5 
       printf("Movimente a próxima peça!\n");

     //laço de repetição em for para Rainha
       printf("**Movimentando a peça Rainha!!**\n");
     for  (casaRainha = 1; casaRainha <= 8; casaRainha++){ // faz inicialização da variável,  //repete o bloco enquanto casas for menor ou igual a 8, incrementa. 
       printf("Esquerda\n"); // imprime a direção do movimento
       }
       printf("Fim dos movimentos!\n");
       
  return 0;
    }