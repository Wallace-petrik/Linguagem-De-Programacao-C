#include <stdio.h>
#include <math.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"");

    int number,aux=0;

    printf("\n\tEntre com um número interiro: ");
        scanf("%d",&number);

    for(int i = 1 ; i <= number ; i++){

        if(number%i==0){
        aux++;
        }
    }
    if(aux>2){
        printf("\n\tO número não é primo.");
    }else printf("\n\tO número é primo.");
    return 0;
}


