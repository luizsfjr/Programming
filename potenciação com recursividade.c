// cálculo de potenciação através de recursividade
#include<stdio.h>
// função para o cálculo
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
// função principal
main(){
	int num,exp;
	printf("digite um numero: ");
	scanf("%d", &num);
	printf("digite o expoente: ");
	scanf("%d", &exp);
	printf("resultado = %d", pot(num,exp));
}
