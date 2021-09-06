#include<stdio.h>
#include<math.h>
#include<stdlib.h>
//variáveis globais
int cont=0;
//programa para ler três notas de uma quantidade x de alunos e calcular a média ponderada e mostrar sua situação
void media_a(float notas[],int i,int tam,int cont){
	float media[tam];
	media[cont-1] = (notas[0] + (notas[1]*2) + (notas[2]*3))/6;
	printf("media final = %.2f \n", media[cont-1]);
	if(media[cont-1]>=6){
		printf("resultado final: aluno aprovado\n");
	} else{
		if(media[cont-1]<4){
			printf("resultado final: aluno reprovado\n");
		} else{
			printf("resultado final: aluno a fazer prova substitutiva\n");
		}
     }
  }
// função principal
main(){
	int i,tam,qtde;
	float notas[3];
	printf("De quantos alunos desejas calcular a nota final: ");
	scanf("%d", &qtde);
	
	//limite = (float*)malloc(qtde*sizeof(float)); 
	
	tam = sizeof(qtde)/sizeof(int);
	
	while(cont<qtde){
		cont = cont + 1;
		for(i=0;i<3;i++){
		printf("digite a %d nota do aluno %d: ", i+1,cont);
		scanf("%f", &notas[i]);
		}
		media_a(notas,i,tam,cont);
		printf("\n");	
	 }
}
