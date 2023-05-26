#include <stdio.h>

int main(void){
	int horaTrabalhada,numeroDeFuncionario;
	float valorPorHora;
	
	scanf("%d %d %f",&numeroDeFuncionario,&horaTrabalhada,&valorPorHora);
	
	printf("NUMBER = %d\nSALARY = U$ %.2f\n",numeroDeFuncionario,horaTrabalhada*valorPorHora);
	return 0;
}
