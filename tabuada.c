#include <stdio.h>

int tabuada()
{
    int contador, tabu, resultado;

    printf("Entre o numero da tabuada: ");
    scanf("%d", &tabu);

    for (contador = 1; contador <= 10; contador++)
    {
        resultado = tabu*contador;

        printf("%d * %d = %d \n", tabu, contador, resultado);
    }
    
    return 0;
}