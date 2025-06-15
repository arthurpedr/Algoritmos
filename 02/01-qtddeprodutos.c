#include<stdio.h>
int main(){
    int p,i,t=0;
    for(i=1;i<=7;i++){
        printf("Digite quantidade de produtos: ");
        scanf("%d",&p);
        t=t+p;
    }
    printf("Quantidade de produtos e:%d",t);
    return 0;
}