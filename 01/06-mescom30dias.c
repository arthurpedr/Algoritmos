#include<stdio.h>
int main(){
    int op;
    printf("Digite um numero de 1 a 12: ");
    scanf("%d",&op);
    if(op==4 || op==6 || op==9 || op==11){
        printf("Esse mes possui 30 dias!");
    }else{
        printf("Esse mes nao possui 30 dias!");
    }
    return 0;
}