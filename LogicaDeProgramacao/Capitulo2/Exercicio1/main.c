#include <stdio.h>
#include <math.h>

int main(){
    int x,y;
    float z;

        scanf("%d",&x); // Atribuir dados a variável X.
    printf("\n\t%d elevado ao cubo = %d\n",x,(int)pow(x,3)); //Exibir conteúdo das variáveis X e da função POW.

    scanf("%d",&y);// Atribuir dados a variável Y.
    printf("\n\t %d",x+y);//Exibir conteúdo das soma variáveis X e Y.

    z = (float)x/y;// Atribuir adivisão das variável X/Y.
    printf("\n\t %.1f",z);//Exibir conteúdo da variável Z.
    z = z+1;// Atribuir 1 mais valor de Z a variável Z.
    x = (y+x)%2;// Atribuir o resto da soma de Y e X por 2 na variável Z.

    printf("\n\t %d",x);//Exibir conteúdo da variável X.
    return 0;
}
