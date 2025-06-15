#include<stdio.h>
int main(){
    int n;
    printf("Digite um numero: ");
    scanf("%d",&n);
    if(n>=10 && n<=50){
        printf("%d esta presente",n);
    }else{
        printf("%d nao esta presente",n);
    }
    return 0;
}