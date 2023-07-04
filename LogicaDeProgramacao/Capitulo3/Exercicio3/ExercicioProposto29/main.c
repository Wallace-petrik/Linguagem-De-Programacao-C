#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
    int cod,func,port,aux=0;
    int g=0,m=0,p=0,mi=0;
    int codG=0,codM=0,codP=0,codMI=0;
    do{
        do{
        printf("\nEntre com o código: ");
            scanf("%d",&cod);
            if(cod==0){
                break;
            }
        printf("\nEntre com qtd funcionários: ");
            scanf("%d",&func);
        printf("\nEntre porte da empresa 1/G 2/M 3/P 4/MI: ");
            scanf("%d",&port);

            if(cod < 0 || func < 1 || (port < 1 && port > 4)){
                printf("\nDados invalidos!!!");
                getchar();
                aux=1;
            }else aux=0;

        }while(aux==1);

        switch(port){
            case 1:
                if(func>g){
                    g=func;
                    codG=cod;
                }
            break;
            case 2:
                if(func>m){
                    m=func;
                    codM=cod;
                }
            break;
            case 3:
                if(func>p){
                    p=func;
                    codP=cod;
                }
            break;
            case 4:
                if(func>mi){
                    mi=func;
                    codMI=cod;
                }
            break;

        }
    }while(cod!=0);
    printf("\nGrande = %d\nMédia = %d\nPequena = %d\nMicro = %d",codG,codM,codP,codMI);
    return 0;
}
