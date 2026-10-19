#include <stdio.h>

int main()
{
    //vetores/arrays podem ser percorridos, do 0 para frente
    char nome[8] = "alberico";
    int i= 0;

    for (i = 0; i < 8; i++)
    {
        printf("O caracter %d eh a letra %c \n", i, nome[i]);
    }
    //nome[] pega a posição do valor da variável
    
    return 0;
}