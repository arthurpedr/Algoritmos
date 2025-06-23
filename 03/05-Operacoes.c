#include<stdio.h>
int main(){
    int n1,n2,x;
    char op;
    
    printf("Digite 2 numeros: ");
    scanf("%d%d",&n1,&n2);

    printf("Digite a operacao:");
    printf("\nSoma: +");
    printf("\nSubtracao: -");
    printf("\nMultiplicacao: *");
    printf("\nDivisao: / ");
    scanf(" %c",&op);

    switch (op){
    case '+': x=n1+n2;
    printf("resultado e:%d",x);
        break;
    case '-': x=n1-n2;
    printf("resultado e:%d",x);
        break;
    case '*': x=n1*n2;
    printf("resultado e:%d",x);
        break;
    case '/': if(n2==0){
        printf("impossivel dividir por zero");
    }else{
        x=n1/n2;
        printf("resultado e:%d",x); 
    }
        break;
    
    default: printf("numero invalido");
        break;
    }
    return 0;
}