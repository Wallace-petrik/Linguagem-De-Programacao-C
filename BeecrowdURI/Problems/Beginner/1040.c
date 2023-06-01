#include <stdio.h>

int main(void){
    float n1,n2,n3,n4;
    float media;

    scanf("%f %f %f %f",&n1,&n2,&n3,&n4);
    media = (n1*2 + n2*3 + n3*4 + n4)/10;
    printf("Media: %.1f\n",media);

    if(media>=7){
        printf("Aluno aprovado.\n");
    }else{
        if(media<5){
            printf("Aluno reprovado.\n");
        }else{
            printf("Aluno em exame.\n");
        }
    }
    return 0;
}
