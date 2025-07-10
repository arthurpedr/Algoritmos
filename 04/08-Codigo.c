#include <stdio.h>
int Ret(int a){
    int r;
    if(a>0){
        r=1;
    }else if(a==0){
        r=0;
    }else{
        r=-1;
    }
    return r;
}

int main(){
    int n1,r;
    
    printf("Digite um numero: ");
    scanf("%d",&n1);

    r=Ret(n1);

    printf("Seu codigo e: %d",r);
    return 0;
}