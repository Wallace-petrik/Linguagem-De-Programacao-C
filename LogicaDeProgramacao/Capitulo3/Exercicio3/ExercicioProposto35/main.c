#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"");

    int resp,elevadorA=0,elevadorB=0,elevadorC=0;
    int matA=0,vespA=0,notA=0;
    int matB=0,vespB=0,notB=0;
    int matC=0,vespC=0,notC=0;
    char elevador,periodo;

    do{

        do{
            printf("\nQual elevador utiliza com mais frequencia a,b ou c? ");
                scanf(" %c",&elevador);
            printf("\nO periodo que utiliza o elevador: ");
            printf("\nm = matutino\nv = vespertino\nn = noturno\n");
                scanf(" %c",&periodo);

            if((elevador != 'a' && elevador != 'b' && elevador != 'c')||(periodo != 'm' && periodo != 'v' && periodo != 'n')){
                printf("\nDados invalidos.");
            }

        }while((elevador != 'a' && elevador != 'b' && elevador != 'c')||(periodo != 'm' && periodo != 'v' && periodo != 'n'));

            switch(elevador){

                case 'a':
                    elevadorA++;

                    switch (periodo){
                        case 'm':
                            matA++;
                        break;
                        case 'v':
                            vespA++;
                        break;
                        case 'n':
                            notA++;
                        break;

                    }
                break;
                case 'b':
                    elevadorB++;

                    switch (periodo){
                        case 'm':
                            matB++;
                        break;
                        case 'v':
                            vespB++;
                        break;
                        case 'n':
                            notB++;
                        break;

                    }
                break;
                case 'c':
                    elevadorC++;

                    switch (periodo){
                        case 'm':
                            matC++;
                        break;
                        case 'v':
                            vespC++;
                        break;
                        case 'n':
                            notC++;
                        break;
                    }

                break;
                default :
                    printf("\nDados invalidos.");
                continue;

            }

        do{
        printf("\nDeseja continuar (1/Sim e 2/Não): ");
            scanf("%d",&resp);

            if(resp<1 || resp>2){
                printf("\nDados invalidos.");
            }
        }while(resp<1 || resp>2);

    }while(resp!=2);



    return 0;
}
