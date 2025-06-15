#include<stdio.h>
int main(){
    int i,x;
    float n,m,soma=0;
    printf("Digite quantidade de notas: ");
    scanf("%d",&x);
    for(i=0;i<x;i++){
        printf("Digite sua nota: ");
        scanf("%f",&n);
        soma=soma+n;
    }
    m=soma/x;
    printf("media das notas e: %.2f",m);
    return 0;
}