#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
    int base,expoente,potencia=1;
    int i = 0;
    printf("\nEntre com a base e o expoente para calcular a potência: ");
        scanf("%d%d",&base,&expoente);

    while(i < expoente){
        potencia*=base;
        i++;
    }
    printf("\n%d^%d=%d",base,expoente,potencia);
    return 0;
}
