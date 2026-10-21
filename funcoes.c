#include <stdio.h>

void imprimi(int a, int b) 
//Void não retorna valores
// É necessário informar as variavéis dentro do ()
{
    //Criação de funções para reutilizações futuras

    printf("O valor um e %d e o valor dois e %d", a, b);
}

int main()
{
    
    int i,j = 0;
    printf("Entre o valor 1: ");
    scanf("%d", &i);
    printf("Entre o valor 2: ");
    scanf("%d", &j);

    imprimi(i,j); //Quando usar a função, tem que passar as variavéis esperadas

    return 0;
}