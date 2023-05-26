#include<stdio.h>

int main(){
	double notaUm,notaDois,notaTres;
	
	scanf("%lf %lf %lf",&notaUm,&notaDois,&notaTres);
	
	printf("MEDIA = %.1lf\n",((notaUm*2)+(notaDois*3)+(notaTres*5))/10);
	
	return 0;
}
