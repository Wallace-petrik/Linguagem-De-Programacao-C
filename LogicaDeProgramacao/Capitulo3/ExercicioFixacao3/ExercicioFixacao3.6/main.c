#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
    int ant,atual=1,prox;

    for(int i = 0; i<20;i++){
        prox = ant+atual;
        ant = atual;
        atual = prox;
    }
    printf("\n\tFIBONACCI DO VIGÉSIMO TERMO = %d",ant);
    return 0;
}
