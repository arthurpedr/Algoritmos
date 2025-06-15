#include<stdio.h>
int main(){
    int n,i,x,soma=0,cont=0;
    printf("Digite quantidade de numeros: ");
    scanf("%d",&x);
    for(i=0;i<x;i++){
        printf("Digite um numero: ");
        scanf("%d",&n);
        if(n %2==0){
            soma=soma+n;
            cont=cont+1;
        }
    }
    printf("Quantidade de pares: %d Soma dos pares e: %d", cont, soma);
    return 0;
}