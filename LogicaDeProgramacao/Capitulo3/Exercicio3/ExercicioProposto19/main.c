#include <stdio.h>
#include <locale.h>

int main(void){
    float c;
    setlocale(LC_ALL,"");

	printf("\n\tFahrenheit para Centígrados");
	for(int i = 50 ; i <=150 ; i++){
        c =(5/9.0)*(i-32);
		printf("\nF: %d = C: %.2f",i,c);

	}
	return 0 ;
}
