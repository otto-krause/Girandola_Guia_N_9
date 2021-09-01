#include <stdio.h>
#include <stdlib.h>

int main ()

{
	int num,i,suma=0,cantidad;
			printf("Promedio.n Cuantos numero quieres calcular su promedio: ");
			scanf("%d",&num);
				for(i=1;i<=num;i++)
	{
			printf("Numero: ");
			scanf("%d",&cantidad);
				suma=suma+cantidad;
	}
				suma=suma/num;
			printf("Su promedio es: %d",suma);
	return 0;
}

