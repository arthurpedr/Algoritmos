#include<stdio.h>

int main(){
    int v[10], i, soma=0;

    for(i=0; i<10; i++){
        printf("Digite 10 numeros: ");
        scanf("%d",&v[i]);
        if(v[i] %2==0){
            soma=soma+v[i];
        }
    }
    printf("A soma e: %d",soma);
    return 0;
}