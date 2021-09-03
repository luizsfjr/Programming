// Programa para exemplificar a utilização de ponteiros em códigos C
#include<stdio.h>
#include<conio.h>
int TrocaDeValores(int *x,int *y){
	printf("X=%d\n",x);
	x = *x+4;
	y = 1;
	return;
}
main(){
	int a,b;
	printf("Digite o 1 valor: ");
	scanf("%d", &a);
	printf("Digite o 2 valor: ");
	scanf("%d", &b);
	printf("Valores inseridos %d %d \n", a,b);
	TrocaDeValores(&a,&b);
	printf("aaaaaaaaaa %d", a);
	
}
