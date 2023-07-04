#include <stdio.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL,"");
    unsigned long long int total=0;
    unsigned long long int atual=1;

    for(int i = 1 ; i <= 64 ; i++){
        atual = atual+atual;
        total = total+atual;
    }

    printf("\n\tTotal=%hllu\n",total);
	return 0 ;
}
