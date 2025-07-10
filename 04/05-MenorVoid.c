#include <stdio.h>
void Menor(int a,int b, int c){
    int m;
    if(a<b && a<c){
        m=a;
    }else if(b<a && b<c){
        m=b;
    }else{
        m=c;
    }
    printf("o Menor e: %d",m);
}

int main(){
    int n1,n2,n3;
    printf("Digite 3 numeros: ");
    scanf("%d%d%d",&n1,&n2,&n3);

    Menor(n1,n2,n3);
    return 0;
}
