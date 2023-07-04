#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"");
    int n1,n2;
    char opcao;

    printf("\n\t + para adção.");
    printf("\n\t - para subtração.");
    printf("\n\t * para multiplicação.");
    printf("\n\t / para divisão.");

    printf("\n\tEscolha uma operação: ");
        scanf("%c",&opcao);
    printf("\n\tDigite dois valores: ");
        scanf("%d%d",&n1,&n2);

    switch(opcao){
        case '+' : printf("\n\t%d + %d = %d",n1,n2,n1+n2);
        break;
        case '-' : printf("\n\t%d - %d = %d",n1,n2,n1-n2);
        break;
        case '*' : printf("\n\t%d * %d = %d",n1,n2,n1*n2);
        break;
        case '/' : printf("\n\t%d / %d = %.2f",n1,n2,(float)n1/n2);
        break;
        default : printf("\n\tOperação aritmética invalida.");
        break;
    }
    return 0;
}
