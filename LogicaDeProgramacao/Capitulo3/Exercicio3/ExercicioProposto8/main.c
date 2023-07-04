#include <stdio.h>
#include <locale.h>
#include <time.h>

int main(){
    setlocale(LC_ALL,"");
    int dia,mes,ano;
    char bissexto;

    struct tm *p;
    time_t seconds;

    time(&seconds);
    p = localtime(&seconds);

    printf("\n\tEntre com o dia,mês e ano: ");
        scanf("%d%d%d",&dia,&mes,&ano);

    if(ano>=1900 && ano<=p->tm_year + 2000){
        if(mes>=1 && mes<=12){

            switch(mes){
                case 1 :
                case 3 :
                case 5 :
                case 7 :
                case 8 :
                case 10:
                case 12:
                    if(dia >0 && dia<=31){
                        printf("\n\tData valida.");
                    }else{
                        printf("\n\tDia invalido.");
                    }
                    break;
                case 2 :
                    if(dia >0 && dia<=28){
                        printf("\n\tData valida.");
                    }else if(dia==29 && ano%4==0){
                        printf("\n\tData valida.");
                    }else{
                        printf("\n\tDia invalido.");
                        }
                    break;
                case 4 :
                case 6 :
                case 9 :
                case 11 :
                    if(dia >0 && dia<=30){
                        printf("\n\tData valida.");
                    }else{
                        printf("\n\tDia invalido.");
                    }
                    break;
            }
        }else{
            printf("\n\tMês invalido.");
        }
    }else{
        printf("\n\tAno invalido.");
    }

    return 0;
}

