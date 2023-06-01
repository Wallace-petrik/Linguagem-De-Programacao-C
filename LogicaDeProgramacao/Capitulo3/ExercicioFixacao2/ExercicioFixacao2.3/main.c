#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
    int a,b,c;
    int delta;

    printf("\nCom os valores da equação do 2ºgrau, na forma Ax²+Bx+C:");
        scanf("%d %d %d",&a,&b,&c);

    delta = pow(b,2)-(4*a*c);

    if(delta<0){
        printf("\n\tA equação não possui resultados reais");
    }else{
        if(delta==0){
            printf("\n\tA equação possui apenas um resultado real.\n\t X = %.2f.",(float)-b/(2*a));
        }else{
            printf("\n\tA equação possui dois resultado reais.\n\t X' = %.2f\n\t X\" = %.2f.",(-b-sqrt(delta))/(2*a),(-b+sqrt(delta))/(2*a));
        }
    }

    return 0;
}
