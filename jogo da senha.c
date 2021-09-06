// jogo da senha
#include<stdio.h>
main(){
	int i, n=0, num;
	while(n<=0 || n>=100){
		printf("jogador 1, digite um valor: ");
		scanf("%d", &n);
	}
	for(i=0;i<5;i++){
	printf("jogador 2, digite um valor: ");
	scanf("%d", &num);
	if(num>n){
		printf("****numero maior**** \n");
		} else{
			if(num<n){
				printf("****numero menor**** \n");
			} else{
				printf("****voce acertou**** \n");
				break; 
			}
		}
	
	}
	
}
