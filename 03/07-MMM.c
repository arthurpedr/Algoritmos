#include<stdio.h>
int main(){
    int n1,maior,menor,cont=0,i;
    float m, soma=0;

    i=1;
    do{
        printf("Digite um numero: ");
        scanf("%d",&n1);
        if (i == 1) {
             
            maior = menor = n1;
        } else {
            if (n1 > maior) {
                maior = n1;
            }
            if (n1 < menor) {
                menor = n1;
            }
        }
        soma= soma+n1;
        cont=cont+1;
        i++;
    }while(i<=20);
    m=soma/cont;
    printf("media e: %2.f",m);
    printf("\nmaior e: %d",maior);
    printf("\nmenor e: %d",menor);
    return 0;
}