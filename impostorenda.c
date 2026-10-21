#include <stdio.h>

int calculadora()

{
    float sal, soma, desc = 0;

    printf("Informe seu salario: ");
    scanf("%f", &sal);

    if (sal <= 1903.98)
    {
        printf("Com o salario de R$%.2f voce esta isento do Imposto de renda! ", sal);
    }
    else if (sal >1903.99 && sal <= 2826.65 )
    {
        desc = sal*0.075;
        soma = sal - desc;
        printf("Com o salario de R$%.2f voce tem R$%.2f de desconto, totalizando R$%.2f de salario liquido!", sal, desc, soma);
    }
    else if (sal >2826.66 && sal <= 3751.05 )
    {
        desc = sal*0.15;
        soma = sal - desc;
        printf("Com o salario de R$%.2f voce tem R$%.2f de desconto, totalizando R$%.2f de salario liquido!", sal, desc, soma);
    }
    else if (sal >3751.06 && sal <= 4664.68 )
    {
        desc = sal*0.225;
        soma = sal - desc;
        printf("Com o salario de R$%.2f voce tem R$%.2f de desconto, totalizando R$%.2f de salario liquido!", sal, desc, soma);
    }
    else
    {
        desc = sal*0.275;
        soma = sal - desc;
        printf("Com o salario de R$%.2f voce tem R$%.2f de desconto, totalizando R$%.2f de salario liquido!", sal, desc, soma);
    }
        
    return 0;
}