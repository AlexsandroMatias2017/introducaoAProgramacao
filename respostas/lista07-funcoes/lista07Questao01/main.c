/*
 1 - Crie uma fun��o que receba como par�metro um n�mero inteiro e devolva o seu dobro.
 *
 */

#include <stdio.h>
#include <stdlib.h>


int dobro(int numero)
{

    return 2 * numero;

}

int main()
{

    int numero;
    printf("Digite um n�mero inteiro: ");
    scanf("%d", &numero);

    numero = dobro(numero);

    printf("O dobro do n�mero digitado �: %d", numero);

    return (EXIT_SUCCESS);
}

