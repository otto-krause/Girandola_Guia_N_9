#include <stdio.h>
#include <stdlib.h>

int main ()

{
	int Resultado=0;
	int Factorial;
	
		printf("Introduzca No. para calcular el factorial: ");
		scanf(" %ld", &Factorial);
			Resultado = 1;
	while(Factorial > 1) 
	{
			Resultado *= Factorial;
		printf(" %ld x",Factorial);
			Factorial--;
	}
		printf(" 1 = %ld\n\n",Resultado);
		
				system("PAUSE");
	return 0;
}

