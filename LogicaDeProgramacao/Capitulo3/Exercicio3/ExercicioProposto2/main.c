#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
    float area,r;
    const float pi= 3.14159;

    printf("\n\tEntre com o raio:");
        scanf("%f",&r);
    area = pi*r*r;

    printf("\n\tA área do círculo é = %.2fm²",area);
    return 0;
}
