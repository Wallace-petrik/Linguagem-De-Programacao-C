#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");

    float contador = 1;
    float h = 0;

    for(int i = 1;i <=50; i++){
        h+=(float)(contador/i);
        contador+=2;
    }
    printf("\nH = %.2f",h);
    return 0;
}
