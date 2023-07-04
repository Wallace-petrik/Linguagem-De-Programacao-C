#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
    float n1,n2,n3,n4,n5,media;

    printf("\nEntre com a nota n1 :");
        scanf("%f",&n1);
    printf("\nEntre com a nota n2 :");
        scanf("%f",&n2);
    printf("\nEntre com a nota n3 :");
        scanf("%f",&n3);
    printf("\nEntre com a nota n4 :");
        scanf("%f",&n4);
    printf("\nEntre com a nota n5 :");
        scanf("%f",&n5);

    media= (n1+(n2*2)+(n3*3)+(n4*4)+(n5*5))/15;

    printf("\n\tA média é = %.2f",media);
    return 0;
}
