#include<stdio.h>

int main(void){
	char nome[30];
	double totalVendas,salarioFixo;
	
	scanf("%s %lf %lf",nome,&salarioFixo,&totalVendas);
	
	printf("TOTAL = R$ %.2lf\n",salarioFixo+(totalVendas*(15.00/100.0)));	
	return 0;
}
