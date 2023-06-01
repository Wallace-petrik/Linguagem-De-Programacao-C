#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");

    float altura;
    char genero;

    printf("\n\tEntre com a altura e o gênero respectivamente: ");
        scanf("%f %c",&altura,&genero);

    if(genero=='m'||genero=='M'){
        printf("\n\tPeso ideal = %.2f.",(72.37*altura)-58);
    }else{
        if(genero=='f'||genero=='F'){
            printf("\n\tPeso ideal = %.2f.",(62.1*altura)-44.7);
        }else printf("\n\tGênero invalido");
    }

    return 0;
}
