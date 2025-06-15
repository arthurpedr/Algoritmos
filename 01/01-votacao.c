#include<stdio.h>
int main(){
    int i;
    printf("Digite sua idade: ");
    scanf("%d", &i);
    if(i < 16){
        printf("nao esta apto a votar!");
    }else if(i > 70){
        printf("apto a votar mas nao obrigatorio!");
    }else{
        printf("apto a votar");
    }
    return 0;
}