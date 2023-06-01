#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");

    int a,b,c;
    int delta;
    float x1,x2;

    printf("\n\tEntre com o valores de A, B, C para calcular as raiz\n\tda equação do Segundo Grau: ");
        scanf("%d %d %d",&a,&b,&c);

    delta = pow(b,2)-4*a*c;

    if(delta<0){
        printf("\n\tNão tem raízes reais");
    }else if (delta==0){
        x1 = (-b)/(2*a);
        printf("\n\tUm raiz real");
        printf("\n\tX = %.2f",x1);
    }else{
        x1 = ((-b)+sqrt(delta))/(2*a);
        x2 = ((-b)-sqrt(delta))/(2*a);
        printf("\n\tX' = %.2f",x1);
        printf("\n\tX\" = %.2f",x2);

    }
    return 0;
}
