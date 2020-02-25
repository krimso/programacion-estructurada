#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/* Programa de switch, José Luis Fuantos Villanueva 1629757 */

int main(int argc, char *argv[])
 {
 char op;
 float num1,num2,result=0.0f;
 
 printf("Bienvenido a calculadora\n");
 puts("\nIntrodusca el primer numero:\n");
 scanf("%f",&num1);
 puts("\nIntrdusca el segundo numero:\n");
 scanf("%f",&num2);
 //inicia switch
 printf("\nQue desea hacer el usuario:");
 op=getche();
  switch(op)
  {
  	case'+':
  		result=num1+num2;
  		break;
  	case'-':
  		result=num1-num2;
  		break;
  	case'*':
  		result=num1*num2;
  		break;
  	case'/':
  		result=num1/num2;
  		break;
  	default:
  		puts("\nSolo se pueden hacer +,-,* y /\n");
  		break;
  }
    printf("\nEl resultado es: %.2f",result);
  	system("pause");
	return 0;
}
