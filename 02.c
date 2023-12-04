#include <stdio.h>
#include <string.h>
#include <locale.h>

struct endereco
{
    char rua[200];
    char numero[200];
    char bairro[200];
};

struct dados_Fucionario
{
    char nome[2000];
    char datadeDemissao[200];
    char Matricula[200];
    struct endereco endereco;
};

struct dados_Clientes
{
    char nome[2000];
    char datadeNascimento[2000];
    struct endereco endereco;
};

int main()
{

    int i, j;

    struct dados_Fucionario fucionario[3];
    struct dados_Clientes clientes[3];

    for (i = 0; i < 3; i++)
    {
        fflush(stdin);
        printf("\nCadastro do %dº Fucionario:", i + 1);

        printf("\nDigite o seu Nome:");
        gets(fucionario[i].nome);

        printf("\nDigite sua data de demissao:");
        scanf("%s", &fucionario[i].datadeDemissao);

        printf("\nDigite sua matricula:");
        scanf("%s", &fucionario[i].Matricula);

        printf("\nDigite sua Rua:");
        scanf("%s", &fucionario[i].endereco.rua);

        printf("\nDigite o numero:");
        scanf("%s", &fucionario[i].endereco.numero);

        printf("\nDigite seu barrio:");
        scanf("%s", &fucionario[i].endereco.bairro);

        system("cls");
    }

    for (j = 0; j < 3; j++)
    {
        fflush(stdin);
        printf("\nCadastro do %dº Cliente:", j + 1);

        printf("\nDigite seu Nome:");
        gets(clientes[j].nome);

        printf("\nDigite sua data de nascimento:");
        scanf("%s", &clientes[j].datadeNascimento);
        fflush(stdin);

        printf("\nDigite sua rua:");
        scanf("%s", &clientes[j].endereco.rua);

        printf("\nDigite o numero:");
        scanf("%s", &clientes[j].endereco.numero);

        printf("\nDigite seu bairro:");
        scanf("%s", &clientes[j].endereco.bairro);
          
          system("cls");
        
        fflush(stdin);
    }
    printf("\nExibir dados do usuario...");

    for (i = 0; i < 3; i++)
    {
        printf("\nNome:%s", fucionario[i].nome);
        printf("\nData de demissao:%s", fucionario[i].datadeDemissao);
        printf("\nMatricula:%s", fucionario[i].Matricula);
        printf("\nrua dos Fucionarios: %s", fucionario[i].endereco.rua);
        printf("\nNumero da rua dos  Fucionarios: %s", fucionario[i].endereco.numero);
        printf("\nBarrio dos Fucionarios: %s", fucionario[i].endereco.bairro);
    }

    for (j = 0; j < 3; j++)
    {
        printf("\nNome:%s", clientes[j].nome);
        printf("\nData de nascimento:%s", clientes[j].datadeNascimento);
        printf("\nrua dos Clientes: %s", clientes[j].endereco.rua);
        printf("\nNumero da rua dos  Clientes: %s", fucionario[j].endereco.numero);
        printf("\nBarrio dos Clientes: %s", clientes[j].endereco.bairro);
    }

    return 0;
}