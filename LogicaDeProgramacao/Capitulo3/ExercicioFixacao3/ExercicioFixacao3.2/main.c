#include <stdio.h>
#include <math.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"");

    int number,aux=0;
    float resp;

    printf("\n\tEntre com um n�mero interiro: ");
        scanf("%d",&number);

    resp = sqrt(number);

    while(aux<=resp){
        aux++;
    }

    if(aux-0.5<=resp){
        aux=aux+0.5;
    }else aux=aux-0.5;


    printf("\n\tO n�mero inteiro mais proximo da raiz do n�mero fornecido � = %d.\n",(int)aux);
    return 0;
}
