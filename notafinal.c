#include <stdio.h>

void main()

{

    float nota_final, nota1, nota2;

    printf("Informe a nota 1:");
    scanf("%f", &nota1);

    printf("Informe a nota 2: ");
    scanf("%f", &nota2);

    nota_final = (nota1 > nota2) ? nota1 : nota2;

    printf("A nota final é %2.f", nota_final);
}