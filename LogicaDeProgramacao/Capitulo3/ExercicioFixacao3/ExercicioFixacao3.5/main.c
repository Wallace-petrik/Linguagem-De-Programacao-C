#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
    int number,fat=1;

    printf("\n\tEntre com um número inteiro qualquer \n\tpara calcular o fatorial: ");
        scanf("%d",&number);

        if(number==0){
            printf("\n\tFatorial de N = 1");
        }else{
            for(int i=1; i<=number ; i++){

                fat = fat * i;

            }
            printf("\n\tFatorial de N = %d\n\n",fat);
        }

    return 0;
}
