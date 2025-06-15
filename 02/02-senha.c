#include<stdio.h>
int main(){
    int s,i,cont=0;
    i=0;
    do {
        printf("digite a senha: ");
        scanf("%d",&s);
        cont=cont+1;
        i++;
    } while(s != 1234);
    printf("quantidade de vezes foi: %d",cont);
    return 0;
}