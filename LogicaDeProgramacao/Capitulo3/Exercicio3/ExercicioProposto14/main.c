#include <stdio.h>
#include <stdlib.h>
//Algoritmo de Euclides
int main(){
    int n1,n2,a,b,resto;

    printf("\nDigite dois númeors para calcular o MDC entre eles: ");
            scanf("%d%d",&n1,&n2);

    a = n1;
    b = n2;

    do{
        resto=a%b;
        a=b;
        b=resto;
    }while(resto!=0);

    printf("\nO MDC = %d",a);
    return 0;
}
