#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
    int menor=0,maior=0,n;

    for(int i = 0; i<20;i++){
        printf("\n\tEntre com o %dº número inteiro: ",i+1);
            scanf("%d",&n);
        if(n>=maior){
            maior=n;
        }
        if(n<=menor){
            menor=n;
        }
    }
    printf("\n\tO maior número é %d e o menor é %d",maior,menor);
    return 0;
}
