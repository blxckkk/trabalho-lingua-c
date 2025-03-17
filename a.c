#include <stdio.h>
#include <stdlib.h>

int main(){
    char nome[50];
    int idade;
    float altura;
    char genero;

    printf("Coloque nome: ");
    scanf("%s", &nome);

    printf("Coloque sua idade: ");
    scanf("%d", &idade);

    printf("Coloque sua altura (em metros): ");
    scanf("%f", &altura);

    printf("Coloque seu genero biologico (M/F): ");
    scanf(" %c", &genero);

    printf("\nDados informados:\n");
    printf("Nome: %s\n", nome);
    printf("Idade: %d anos\n", idade);
    printf("Altura: %.2f metros\n", altura);
    printf("Genero biologico:%c\n", genero);

    return 0;
}
