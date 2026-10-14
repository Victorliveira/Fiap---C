#include <stdio.h>

int main()

{
    float media, nota1, nota2;
    int opcao;

    printf("Informe a nota 1: ");
    scanf("%f", &nota1);

    printf("Informe a nota 2: ");
    scanf("%f", &nota2);

    printf("Entre 1 para calcular a media ou 2 para sair: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        media = (nota1 + nota2) /2;

        if (media >= 7)
        {
         printf("Você foi aprovado. Sua nota é %2.f", media);
        }
        else if (media < 7 && media > 4)
        {
            printf("Você precisa passar pela prova final. Sua nota é %2.f", media);
        }
        else
        {
            printf("Você foi reprovado, Sua nota é %2.f", media);
        }
        break;
    
    default:
        break;
    }

    return 0;
}