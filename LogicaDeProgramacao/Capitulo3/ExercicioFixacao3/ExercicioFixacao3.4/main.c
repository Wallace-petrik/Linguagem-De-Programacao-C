#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
    float h=0;
    int n;

    printf("\n\tEntre com um n�mero inteiro qualquer: ");
        scanf("%d",&n);

    for(int i=1; i<=n; i++){
        h=h+(1.0/i);
    }
    printf("\n\tResultado das�rie = %lf",h);
    return 0;
}
