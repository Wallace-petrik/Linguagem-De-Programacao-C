#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
    int menor=0,maior=0,n;

    for(int i = 0; i<20;i++){
        printf("\n\tEntre com o %d� n�mero inteiro: ",i+1);
            scanf("%d",&n);
        if(n>=maior){
            maior=n;
        }
        if(n<=menor){
            menor=n;
        }
    }
    printf("\n\tO maior n�mero � %d e o menor � %d",maior,menor);
    return 0;
}
