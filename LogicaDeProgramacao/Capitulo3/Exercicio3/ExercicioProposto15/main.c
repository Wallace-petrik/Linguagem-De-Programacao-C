#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
    int dividendo,divisor,quociente;

    printf("\nDigite dois números DIVIDENDO e DIVISOR: ");
        scanf("%d%d",&dividendo,&divisor);

    while(dividendo>=divisor){

        dividendo-=divisor;
        quociente++;

    }
    printf("\nO quociente inteiro é = %d",quociente);
    return 0;
}
