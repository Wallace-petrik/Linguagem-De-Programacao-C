#include<stdio.h>

int main(){
	int tempo,h=0,m,s;
	scanf("%d",&tempo);
	
	if(tempo>=3600){
		h = tempo/3600;
		tempo = tempo % 3600;
	}
	m = tempo/60;
	s = tempo%60;
	
	printf("%d:%d:%d\n",h,m,s);
	return 0;
}
