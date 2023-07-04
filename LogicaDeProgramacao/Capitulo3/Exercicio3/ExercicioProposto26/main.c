#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");

    float s = 0;

    for(int i = 1; i <=10; i++){

        if(i%2==0){
            s -= ((float)i/(i*i));
        }else s += ((float)i/(i*i));

    }

    printf("\nS = %.2f",s);
    return 0;
}
