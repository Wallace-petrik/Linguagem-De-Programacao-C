#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
    float h=0;
    int n;

    printf("\n\tEntre com um número inteiro qualquer: ");
        scanf("%d",&n);

    for(int i=1; i<=n; i++){
        h=h+(1.0/i);
    }
    printf("\n\tResultado dasérie = %lf",h);
    return 0;
}
