#include <stdio.h>

int main(void){
    float n1,n2,n3,n4;
    float media,notaExame;

    scanf("%f %f %f %f",&n1,&n2,&n3,&n4);
    media = ((n1*2) + (n2*3) + (n3*4) + n4)/10;

    if(media>=7){
        printf("Media: %.1f\n",media);
        printf("Aluno aprovado.\n");
    }else{
        if(media<5){
            printf("Media: %.1f\n",media);
            printf("Aluno reprovado.\n");
        }else{
            scanf("%f",&notaExame);
            printf("Media: %.1f\n",media);
            media=((media+notaExame)/2);
            printf("Aluno em exame.\n");
            printf("Nota do exame: %.1f\n",notaExame);
            media>=5 ? printf("Aluno aprovado.\n") : printf("Aluno reprovado.\n");
            printf("Media final: %.1f\n",media);
        }
    }
    return 0;
}
