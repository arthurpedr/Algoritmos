#include <stdio.h>
int Maior(int n1, int n2){
    int m;
    if(n1>n2){
        m=n1;
    }else{
        m=n2;
    }
    return m;
}

int main(){
    int n1,n2,m;

    printf("Digite 2 numeros: ");
    scanf("%d%d",&n1,&n2);

    m=Maior(n1,n2);

    printf("o maior e : %d",m);
    return 0;
}