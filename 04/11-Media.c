#include <stdio.h>
float Nota(float a, float b, float c, char d){
    float M;
    switch (d)
    {
    case 'A': M=(a+b+c)/3;
        /* code */
        break;
    case 'P': M=(1*a+2*b+3*c)/(1+2+3);
        break;
    
    default: printf("Invalido!");
        break;
    }
    return M;
}
int main(){
    float n1,n2,n3,m;
    char op;

    printf("Digite 3 notas: ");
    scanf("%f%f%f",&n1,&n2,&n3);

    printf("Digite uma opcao A ou P: ");
    scanf(" %c",&op);

    m=Nota(n1,n2,n3,op);

    printf("\nSua media e: %.2f",m);
    return 0;
}