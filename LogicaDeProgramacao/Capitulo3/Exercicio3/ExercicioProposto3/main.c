#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
    int number,unidade,dezena,centena,resto;

    printf("\n\tDigite um número qualquer: ");
        scanf("%d",&number);

        centena = number/100;
        resto = number%100;
        dezena = resto/10;
        resto = resto%10;
        unidade = resto;

    printf("\nO número invertdo é = %d%d%d",unidade,dezena,centena);
    return 0;
}
