#include<stdio.h>
#include<math.h>
// variável global
int cont=0;
// função para calcular quanto falta para o aluno passar
void pontos(int i, int tam,float nota[],int cont){
	float soma[tam],falta;
	soma[cont-1] = nota[0] + nota[1];
	falta = 18-soma[cont-1];
	if(falta>10){
		printf("Esse aluno esta reprovado\n");
	} else{
			if(falta>0){
	printf("Esse aluno precisa de %.2f pontos para passar \n",falta);
	} else{
		printf("Esse aluno ja passou \n");
      }
	}
}
//função principal
main(){
	int i,tam;
	float nota[30];
	tam = sizeof(nota)/sizeof(int);
	while(cont<tam){
		cont = cont + 1;
	for(i=0;i<2;i++){
		printf("digite a %d nota do aluno %d: ", i+1,cont);
		scanf("%f", &nota[i]);
	}
	printf("\n");
	pontos(i,tam,nota,cont);
	printf("\n");
  }
}
