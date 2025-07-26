#include <stdio.h>
int main(){
    int numero=3, tentativas, vetor[5];
    do{
    printf("Olá! Bem vindo ao jogo de adivinhação!\nUm número de 1 a 100 foi selecionado e sua função é adivinhá-lo. Você possui 5 tentativas.\n");
    for(tentativas=0;tentativas<5; tentativas++){
    printf("Tentativa:\n");
    scanf("%d",&vetor[tentativas]);
    if(vetor[tentativas]>numero){
        printf("O número certo é menor que o inserido.\n");
    }else if(vetor[tentativas]<numero){
        printf("O número certo é maior que o inserido. \n");
    }else{
        printf("Parabéns! Você acertou o número!");
        return 0;
    }
    if(tentativas==4){
        printf("Suas tentativas acabaram. O número certo era 3.");
    }
    }
    }while(tentativas<5);
    return 0;
}