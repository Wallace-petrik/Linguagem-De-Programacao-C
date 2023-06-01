#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");

    int p1x,p1y,p2x,p2y;
    int distancia;
    printf("\n\tDigite ar coordenadas do PRIMEIRO ponto X e Y:");
        scanf("%d %d",&p1x,&p1y);
    printf("\n\tDigite ar coordenadas do SEGUNDO ponto X e Y:");
        scanf("%d %d",&p2x,&p2y);

    distancia=sqrt(pow(p2x-p1x,2)+pow(p2y-p1y,2));

    printf("\n\tA distância entre os dois pontos é = %d",distancia);
    return 0;
}
