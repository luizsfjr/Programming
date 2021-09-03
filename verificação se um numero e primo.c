// programa para calcular se um numero é primo
#include<stdio.h>
// função para verificação se o número é primo
void primo(int num){
	int i, div=0;
	for(i=1;i<=num;i++){
		if(num%i==0){
			div = div + 1;
		}
	}
	if(div==2){
		printf("****numero e primo****");
	} else{
		printf("****numero nao e primo****");
	}
}
// função principal
main(){
	int num;
	printf("digite um numero:");
	scanf("%d", &num);
	primo(num);
	return 0;
}
