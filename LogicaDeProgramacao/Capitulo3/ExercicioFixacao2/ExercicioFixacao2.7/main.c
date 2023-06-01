#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
    int idade;
    printf("\n\tEntre com a idade do nadador: ");
        scanf("%d",&idade);

    if(idade<5){
        printf("\n\tIdade invalida.");
    }else{
        if(idade>4 && idade<8){
            printf("\n\tInfantil A.");
        }else if(idade>7 && idade<11){
            printf("\n\tInfantil B.");
        }else if(idade>10 && idade<14){
            printf("\n\tJunevil A.");
        }else if(idade>13 && idade<18){
            printf("\n\tJunevil B.");
        }else if(idade>=18){
            printf("\n\tAdulto.");
        }
    }
    return 0;
}
