#include<stdio.h>
int main(){
    int i,x,cont=0;
    for(i=1;i<=10;i++){
        printf("Digite idade: ");
        scanf("%d",&x);
        if(x>=18){
            cont=cont+1;
        }
    }
    printf("maiores de 18 sao: %d",cont);
    return 0;
}