#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"");
    char pa1[30],pa2[30],pa3[30];
    float o1,o2,o3,p1,p2,p3,b1,b2,b3;
    float m1,m2,m3;

    printf("\nEntre com o nome do 1º pais e a quantidade de medalhas\ndeouro, prata, e bronze: ");
        scanf(" %s%f%f%f",&pa1,&o1,&p1,&b1);
    printf("\nEntre com o nome do 2º pais e a quantidade de medalhas\ndeouro, prata, e bronze: ");
        scanf(" %s%f%f%f",&pa2,&o2,&p2,&b2);
    printf("\nEntre com o nome do 3º pais e a quantidade de medalhas\ndeouro, prata, e bronze: ");
        scanf(" %s%f%f%f",&pa3,&o3,&p3,&b3);

    m1 = (((o1*3)+(p1*2)+b1)/6.0);
    m2 = ((o2*3)+(p2*2)+b2)/6.0;
    m3 = ((o3*3)+(p3*2)+b3)/6.0;

    if(m1==m2 && m2==m3){

        printf("\n1º Empate entre todos");

    }else if(m1>m2 && m1>m3){
            if(m2>m3){
                printf("\n1º %s\n2º %s\n3º %s.\n",pa1,pa2,pa3);
            }else printf("\n1º %s\n2º %s\n3º %s.\n",pa1,pa3,pa2);
    }else if(m2>m1 && m2>m3){
            if(m1>m3){
                printf("\n1º %s\n2º %s\n3º %s.\n",pa2,pa1,pa3);
            }else printf("\n1º %s\n2º %s\n3º %s.\n",pa2,pa3,pa1);
    }else if(m3>m1 && m3>m2){
            if(m1>m2){
                    printf("\n1º %s\n2º %s\n3º %s.\n",pa3,pa1,pa2);
            }else printf("\n1º %s\n2º %s\n3º %s.\n",pa3,pa2,pa1);
    }
    return 0;
}
