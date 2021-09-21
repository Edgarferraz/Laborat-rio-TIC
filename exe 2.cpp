#include <stdio.h>
main(){
	int salmin, salfun;
	float resul;
	printf("digite o salario minimo \n");
	scanf("%d", &salmin);
	printf("digite o salario do funcionario \n");
	scanf("%d", &salfun);
	resul=(salfun/salmin);
	printf("\n o funcionário recebe %f salario(s) minimos", resul);
	
}