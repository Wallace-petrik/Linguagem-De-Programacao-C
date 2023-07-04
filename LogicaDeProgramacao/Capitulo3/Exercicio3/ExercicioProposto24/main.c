#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
    setlocale(LC_ALL,"");
    int contador = 0,sexof = 0;
    float altura,maior = 0,menor = 10,media = 0;
    char sexo;
    const int tan = 3;

    while(contador<tan){
        printf("%dº Registo.\nEntre com Sexo e Altura: ",contador+1);
            scanf(" %c%f",&sexo,&altura);

        if(altura<0 || (sexo!='m' && sexo!='M' && sexo!='F' && sexo!='f')){
            system("cls");
            printf("\nDados invalidos.\n");
            continue;
        }

        if(altura>maior){
            maior=altura;
         }
        if(altura<menor){
            menor=altura;
         }
        if(sexo=='f' || sexo=='F'){
            media+=altura;
            sexof++;
        }

        contador++;
    }
    printf("\nMaior altura %.2f Menor altura %.2f",maior,menor);
    printf("\nMedia de altura %.2f",media/sexof);
    printf("\nNúmero de homens %d. Diferença de %d%% entre eles.",tan-sexof,abs((((100.0*(tan-sexof))/tan)-((100.0*(sexof))/tan))));
    return 0;
}
