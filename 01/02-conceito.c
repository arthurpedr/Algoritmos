#include<stdio.h>
int main(){
    float n1;
    printf("Digite sua nota: ");
    scanf("%f",&n1);
    if(n1 >= 9){
        printf("Conceito A");
    }else if(n1 >=7){
        printf("Conceito B");
    }else if(n1 >= 5){
        printf("Conceito C");
    }else{
        printf("Conceito D");
    }
    return 0;
}