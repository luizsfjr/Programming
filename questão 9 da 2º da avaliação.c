#include<stdio.h>
main(){
	float parcial,num,resultado;
	int cont;
	parcial = 0;
	cont = 0;
	while(cont<10){
		printf("informe um numero: ");
		scanf("%d", &num);
		parcial = parcial + 1;
		printf("***parcial*** = %.2f \n", parcial);
		cont = cont + 1;
		printf("***cont*** = %d \n", cont);
	}
	resultado = parcial/cont;
	printf("resultado = %d", resultado);
}
