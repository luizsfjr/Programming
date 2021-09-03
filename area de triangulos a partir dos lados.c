#include<stdio.h>
#include<math.h>
main(){
	double area_x,area_y, ax,bx,cx;
	double ay,by,cy,px,py;
	printf("digite os lados do triangulo x \n");
	// entrada de dados do triângulo x
	scanf("%lf", &ax);
	scanf("%lf", &bx);
	scanf("%lf", &cx);
	//entrada de dados do triângulo y
	printf("digite os lados do triangulo y \n");
	scanf("%lf", &ay);
	scanf("%lf", &by);
	scanf("%lf", &cy);
	px = (ax+bx+cx)/2;
	py = (ay+by+cy)/2;
	//cálculo da área dos triâgulos
	area_x = sqrt(px*(px-ax)*(px-bx)*(px-cx));
	area_y = sqrt(py*(py-ay)*(py-by)*(py-cy));
	printf("AREA DO TRIANGULO X: %.4f \n", area_x);
	printf("AREA DO TRIANGULO Y: %.4f \n", area_y);
	if(area_x>area_y){
		printf("***triangulo X e o maior***");
	} else{
		if(area_y>area_x){
			printf("***triangulo Y e o maior***");
		} else{
			printf("***os dois triangulos sao iguais***");
			}
	}
}
