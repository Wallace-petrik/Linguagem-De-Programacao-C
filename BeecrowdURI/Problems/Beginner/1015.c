#include<stdio.h>
#include <math.h>

int main(){
	double xUm, xDois, yUm,yDois,distancia;
	
	scanf("%lf %lf",&xUm,&yUm);
	scanf("%lf %lf",&xDois,&yDois);
	
	distancia =  sqrt(pow(xDois-xUm,2)+pow(yDois-yUm,2));
	
	printf("%.4lf\n",distancia);
	
	return 0 ;
}
