#include <stdio.h>

int main()
{

    int idade;
    char nome[50];

    printf("Digite seu nome completo: ");
    gets(nome);
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Nome = %s\n", nome);
    printf("Idade = %d\n", idade);


    return 0;
}
