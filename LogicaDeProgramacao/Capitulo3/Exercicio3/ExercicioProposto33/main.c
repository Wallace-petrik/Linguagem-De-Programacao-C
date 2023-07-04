#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");

    int nCrianca = 0,diasNaIncubadora,contador = 0;
    int contM = 0, contF = 0, somatoria = 0,maiorNumDias = 0;
    char sexo;

    do{
    printf("\nEntre com o número de crianças nascidas nesse peíodo:");
        scanf("%d",&nCrianca);

        if(nCrianca<=0){
            printf("\nDados invalidos.");
        }
    }while(nCrianca<=0);

    do{
        printf("\nEntre com os dias que a criança foi mantida na incubadora: ");
            scanf("%d",&diasNaIncubadora);
        printf("\nEntre com o sexo (m/M ou f/F): ");
            scanf(" %c",&sexo);

            if(sexo != 'x' && sexo != 'X' && sexo != 'm' && sexo != 'M' && sexo != 'f' && sexo != 'F'  || diasNaIncubadora <= 0){
                printf("\nDados invalidos");
                continue;
            }else{
                if(sexo != 'x' && sexo != 'X'){

                    contador++;
                    somatoria+=diasNaIncubadora;

                    if(diasNaIncubadora>maiorNumDias){
                        maiorNumDias=diasNaIncubadora;
                    }

                    if(sexo == 'm' || sexo == 'M'){
                        contM++;
                    }else{
                        contF++;
                    }
                }
            }

    }while(sexo!= 'x' && sexo != 'X' && contador <= nCrianca );

    printf("\nPorcentagem de recém-nascidos prematuros %d\%.",(contador*100)/nCrianca);
    printf("\nPorcentagem de recém-nascidos prematuros do SEXO M = %d\%",(contM*100)/contador);
    printf("\nPorcentagem de recém-nascidos prematuros do SEXO F = %d\%",(contF*100)/contador);
    printf("\nMédia de dias dos prematuros na incubadora é %d",somatoria/contador);
    printf("\nMaior número de dias na incubadora %d",maiorNumDias);

    return 0;
}
