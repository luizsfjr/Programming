//programa da prova 2 avaliação
#include<stdio.h>
#include<string.h>
main(){
	char entrevistado[10],sexo[100],resposta[3];
	int i,q_h = 0,q_m = 0, q_sim = 0,q_nao = 0; //quantidade de homens,mulheres e quantidade de sim,não e resposta do entrevistado.
	float p_h,p_m; //porcetagem de homens e mulheres
	for(i=0;i<4;i++){
		printf("digite o primeiro nome do entrevistado: ");
		scanf("%s", &entrevistado);
		printf("digite o sexo do enrevistado: ");
		scanf("%s", &sexo);
		
		printf("***SEXO DO ENTREVISTADO*** : %s \n", sexo);
	
		printf("digite a resposta do entrevistado: ");
		scanf("%s", &resposta[i]);
		if(strcmp("M", sexo) == 0){
			q_h = q_h + 1;
			}
			else{
			if(strcmp("F", sexo)==0){	
			q_m = q_m + 1;
		} 
	}
		if(strcmp("sim", resposta) == 0){
			q_sim = q_sim + 1;
		} else{
			q_nao = q_nao + 1;
		}
	}
	p_h = (float)(100*q_h)/4;
	p_m = (float)(100*q_m)/4;
	
	printf("quantidade de homems : %d \n", q_h);
	printf("quantidade de mulheres: %d \n", q_m);
	printf("porcentagem de homens: %.2f \n", p_h);
	printf("porcentagem de mulheres: %.2f \n", p_m);
	printf("quantidade de sim: %d \n", q_sim);
	printf("quantidade de nao: %d \n", q_nao);
}
