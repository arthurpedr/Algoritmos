#include <stdio.h>
void dual(int a, int b, int c, int d, int e){
    int maior=-99999999, menor=99999999, i;
    int v[5]={a,b,c,d,e};
    for( i=0; i<5; i++){
        if(v[i] > maior){
            maior=v[i];
        }if(v[i] < menor){
            menor = v[i];
        }
    }
    printf("O maior e: %d",maior);
    printf("\nO menor e: %d",menor);
}
int main(){
    int n1,n2,n3,n4,n5;

    printf("digite 5 numeros: ");
    scanf("%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5);

    dual(n1,n2,n3,n4,n5);

    return 0;
}