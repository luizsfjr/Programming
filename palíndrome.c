// programa pra ver se a palavra é palíndrome
#include<stdio.h>
#include<string.h>
void pali(char palavra[], int tam){
	int i,cont=0;
	char aux[tam];
	for(i=0;i<tam;i++){
		aux[i] = palavra[tam-(i+1)];
	}
	for(i=0;i<tam;i++){
		if(aux[i]==palavra[i]){
		cont = cont + 1;
		}
	}
	if(cont==tam){
		printf("a palavra e palindorme");
	} else{
		printf("a palavra nao e palindrome");
	}
}



main(){
	char palavra[100];
	int tam;	
	printf("digite uma palavra: ");
	scanf("%s", &palavra);
	tam = strlen(palavra);
	pali(palavra, tam);
}
