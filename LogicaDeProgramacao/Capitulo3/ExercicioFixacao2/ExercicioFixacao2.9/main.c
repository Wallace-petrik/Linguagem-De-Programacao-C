#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"");
    int n1,n2;
    char opcao;

    printf("\n\t + para ad��o.");
    printf("\n\t - para subtra��o.");
    printf("\n\t * para multiplica��o.");
    printf("\n\t / para divis�o.");

    printf("\n\tEscolha uma opera��o: ");
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
        default : printf("\n\tOpera��o aritm�tica invalida.");
        break;
    }
    return 0;
}
