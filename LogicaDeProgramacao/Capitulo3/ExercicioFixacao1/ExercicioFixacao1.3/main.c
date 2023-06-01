#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");

    const float pi = 3.14159;
    int r;
    float v;

    printf("\n\tEntre com o raio da esfera\n\tpara calcular o volume da mesma: ");
        scanf("%d",&r);

    v = (4/3.0)*pi*pow(r,3);

    printf("\n\tO volume da esfera é = %.2f",v);
return 0;
}
