#include <stdio.h>
#include <string.h>

#define TOTAL_TERRITORIOS 5

/* 
   Definição da struct Territorio
   Agrupa informações relacionadas a um território
*/
typedef struct {
    char nome[30];   // Nome do território
    char cor[10];    // Cor do exército
    int tropas;      // Quantidade de tropas
} Territorio;

int main() {
    Territorio territorios[TOTAL_TERRITORIOS];
    int i;

    printf("=== Cadastro de Territórios ===\n\n");

    /* Laço para entrada dos dados */
    for (i = 0; i < TOTAL_TERRITORIOS; i++) {
        printf("Território %d\n", i + 1);

        printf("Nome do território: ");
        fgets(territorios[i].nome, sizeof(territorios[i].nome), stdin);
        territorios[i].nome[strcspn(territorios[i].nome, "\n")] = '\0';

        printf("Cor do exército: ");
        fgets(territorios[i].cor, sizeof(territorios[i].cor), stdin);
        territorios[i].cor[strcspn(territorios[i].cor, "\n")] = '\0';

        printf("Quantidade de tropas: ");
        scanf("%d", &territorios[i].tropas);
        getchar(); // Limpa o buffer do teclado

        printf("\n");
    }

    /* Exibição dos dados cadastrados */
    printf("\n=== Territórios Cadastrados ===\n\n");

    for (i = 0; i < TOTAL_TERRITORIOS; i++) {
        printf("Território %d\n", i + 1);
        printf("Nome: %s\n", territorios[i].nome);
        printf("Cor do Exército: %s\n", territorios[i].cor);
        printf("Tropas: %d\n", territorios[i].tropas);
        printf("-----------------------------\n");
    }

    return 0;
}




