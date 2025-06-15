#include<stdio.h>
int main(){
    int x,p,z,m=0,a=0,i=0;
    printf("Quantidade de idades: ");
    scanf("%d",&p);
    x=0;
    while(x<p){
        printf("Digite idades: ");
        scanf("%d",&z);
        if(z<18){
            printf("Menor de idade!\n");
            m=m+1;
        }else if(z<=60){
            printf("Adulto!\n");
            a=a+1;
        }else{
            printf("Idoso!\n");
            i=i+1;
        }
        x++;
    }
    printf("Quantidades menor: %d Adulto: %d Idoso: %d", m,a,i);
    return 0;
}