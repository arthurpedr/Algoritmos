#include <stdio.h>

int Soma(int a, int b, int c){
    int i, soma=0;
    if(a>1){
        for(i=b;i<=c;i++){
            if(i % a == 0){
                soma=soma+i;
            }
        }
    }else{
        printf("numero deve ser maior que 1!");
    }
    return soma;
}

int main(){
    int n1,n2,n3,soma;

    printf("digite 3 numeros: ");
    scanf("%d%d%d",&n1,&n2,&n3);

    soma=Soma(n1,n2,n3);

    printf("\no resultado e: %d",soma);
    return 0;
}