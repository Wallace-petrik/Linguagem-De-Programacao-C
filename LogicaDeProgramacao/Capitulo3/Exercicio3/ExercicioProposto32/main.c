#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");

    float anacleto = 1.5,filisberto = 1.1;
    int anos;

    do{
        anacleto+=0.02;
        filisberto+=0.03;
        anos++;
    }while(filisberto<=anacleto);

    printf("\nSerão necessarios %d anos para que Filisberto seja maior que Anacleto.",anos);
    return 0;
}
