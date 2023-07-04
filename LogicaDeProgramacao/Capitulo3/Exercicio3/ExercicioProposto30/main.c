#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
    int cpf,dependentes,nsm;
    float renda,imp,sm;

    printf("\nInforme quantos salários minimos recebe: ");
            scanf("%f",&sm);

    for(int i = 1 ; i <=10 ; i++ ){

        printf("\nEntre com CPF: ");
            scanf("%d",&cpf);
        printf("\nEntre número de dependentes: ");
            scanf("%d",&dependentes);
        printf("\nEntre com a renda mensal: ");
            scanf("%f",&renda);


        nsm = renda/sm;

        if(nsm<2){
            imp=0;
        }else if(nsm<3){
            imp=renda*(5.0/100);
        }else if(nsm<5){
            imp=renda*(10.0/100);
        }else if(nsm<7){
            imp=renda*(15.0/100);
        }else imp=renda*(20.0/100);

        imp = imp - (dependentes*(sm*(5.0/100)));

        if(imp>0){
            printf("\nImposto a ser pago: %.2f\n",imp);
        }else printf("\nImposto a ser restituído: %2f\n",-imp);
    }
    return 0;
}
