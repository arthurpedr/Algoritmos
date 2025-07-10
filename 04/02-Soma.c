#include <stdio.h>
int Soma(int n1,int n2){
    int s = n1 + n2;
    return s;
}
int main(){
    int n1,n2,s;

    printf("Digite 2 numeros: ");
    scanf("%d%d",&n1,&n2);

    s=Soma(n1,n2);
    
    printf("o resultado e: %d",s);
    return 0;
}