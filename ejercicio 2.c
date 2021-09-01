#include <stdio.h>
#include <stdlib.h>

int main ()

{
	int inferior, superior;
		printf( "\n   Introduzca numero (entero) inferior: ", 163 );
			scanf( "%d", &inferior );
		printf( "\n   Introduzca numero (entero) superior: ", 163 );
			scanf( "%d", &superior );
		printf( "\n   " );
	
	if ( inferior <= superior )
	do
	{
		printf( "%d ", inferior);
				inferior++;
	} 
	while ( inferior <= superior );
	else
		printf( "ERROR: %d no es mayor o igual que %d", superior, inferior );
				return 0;
}

