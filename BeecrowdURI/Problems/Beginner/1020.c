#include<stdio.h>

int main(){
	int tempo,a=0,m,d;
	scanf("%d",&tempo);
	
	if(tempo>=365){
		a = tempo/365;
		tempo = tempo % 365;
	}
	
	m = tempo/30;
	d = tempo%30;
	
	printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",a,m,d);
	return 0;
}
