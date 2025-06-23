#include <stdio.h>
int main()
{
    float n1, n2, n3, m, mf, e;
    printf("Digite as 3 notas: ");
    scanf("%f%f%f", &n1, &n2, &n3);

    m = (n1 + n2 + n3) / 3;

    if (m >= 7){
        printf("Aprovado nota:%f", m);
    }else if (m >= 3 && m < 7){
        printf("Voce esta em exame nota:%2.f", m);
        printf("\nDigite nota do exame:");
        scanf("%f", &e);
        mf = (e + m) / 2;
        printf("\nMedia final e: %2.f", mf);
        if (mf >= 5){
            printf("\nAprovado no exame nota:%2.f", mf);
        }else{
            printf("\nReprovado no exame nota:%2.f", mf);
        }
    }else{
        printf("\nReprovado sem direito a exame nota:%2.f", m);
    }
    return 0;
}