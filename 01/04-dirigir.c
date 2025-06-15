#include<stdio.h>
int main(){
    int idade;
    char c;
    printf("digite sua idade: ");
    scanf("%d",&idade);
    getchar();
    printf("digite se possui carteira");
    printf("com sim ou nao :");
    scanf("%c", &c);
    if(idade > 18){
        switch (c){
        case 'y':
            printf("apto a dirigir");
            break;
            case 'n':
            printf("nao apto a dirigir");
            break;
        
        default: printf("digite y ou n");
            break;
        }
    }else{
        printf("nao apto a dirigir por ser menor de idade");
    }
return 0;
}