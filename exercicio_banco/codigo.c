#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int rg;
    int telefone;
} usuario;

typedef struct
{
    char placa[10];
    char dados[50];
} automovel;

usuario usuarios[10];

int main(void)
{
    usuarios[0].rg = 3036164;
    usuarios[0].telefone = 35634063;

    printf("%d\n", usuarios[0].rg);

    return 0;
}