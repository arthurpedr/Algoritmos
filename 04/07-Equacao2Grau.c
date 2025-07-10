#include <stdio.h>

// Função para calcular a raiz quadrada aproximada
double raiz_quadrada(double n) {
    double x = n;
    double y = 1;
    double e = 0.00001; // precisão

    while (x - y > e) {
        x = (x + y) / 2;
        y = n / x;
    }

    return x;
}

// Função para resolver a equação do segundo grau (a = 1)
void Res(int b, int c) {
    int d = (b * b) - 4 * 1 * c;

    if (d < 0) {
        printf("nao possui raizes reais\n");
    } else {
        double raiz_d = raiz_quadrada(d);
        double x1 = (-b + raiz_d) / 2.0;
        double x2 = (-b - raiz_d) / 2.0;

        printf("x1 é: %.2lf\n", x1);
        printf("x2 é: %.2lf\n", x2);
    }
}

int main(){
    int n1,n2;
    
    printf("Digite b e c da equacao: ");
    scanf("%d%d",&n1,&n2);

    Res(n1,n2);

    return 0;
}