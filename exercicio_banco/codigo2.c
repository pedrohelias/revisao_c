#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char nome[50];
    char rg[50];
    int numero;

} usuario;

typedef struct
{
    char nomeDoCarro[50];
    int placa;

} automovel;

void ImprimePessoa(usuario users[], automovel carro[], int quantidade) // declara o parâmetro como uma struct
{

    for (int i = 0; i <= quantidade; i++)
    {
        printf("Nome: %s,  rg: %s,  celular: %d\npossui o carro: %s, com placa: %d\n", users[i].nome, users[i].rg, users[i].numero, carro[i].nomeDoCarro, carro[i].placa);
    }
}

int AdicionaPessoa(usuario users[], automovel carros[], int quantidade, int ordemAutomovel)
{
    //quantidade ja começa com 1 - para sempre adicionar o usuário
    int quantidadeCarros = 0;
    int contagem = 0;
    int auxiliar = 0;
    int contagemLegada = 0;

    printf("digite seu nome: ");
    scanf("%s", &(users[quantidade].nome));
    printf("\n");
    printf("digite seu rg: ");
    scanf("%s", &(users[quantidade].rg));
    printf("\n");
    printf("digite seu numero de celular: ");
    scanf("%d", &(users[quantidade].numero));
    printf("\n");

    printf("Quantos automoveis o usuário possui? \n");
    scanf("%d", &quantidadeCarros);

    contagemLegada = ordemAutomovel + contagemLegada;

    for (int j = 0; j <= quantidadeCarros; j++)
    {
        printf("adicione o nome do carro %d: ", j);
        scanf("%s", &(carros[contagemLegada].nomeDoCarro));
        printf("\n");
        printf("digite a placa do carro %d: ", j);
        scanf("%d", &(carros[(contagemLegada)].placa));
        printf("\n");
        contagemLegada++;
    }

    return contagemLegada;
}

int main(void)
{
    int escolha = 0;
    usuario usuarios[10000];
    automovel carros[100000];

    while (escolha != 3)
    {
        printf("Olá! O que gostaria de fazer?(digite o número correspondente a opção escolhida)\n");
        printf("1 - adicionar usuários e automoveis\n2 - verificar usuarios e automoveis adicionados\n3 - sair do programa\n");

        scanf("%d", &escolha);
    }
}