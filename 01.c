#include <stdio.h>
#include <string.h>
#include <locale.h>

struct dados_Fucionario
{
    char nome[2000];
    int idade;
    float cpf;
};

struct dados_Clientes
{
    char nome[2000];
    int idade;
    float cpf;
};

int main()
{

    struct dados_Fucionario fucionario;
    struct dados_Clientes clientes;
    char opcao;

    printf("\nFaça seu cadastro:");
    printf("\nVocê é CLiente(C) ou Fucionario(F)");
    printf("\nDigite 'C' ou 'F' :");
    scanf("%s", &opcao);

    switch (opcao)
    {
    case 'F':
        fflush(stdin);
        printf("\nDigite seu Nome:");
        gets(fucionario.nome);

        printf("\nDigite sua Idade:");
        scanf("%d", &fucionario.idade);

        printf("\nDigite seu CPF:");
        scanf("%f", &fucionario.cpf);
        fflush(stdin);

        printf("\nExibindo dados Fucionario");

        printf("\nNome:%s", fucionario.nome);
        printf("\nIdade:%d", fucionario.idade);
        printf("\nCPF:%.2f", fucionario.cpf);
        break;

    default:
        break;
    }

    switch (opcao)
    {
    case 'C':
        fflush(stdin);
        printf("\nDigite seu Nome:");
        gets(clientes.nome);

        printf("\nDigite sua Idade:");
        scanf("%d", &clientes.idade);

        printf("\nDigite seu CPF:");
        scanf("%f", &clientes.cpf);

        printf("\nExibindo dados cliente");

        printf("\nNome:%s", clientes.nome);
        printf("\nIdade:%d", clientes.idade);
        printf("\nCPF:%.2f", clientes.cpf);
        break;

    default:
        break;
    }

    return 0;
}
