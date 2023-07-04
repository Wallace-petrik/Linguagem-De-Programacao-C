#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
    float value,valorComA,valorComD;

    printf("\n\tEntre com o valor da prestação em atraso: ");
        scanf("%f",&value);

    valorComA = value+(value*0.1);
    valorComD = valorComA-(valorComA*0.1);

    printf("\n\tValor final a pagar = %.2f",valorComD);
    printf("\n\tPrejuíso de = %.2f",value-valorComD);

    return 0;
}
