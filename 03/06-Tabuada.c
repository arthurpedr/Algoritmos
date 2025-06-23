#include<stdio.h>
int main(){
    int n1,i;
    printf("Digite um numero: ");
    scanf("%d",&n1);

    printf("\nTabuada do: %d",n1);
    for(i=1; i<=10; i++){
        printf("\n%d * %d = %d",n1,i,n1*i);
    }
    return 0;
}