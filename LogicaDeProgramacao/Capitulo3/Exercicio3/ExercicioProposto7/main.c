#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
    int mes;

    printf("\n\tEntre com o número do mês: ");
        scanf("%d",&mes);

    switch(mes){
        case 1 : printf("\n\t Janeiro\n");
            break;
        case 2 : printf("\n\t Feverreiro\n");
            break;
        case 3 : printf("\n\t Março\n");
            break;
        case 4 : printf("\n\t Abril\n");
            break;
        case 5 : printf("\n\t Maio\n");
            break;
        case 6 : printf("\n\t Junho\n");
            break;
        case 7 : printf("\n\t Julho\n");
            break;
        case 8 : printf("\n\t Agosto\n");
            break;
        case 9 : printf("\n\t Setembro\n");
            break;
        case 10 : printf("\n\t Outubro\n");
            break;
        case 11 : printf("\n\t Novembro\n");
            break;
        case 12 : printf("\n\t Dezembro\n");
            break;
        default :
            printf("\n\t Mês inválido\n");
    }
    return 0;
}
