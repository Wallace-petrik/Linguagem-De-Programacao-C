#include <stdio.h>

int main(void){
	int distancia;
	float valor , consumoMedio;
	
	scanf("%d %f",&distancia,&valor);
	
	consumoMedio = distancia/valor;
	
	printf("%.3f km/l\n",consumoMedio);
	return 0;
}
