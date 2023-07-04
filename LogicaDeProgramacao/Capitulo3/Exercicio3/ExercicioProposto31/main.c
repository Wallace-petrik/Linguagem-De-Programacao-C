#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");

    char sexo,corOlhos,corCabelo;
    int idade=0,maiorIdade=0,totalM=0,totalF=0;
    int mNaFaixa=0,fNaFaixa=0,f,m;
    do{

        printf("\nEntre com o sexo(f,m) \nCor dos olhos(a/Azul, v/Verde, p/Preto)\nCor da cabelo(l/Loiro, c/castanhos, p/Preto\nIdade\n");
            scanf(" %c %c %c%d",&sexo,&corOlhos,&corCabelo,&idade);

        if((sexo!= 'f' && sexo != 'm') || (corOlhos != 'a' && corOlhos != 'v' && corOlhos != 'p') || (corCabelo != 'l' && corCabelo != 'c' && corCabelo != 'p')){
            printf("\nDados invalidos.");
            continue;
        }else if(idade==-1){
            break;
        }

        if(idade>maiorIdade){
            maiorIdade=idade;
        }

        if(sexo=='m'){
            totalM++;
            if(idade>=18 && idade <=35){
                mNaFaixa++;
            }
        }else if(sexo=='f'){
            totalF++;
            if(idade>=18 && idade <=35 && corOlhos == 'v' && corCabelo == 'l'){
                fNaFaixa++;
            }
        }

    }while(idade!=-1);

    if(totalF!=0 || totalM!=0){
        printf("\nA maior idade é = %d",maiorIdade);
    }
    if(totalF==0){
        printf("\nNão foi cadastrados mulheres");
    }else{
        f =((fNaFaixa*100)/totalF);
        printf("\nPocentagem de mulheres entre 18 e 35 anos com cabelo loiro e olhos azuis = %d",f);
    }

    if(totalM==0){
        printf("\nNão foi cadastrados homens");
    }else{
        m = ((mNaFaixa*100)/totalM);
        printf("\nPocentagem de homens entre 18 e 35 anos é = %d",m);
    }
    return 0;
}
