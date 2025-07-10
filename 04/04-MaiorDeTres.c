#include <stdio.h>
int Maior(int a,int b,int c){
    int m;
    if(a>b && a>c){
        m=a;
    }else if(b>a && b>c){
        m=b;
    }else{
        m=c;
    }
    return m;
}
int main(){
    int n1,n2,n3,r;

    printf("Digite 3 numeros: ");
    scanf("%d%d%d",&n1,&n2,&n3);

    r=Maior(n1,n2,n3);
    
    printf("o maior e: %d",r);
    return 0;
}