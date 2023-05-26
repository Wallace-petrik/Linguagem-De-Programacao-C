#include<stdio.h>
#define MKPORLITRO 12 

int main(void){
	int tempoGasto, velocidadeMedia,distancia;
	float consumoViagem;
	
	scanf("%d %d",&tempoGasto,&velocidadeMedia);	
	
	distancia = tempoGasto * velocidadeMedia;
	consumoViagem = distancia/(float)MKPORLITRO;
	
	printf("%.3f\n",consumoViagem);
	return 0;
}
