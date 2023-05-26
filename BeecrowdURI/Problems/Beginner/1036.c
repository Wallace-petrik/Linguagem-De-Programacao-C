#include <stdio.h>
#include <math.h>

int main(void){
    double a,b,c;
    double delta;
    float x1,x2;

    scanf("%lf %lf %lf",&a,&b,&c);

    delta = (b*b)-4*a*c;

    if(delta<=0 || a==0){
      printf("Impossivel calcular\n");
    }else{
        printf("R1 = %.5lf\n",(-b+sqrt(delta))/(2*a));
        printf("R2 = %.5lf\n",(-b-sqrt(delta))/(2*a));
    }
    return 0;
}
