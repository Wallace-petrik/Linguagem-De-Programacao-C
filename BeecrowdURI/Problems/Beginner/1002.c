#include <stdio.h>
#include <math.h>
#define PI 3.14159

int main (void){
	double a,r;
	
	scanf("%lf",&r);
	
	a = PI*pow(r,2);
		
	printf("A=%.4lf\n",a);
	return 0;
}
