#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
    int ant,atual,prox;
    int i = 0;

    printf("Entre com os dois termos iniciais para série Fibonacci: ");
        scanf("%d%d",&ant,&atual);

    while(i < 20){

        printf(" %d",ant);

        prox=ant+atual;
        ant=atual;
        atual=prox;

        i++;
    }

    return 0;
}
