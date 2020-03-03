#include <stdio.h>
#include <stdlib.h>

/* Practica 6 sobre ciclo do while. 1629757 */

int main(int argc, char *argv[]) 
{
	int i=1, sum=0, num, n;
	float prom=0;
	
	puts("cantidad de numero para analizar\n");
	scanf("%d",&n);

	//validacion
	
	
	do
	{   puts("Introdusca el numero:\n");
		scanf("%d",&num);
		if(num<0)
		{
				puts("El numero debe ser positivo o cero\n");
				scanf("%d",&num);
		}
		
	}
	while(i<=n);
		    sum+=num;
		    i++;
	prom=sum/n;
	printf("El promedio es: %.2f\n\n\n",&prom);
	system("pause");
	return 0;
}
