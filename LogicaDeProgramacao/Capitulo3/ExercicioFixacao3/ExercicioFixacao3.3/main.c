#include <stdio.h>
#include <math.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"");

    int number,aux=0;

    printf("\n\tEntre com um n�mero interiro: ");
        scanf("%d",&number);

    for(int i = 1 ; i <= number ; i++){

        if(number%i==0){
        aux++;
        }
    }
    if(aux>2){
        printf("\n\tO n�mero n�o � primo.");
    }else printf("\n\tO n�mero � primo.");
    return 0;
}


