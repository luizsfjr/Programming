#include <stdio.h>

int main() {
   
    char entrevistado[10] ,resposta[3];
	int i, q_m = 0, q_f = 0, q_sim = 0,q_nao = 0, sexo = 0; //quantidade de homens,mulheres e quantidade de sim, não e resposta do entrevistado.
	float p_m, p_f; //porcetagem de homens e mulheres
	for(i=0;i<2;i++){
		printf("digite o primeiro nome do entrevistado: ");
		scanf("%s", entrevistado);
		printf("digite o sexo do enrevistado: \n1 - m\n2 - f\n ");
		scanf("%d", &sexo);
		
		printf("***SEXO DO ENTREVISTADO*** : %d \n", sexo);
	
		printf("Digite a resposta do entrevistado: ");
		scanf("%s", resposta);
		
		switch(sexo){
			case 2:
				q_f++;
				break;
			case 1 :
				q_m++;
				break;
		}
		
		
		if(strcmp("sim", resposta) == 0){
			q_sim = q_sim + 1;
		} else{
			q_nao = q_nao + 1;
		}
	}
	p_m = (float)(100*q_m)/2;
	p_f = (float)(100*q_f)/2;
	
	printf("\n");
	printf("quantidade de homens : %d \n", q_m);
	printf("quantidade de mulheres: %d \n", q_f);
	printf("porcentagem de homens: %.2f \n", p_m);
	printf("porcentagem de mulheres: %.2f \n", p_f);
	printf("quantidade de sim: %d \n", q_sim);
	printf("quantidade de nao: %d \n", q_nao);
    
    return 0;
}
