// ler um n�mero N e somar todos n�meros de 1 at� N
#include<stdio.h>
	float soma(){
		float n,s;
		printf("digite um valor qualquer : ");
		scanf("%f", &n);
		s = ((1+n)*n)/2;
		return s;
	}
//fun��o principal
main(){
	printf("soma de todos os valores inteiros de 1 a n = %.2f", soma());
}
