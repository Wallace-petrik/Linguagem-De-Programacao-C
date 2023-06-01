#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
    int a,b,c;
    int aux;
    printf("\n\tDigite três números diferente: ");
        scanf("%d %d %d",&a,&b,&c);

    if(a==b || b==c){
        printf("\n\tNúmeros iguais.");
    }else{
        if(a>b && a>c){
            if(b>c){
                printf("%d %d %d",c,b,a);
            }else printf("%d %d %d",b,c,a);
        }
        if(b>a && b>c){
            if(a>c){
                printf("\n\t %d %d %d",c,a,b);
            }else printf("\n\t %d %d %d",a,c,b);
        }
        if(c>a && c>b){
            if(a>b){
                printf("\n\t %d %d %d",b,a,c);
            }else printf("\n\t %d %d %d",a,b,c);
        }
    }
    return 0;
}
