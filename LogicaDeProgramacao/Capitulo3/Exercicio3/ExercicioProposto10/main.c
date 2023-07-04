#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"");

    int idade;

    printf("\nDigite sua idade: ");
        scanf("%d",&idade);

    if(idade<16){
        printf("\nNão vota\n");
    }else if(idade>=18 && idade<=65){
        printf("\nVoto obrigatorio\n");
    }else if(idade>=16 && idade<18){
        printf("\nVoto opcional");
    }else printf("\nVoto facultativo");

    return 0;
}
