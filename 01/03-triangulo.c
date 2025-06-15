#include<stdio.h>
int main(){
    float a,b,c;
    printf("digite o valor de cada lado: ");
    scanf("%f%f%f", &a,&b,&c);
    if(a==b && b==c){
        printf("equilatero");
    }else if(a==b || b==c || a==c){
        printf("isosceles");
    }else{
        printf("escaleno");
    }
    return 0;
}