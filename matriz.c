#include <stdio.h>

int main()
{
    int matriz[2][2]; //Matriz vai ser preenchida por 4 linhas e 4 colunas

    int x,y, soma = 0;

    for (x = 0; x < 2; x++) //Percorre as linhas da matriz
    {
        for (y = 0; y < 2; y++) // Percorre as colunas da matriz
        {
            printf("Entre o numero da linha %d da coluna %d ", y, x);
            scanf("%d", &matriz[x][y]); // Escaneia o valor digitado para a matriz
        }
        
    }
    
    
    for (x = 0; x < 2; x++)
    {

        for (y = 0; y < 2; y++)
        {
            soma = soma + matriz[x][y]; // Faz a soma do valor da soma da matriz
        }
        
    }

    printf("O valor da soma e: %d", soma);

    for (x = 0; x < 2; x++) //Percorre as linhas da matriz
    {
        printf("\n");
        for (y = 0; y < 2; y++) // Percorre as colunas da matriz
        {
            printf("[%d]",matriz[x][y]); // printa o valor da matriz
        }
        
    }
    

    return 0;
}