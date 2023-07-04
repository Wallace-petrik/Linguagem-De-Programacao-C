#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
        int n1,n2,contador=0;

    printf("Entre com dois valores para apresentar os números primos entre eles: ");
        scanf("%d%d",&n1,&n2);

    for(;n1<=n2;n1++){

        for(int i = 1 ; i <= n1 ; i++){
            if(n1%i==0){
                contador++;
            }
        }

        if(contador<=2){
            printf("\n%d",n1);
        }
        contador = 0;
    }

    return 0;
}
