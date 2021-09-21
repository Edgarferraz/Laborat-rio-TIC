#include <stdio.h>
int main(){
	
	int preco, ingresso, total;
	
printf("Qual foi o custo do evento\n");
scanf("%d", &preco);
printf("Quanto custa os ingressos \n");
scanf("%d", &ingresso);
total= preco/ingresso;
printf("\n sendo o preco de %d precisa-se vender %d ingressos ate cobrir %d. \n",ingresso,total,preco);
	
return 0;	
}