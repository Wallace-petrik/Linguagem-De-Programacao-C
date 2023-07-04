#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");

    float h;
    int x=0;

    for(int i = 1; i <= 20; i+=2){
       x++;

        if(x%2==1){
            h+= 1/(pow(i,3));
        }else h-= 1/(pow(i,3));

        printf("\nH = %f",h);
    }
    return 0;
}
