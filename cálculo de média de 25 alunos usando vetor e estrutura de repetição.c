#include<stdio.h>
// programa pra calcular a média e o resultado final de 25 alunos.
int j=0;
void media_aluno(){
	while(j<25){
	j = j+1;
	int i;
	float nota[4];
	float soma = 0,media[25];
		for(i=0;i<4; i++){
			printf("digite a %d nota do aluno %d: ",i+1, j);
			scanf("%f", &nota[i]);
			soma  = soma + nota[i];
		}
		media[j] = soma/4;
		printf("media final = %.2f \n", media[j]);
		if(media[j]>=7){
			printf("resultado final = aprovado \n");
		} else {
			if(media[j]<=4){
				printf("resultado final = reprovado \n");
			} else{
				printf("resultado final = substitutiva \n");
		  }
		}
   } 
}

	//função pra calcular a maior media
	
	void m_media(float media[]){
	
	double maior;
	for(j=0;j<25;j++){
		if( j=0 || media[j]>maior ){
			maior = media[j];
		}
	}
		printf("maior media entre os alunos = %.2f", maior);
	}

//função principal
main()
{
media_aluno();
}

