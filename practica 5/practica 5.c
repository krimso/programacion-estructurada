#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/* Practica 5 sobre los ciclos. Usuario debe introducir numeros y calcular el promedio de los positivos .José Luis Fuantos Villanueva 1629757 */

int main(int argc, char *argv[]) {
	int i, num, n, sum;
	float prom;
	
	//Inicializacion de variables
	prom=0;
	sum=0;
	i=1;
	
	puts("Introducir la cantidad de numeros a revisar:\n");
	scanf("%d",&n);
	//comprobacion de numeros de n
	if(n<0){
		puts("Introducir la cantidad de numeros a revisar:\n");
		scanf("%d",&n);
	}
	while(i<=n)
	{
		puts("Introdusca el numero");
		scanf("%d",&num);
		if(num<0)
		    {
			puts("Introdusca un numero igual o mayor a cero\n");
			scanf("%d",&num);
		    }
		sum+=num;
		i++;
	}
	prom=sum/n;
	printf("El promedio es: %.2f\n\n\n",prom);
	system("pause");
	return 0;
}
