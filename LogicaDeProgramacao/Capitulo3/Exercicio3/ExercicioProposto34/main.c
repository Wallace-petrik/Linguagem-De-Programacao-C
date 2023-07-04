#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");

    int idade,cont=0,otimo=0,bom=0,regular=0,ruim=0,pessimo=0;
    int somaIdadeRuim = 0,contRuim=0,mOtimo=0,mRuim=0;
    char resp;

    do{

        printf("\n\tEntre com sua idade: ");
            scanf("%d",&idade);

        if(idade<0){
            printf("\n\tDados invalidos");
            continue;
        }

        printf("\t===================\n");
        printf("\tNota\tSignificado\n");
        printf("\t===================\n");
        printf("\tA\tÓtimo\n");
        printf("\tB\tBom\n");
        printf("\tC\tRegular\n");
        printf("\tD\tRuim\n");
        printf("\tE\tPéssimo\n");
        printf("\t===================\n");
        scanf(" %c",&resp);

            switch(resp){
            case 'a' :
            case 'A' :
                otimo++;
                if(idade>mOtimo){
                    mOtimo=idade;
                }
            break;

            case 'b' :
            case 'B' :
                bom++;
            break;

            case 'c' :
            case 'C' :
                regular++;
            break;

            case 'd' :
            case 'D' :
                ruim++;
                somaIdadeRuim+=idade;
                contRuim++;
                if(idade>mRuim){
                    mRuim=idade;
                }
            break;

            case 'e' :
            case 'E' :
                pessimo++;
            break;
            default :
                printf("\n\tDados invalidos\n");
                continue;
        }

        cont++;
    }while(cont<4);
    if(contRuim==0){
        contRuim=1;
    }
    printf("\nRespostas com avaliação ÓTIMA = %d",otimo);
    printf("\nDiferença porcentural entre BOM e REGULAR é %d",abs(((bom*100)/cont)-((regular*100)/cont)));
    printf("\nMédia de respostas RUINS é = %d",somaIdadeRuim/contRuim);
    printf("\nPorcentagem de respostas PESSIMAS é %d",(pessimo*100)/cont);
    printf("\nDiferença das maiores idades de BOM e RUIM é %d.",abs(mOtimo-mRuim));
    return 0;
}
