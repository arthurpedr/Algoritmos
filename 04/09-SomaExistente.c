#include <stdio.h>
int Soma(int a, int b){
    int s=0, i;
    if(b>a){
        for(i=a; i<b; i++){
        s=s+i;
    }
    s=s-a;
    
    }else{
        for(i=a; i>b; i--){
        s=s+i;
    }
    s=s-a;
    }
    return s;
}

int main(){
    int n1,n2,r;
    printf("Digite 2 numeros: ");
    scanf("%d%d",&n1,&n2);

    r=Soma(n1,n2);

    printf("A soma existente e: %d",r);
    return 0;
}