#include <stdio.h>

void main()

{
    // declaração de variavel local
    float celsius, fahren;

    printf("Entre com a temperatura em graus Fahrenheit: ");
    scanf("%f",&fahren);;
    //scanf pega um dado com o usuário
    // %f serve para informar que a var recebera um valor float

    celsius = (fahren - 32) * 5 / 9;

    printf("A temperatura em graus celsius é de: %2.f",celsius);

}