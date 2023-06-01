#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
    int a,b,c;
    int delta;

    printf("\nCom os valores da equa��o do 2�grau, na forma Ax�+Bx+C:");
        scanf("%d %d %d",&a,&b,&c);

    delta = pow(b,2)-(4*a*c);

    if(delta<0){
        printf("\n\tA equa��o n�o possui resultados reais");
    }else{
        if(delta==0){
            printf("\n\tA equa��o possui apenas um resultado real.\n\t X = %.2f.",(float)-b/(2*a));
        }else{
            printf("\n\tA equa��o possui dois resultado reais.\n\t X' = %.2f\n\t X\" = %.2f.",(-b-sqrt(delta))/(2*a),(-b+sqrt(delta))/(2*a));
        }
    }

    return 0;
}
