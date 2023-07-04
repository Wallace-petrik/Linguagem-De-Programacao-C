#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"");

    float peso,altura,imc;

    printf("\n\tEntre com o peso e a altura respectivamente:");
        scanf("%f%f",&peso,&altura);

    imc = peso/(altura*altura);

    if(imc<18.5){
        printf("\n\tAbaixo do peso.");
    }else if(imc>=18.5 && imc<=25){
        printf("\n\tPeso normal.");
    }else if(imc>25 && imc<=30){
        printf("\n\tAcima do peso.");
    }else printf("\n\tObeso.");
    return 0;
}
