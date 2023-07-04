#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");

    float soma = 0;

    for(int i = 500; i > 0; i-=50){
        if(i % 100 == 0){
            soma += 2.0/i;
        }else soma -= 5.0/i;
    }

    printf("\nSoma = %.2f",soma);
    return 0;
}
