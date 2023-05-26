#include<stdio.h>
#include<math.h>
#define PI 3.14159

int main(void){
	float r;
	
	scanf("%f",&r);
	
	printf("VOLUME = %.3f\n",(4/3.0)*PI*pow(r,3));

return 0;
}
