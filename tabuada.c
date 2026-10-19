#include <stdio.h>

int main()
{
    int contador, tabuada, resultado;

    printf("Entre o numero da tabuada: ");
    scanf("%d", &tabuada);

    for (contador = 1; contador <= 10; contador++)
    {
        resultado = tabuada*contador;

        printf("%d * %d = %d \n", tabuada, contador, resultado);
    }
    
    return 0;
}