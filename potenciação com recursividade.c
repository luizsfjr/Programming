// c�lculo de potencia��o atrav�s de recursividade
#include<stdio.h>
// fun��o para o c�lculo
int pot(int num, int exp){
	if(exp==0){
		return 1;
	} else{
		if(exp==1){
			return num;
		} else{
			return num*pot(num,exp-1);	
		  }
	}
}
// fun��o principal
main(){
	int num,exp;
	printf("digite um numero: ");
	scanf("%d", &num);
	printf("digite o expoente: ");
	scanf("%d", &exp);
	printf("resultado = %d", pot(num,exp));
}
