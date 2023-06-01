#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
    int codigo;
    float valorProduto;

    printf("\n\t1 / À vista dinheiro 10%% desconto");
    printf("\n\t2 / À vista cartão 5%% desconto");
    printf("\n\t3 / Duas vezes sem juros");
    printf("\n\t4 / Em três vezes 10%% de juros");

    printf("\n\tDigite o valor do produto e a forma de pagamento: ");
        scanf("%f %d",&valorProduto,&codigo);

    switch (codigo){
        case 1 : printf("\n\tTotal = %.2f",valorProduto-(valorProduto*0.1));
        break;
        case 2 : printf("\n\tTotal = %.2f",valorProduto-(valorProduto*0.05));
        break;
        case 3 : printf("\n\t2X = %.2f\n\tTotal = %.2f",valorProduto/2,valorProduto);
        break;
        case 4 : printf("\n\t3X = %.2f\n\tTotal = %.2f",(valorProduto+(valorProduto*0.1))/3);
        break;
        default: printf("\n\tForma de pagamento invalida.");
    }
    return 0;
}
