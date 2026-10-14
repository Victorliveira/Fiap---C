#include <stdio.h>

void main()

{
    float media, nota1, nota2;

    printf("Informe a nota 1: ");
    scanf("%f", &nota1);

    printf("Informe a nota 2: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) /2;

    if (media > 7)
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
}