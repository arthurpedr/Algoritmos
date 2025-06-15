#include<stdio.h>
int main(){
    int i;
    printf("Digite sua idade: ");
    scanf("%d",&i);
    if(i>0 && i<=12){
        printf("Crianca");
    }else if(i<=17){
        printf("Adolecente");
    }else if(i<=59){
        printf("Adulto");
    }else{
        printf("Idoso");
    }
    return 0;
}