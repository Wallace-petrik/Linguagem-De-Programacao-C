#include <stdio.h>
#include <locale.h>
#include <time.h>

int main(){
    setlocale(LC_ALL,"");
    int anoNasci;

    struct tm *p;
    time_t seconds;
    time(&seconds);
    p = localtime(&seconds);

    printf("\n\tEntre com o ano de nascimento: ");
        scanf("%d",&anoNasci);

    printf("\tSua idade � = %d\n", p->tm_year + 1900 - anoNasci);

    if(p->tm_year + 1900 - anoNasci >=16){
        printf("\n\tVoc� ja tem idade para votar.");
    }else printf("\n\tVoc� n�o tem idade para votar.");

    if(p->tm_year + 1900 - anoNasci >=18){
        printf("\n\tVoc� ja tem idade para tirar a habilita��o.");
    }else printf("\n\tVoc� n�o tem idade para tirar a habilita��o.");

    return 0;
}
