#include<stdio.h>
int main(){
    int i,p,soma=0;
    i=0;
    do{
        printf("Pessoas que entraram na sala: ");
        scanf("%d",&p);
        soma=soma+p;
        i++;
    }while(p != 0);
    printf("Quantidade de pessoas e: %d",soma);
    return 0;
}