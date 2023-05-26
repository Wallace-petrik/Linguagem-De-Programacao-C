#include<stdio.h>
#include<math.h>
#include<locale.h>

int notas(float valor,int *reais, int *qtdNotas);
void moedasf(int restorno,int *moedas, int *qtdMoedas);
void imprimeMoedas(int *qtdMoedas,int *moedas);
void imprimeNotas(int *qtdNotas,int *reais);


int main(){
    setlocale(LC_ALL,"");

    float valor;
    int restorno;
    int moedas[6] = {100,50,25,10,5,1};
    int reais[6] = {100,50,20,10,5,2};
    int qtdNotas[6]= {0,0,0,0,0,0},qtdMoedas[6]= {0,0,0,0,0,0};

    printf("Digite um valor qualquer: ");
        scanf("%f",&valor);

    restorno=(notas(valor,reais,qtdNotas));


    imprimeNotas(qtdNotas,reais);
    imprimeMoedas(qtdMoedas,moedas);
return 0;
}

void moedasf(int restorno,int *moedas, int *qtdMoedas){
    int aux = (int)restorno;

    for(int i = 0 ; i < 6 ; i++){
        qtdMoedas[i]= aux/moedas[i];
        aux = aux%moedas[i];
    }

}

void imprimeMoedas(int *qtdMoedas,int *moedas){
    printf("MOEDAS:\n");
	for(int i = 0 ; i < 6 ; i++ ){
		printf("%d nota(s) de R$ %.2f\n",qtdMoedas[i]/100,(float)moedas[i]/100);
	}
}

int notas(float valor,int *reais, int *qtdNotas){
    int aux = (int)valor;

    for(int i = 0 ; i < 6 ; i++){
        qtdNotas[i]= aux/reais[i];
        aux = aux%reais[i];
    }
    return aux*100+round((valor-(int)valor)*100);

}

void imprimeNotas(int *qtdNotas,int *reais){
    printf("NOTAS:\n");
	for(int i = 0 ; i < 6 ; i++ ){
		printf("%d nota(s) de R$ %.2f\n",qtdNotas[i],(float)reais[i]);
	}
}
