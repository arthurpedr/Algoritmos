#include <stdio.h>
int Soma (float a,float b){
    float s=a+b;
    return s;
}
int Sub (float a,float b){
    float su=a-b;
    return su;
}
int Mul (float a,float b){
    float m=a*b;
    return m;
}
int Div (float a,float b){
    float d;
    if(b==0){
        printf("Divisao Nao e possivel\n");
    }else{
        d=a/b;
    }
    return d;
}

int main(){
    float n1,n2,s,su,m,d;

    printf("Digite 2 numeros: ");
    scanf("%f%f",&n1,&n2);

    s=Soma(n1,n2);
    su=Sub(n1,n2);
    m=Mul(n1,n2);
    d=Div(n1,n2);

    printf("Soma e: %.2f Subtracao  e: %.2f Multiplicacao e: %.2f Divisao e: %.2f",s,su,m,d);
    return 0;
}