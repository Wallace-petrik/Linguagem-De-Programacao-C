#include<stdio.h>

int main(){
	double notaUm,notaDois;
	
	scanf("%lf %lf",&notaUm,&notaDois);
	
	printf("MEDIA = %.5lf\n",((notaUm*3.5)+(notaDois*7.5))/11);
	
	return 0;
}
