#include <stdio.h>
int main()
{
    int p;
    printf("Digite o codigo do produto: ");
    scanf("%d", &p);

    if (p == 1){
        printf("Alimento nao perecivel");
    }else if (p >= 2 && p <= 4){
        printf("Alimento perecivel");
    }else if (p >= 5 && p <= 6){
        printf("Vestuario");
    }else if (p == 7){
        printf("Higiene pessoal");
    }else if (p >= 8 && p <= 10){
        printf("Utensilio domestico");
    }else{
        printf("Codigo invalido!");
    }
    return 0;
}