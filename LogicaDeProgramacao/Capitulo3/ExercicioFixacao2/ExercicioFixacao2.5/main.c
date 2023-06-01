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

    printf("\tSua idade é = %d\n", p->tm_year + 1900 - anoNasci);

    if(p->tm_year + 1900 - anoNasci >=16){
        printf("\n\tVocê ja tem idade para votar.");
    }else printf("\n\tVocê não tem idade para votar.");

    if(p->tm_year + 1900 - anoNasci >=18){
        printf("\n\tVocê ja tem idade para tirar a habilitação.");
    }else printf("\n\tVocê não tem idade para tirar a habilitação.");

    return 0;
}
