#include <stdio.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL,"");
    int votos=1,c1=0,c2=0,c3=0,c4=0;
    int vn=0,vb=0,vt=0;

    while(votos!=0){
     printf("Cantidatos\n1/p Mito\n2/p Ladrão\n3/p Dino\n4/p Glorias\n5/p Votos nulos\n6/p Votos brancos\n");
        scanf("%d",&votos);

        if(votos<0 || votos>6){
            printf("\nVotos invalidos.\n");
            system("pause");
            system("cls");
            continue;
        }else vt++;

        switch(votos){
            case 0 : printf("\nVotação finalizada.");
            break;
            case 1 : c1++;
            break;
            case 2 : c2++;
            break;
            case 3 : c3++;
            break;
            case 4 : c4++;
            break;
            case 5 : vn++;
            break;
            case 6 : vb++;
            break;
        }

    }
    system("cls");
    printf("\nVOTOS TOTAIS\n Mito = %d Porcentual = %d\n Ladrão = %d Porcentual = %d\nDino = %d Porcentual = %d\nGlorias = %d Porcentual = %d\n",c1,(c1*100)/(vt-1),c2,(c2*100)/(vt-1),c3,(c3*100)/(vt-1),c4,(c4*100)/(vt-1));
    printf("\nVotos em brancos = %d Porcentual = %d\n",vb,(vb*100)/(vt-1));
    printf("\nVotos nulos = %d Porcentual = %d\n",vn,(vn*100)/(vt-1));

	return 0 ;
}
