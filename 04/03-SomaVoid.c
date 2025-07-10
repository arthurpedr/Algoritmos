#include <stdio.h>
void Soma(int a, int b){
    int s = a + b;
    printf("Soma e: %d",s);
}
int main(){
    int n1,n2;

    printf("Digite 2 numeros: ");
    scanf("%d%d",&n1,&n2);

    Soma(n1,n2);
    
    return 0;
}