#include <stdio.h>
#include <stdlib.h>

/* Practica 3 if anidados
José Luis Fuantos Villanueva 1629757 */

int main(int argc, char *argv[]) {
	char c;
	printf("Enter character: ");
	c=getchar();
	int a=(int)c;
	if(48<=a && a<=57){
		printf("Number entered: ");
	}else{
		if(65<=a && a<=90){
			printf("Uper alphabetic entered: ");
		}else{
			if(97<=a && a<=122){
				printf("Lower alphabetic entered: ");
			}else{
				printf("Symbol entered: ");
			}
		}
	}
	putchar(c);
	printf("\n");
	return 0;
}
