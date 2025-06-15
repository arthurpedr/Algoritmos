#include<stdio.h>
int main(){
    int i,x,cont=-1;
    float m,soma=0;
    i=0;
    do{
        printf("digite um numero: ");
        scanf("%d",&x);
        soma=soma+x;
        cont=cont+1;
        i++;
    }while(x != 0);
    printf("a soma e: %.2f Quantidade e: %d\n",soma,cont);
    m=soma/cont;
    printf("a media e: %.2f", m);
    return 0;
}