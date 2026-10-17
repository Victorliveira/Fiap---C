#include <stdio.h>

int main()
{
    float media, nota1, nota2;

    // Para validar um caracter precisa usar aspas simples
    char resp = 's';

    while(resp == 's')
    {
        printf("\r\nEntre a nota 1: ");
        scanf(" %f", &nota1);

        printf("\r\nEntre a nota 2: ");
        scanf(" %f", &nota2);

        media = (nota1 + nota2)/2;

        printf("\r\nSua media e %.2f ", media);

        printf("\r\nPara continuar digite s: ");
        // É necessário deixar um espaço no % para entender que é um input e não uma continuação do texto
        scanf(" %c", &resp);

    }
    
return 0;
}