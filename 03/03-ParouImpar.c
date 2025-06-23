#include <stdio.h>
int main()
{
    int n1;

    printf("Digite um numero: ");
    scanf("%d", &n1);

    if (n1 % 2 == 0){
        printf("%d e Par", n1);
    }else{
        printf("%d e Impar", n1);
    }
    return 0;
}