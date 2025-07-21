#include <stdio.h>

int main() {
    int vetor[100]; // capacidade máxima de 100 números
    int valor, i = 0, posicao = -1;

    printf("Digite numeros (0 para parar):\n");

    // Preenche o vetor até que o usuário digite 0
    do {
        scanf("%d", &valor);
        if(valor != 0) {
            vetor[i] = valor;
            i++;
        }
    } while(valor != 0 && i < 100);

    int tamanho = i;

    // Solicita o número a ser buscado
    printf("Digite um numero para buscar no vetor: ");
    scanf("%d", &valor);

    // Procura o número no vetor
    for(i = 0; i < tamanho; i++) {
        if(vetor[i] == valor) {
            posicao = i;
            break; // para na primeira ocorrência
        }
    }

    // Exibe o resultado
    if(posicao != -1) {
        printf("Numero encontrado na posiçao: %d\n", posicao);
    } else {
        printf("Numero nao encontrado no vetor.\n");
    }

    return 0;
}
