#include <stdio.h>
int main()
{
	float sal,pers;
	int aumento;
	printf("Digite o salario \n");
	scanf("%f",&sal);
	printf("Qual o percentual de aumento \n");
	scanf("%d",&aumento);
	
	pers= (sal*100)/aumento;
	
printf("Com o aumento de %d porcentos, o salario e = %f \n",aumento,pers);
	
	return 0;
}