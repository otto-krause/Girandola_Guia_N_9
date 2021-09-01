#include <stdio.h>
#include <stdlib.h>

int main ()

{
int base, exponente, resultado, i;
                i=1;
                resultado = 1;
    printf("Introduzca un n%cmero de base: ", 163);
        scanf("%d", &base);
            puts("");
    printf("Introduzca un n%cmero de exponente: ", 163);
        scanf("%d", &exponente);
            puts("");
while(i<=exponente)
    {
                resultado = resultado * base;
                i++;
    }

    printf("El resultado de multiplicar %d por s%c mismo %d veces es igual a: %d", base, 161,exponente, resultado);
return 0;
}
