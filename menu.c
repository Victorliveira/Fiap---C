#include <stdio.h>
#include "impostorenda.c"
#include "tabuada.c"

int menu1()
{
    int opcao = 0;

    do
    {
        printf("Entre 1 para usar a tabuada:");
        printf("\nEntre 2 para calcular o IRPF:");
        printf("\nEntre 3 para sair;");
        printf("\nEntre a opcao desejada: ");
        scanf("%d", &opcao);
        fflush(stdin);

        switch (opcao)
        {
        case 1:
            printf("\nAbrindo a tabuada\n");
            tabuada();
            break;
        
        case 2:
            printf("\nAbrindo o calcudo do IRPF\n");
            calculadora();
            break;

        case 3:
            printf("\nFechando a aplicacao.\n");
            return 0;

        default:
            printf("\nOpcao invalida!\n");
            break;
        }
    } while (opcao != 3);

    return 0;
}
