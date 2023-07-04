#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
    int dia,mes;

    printf("\n\t Digite o dia e o mes para saber seu signo: ");
        scanf("%d%d",&dia,&mes);

    if((dia>=22 && dia<=31 && mes==12)||(dia<=20 && dia>=1 && mes==1)){
        printf("\n\t Capricornio\n");
    }else if((dia>=21 && dia<=31 && mes==1)||(dia<=19 && dia>=1 && mes==2)){
        printf("\n\t Aquario\n");
    }else if((dia>=20 && dia<=29 && mes==2)||(dia<=20 && dia>=1 && mes==3)){
        printf("\n\t Peixes\n");
    }else if((dia>=21 && dia<=31 && mes==3)||(dia<=20 && dia>=1 && mes==4)){
        printf("\n\t Aries\n");
    }else if((dia>=21 && dia<=30 && mes==4)||(dia<=20 && dia>=1 && mes==5)){
        printf("\n\t Touro\n");
    }else if((dia>=21 && dia<=31 && mes==5)||(dia<=20 && dia>=1 && mes==6)){
        printf("\n\t Gemeos\n");
    }else if((dia>=21 && dia<=30 && mes==6)||(dia<=21 && dia>=1 && mes==7)){
        printf("\n\t Cancer\n");
    }else if((dia>=22 && dia<=31 && mes==7)||(dia<=22 && dia>=1 && mes==8)){
        printf("\n\t Leão\n");
    }else if((dia>=23 && dia<=31 && mes==8)||(dia<=22 && dia>=1 && mes==9)){
        printf("\n\t Virgem\n");
    }else if((dia>=23 && dia<=30 && mes==9)||(dia<=22 && dia>=1 && mes==10)){
        printf("\n\t Libra\n");
    }else if((dia>=23 && dia<=31 && mes==10)||(dia<=21 && dia>=1 && mes==11)){
        printf("\n\t Libra\n");
    }else if((dia>=22 && dia<=30 && mes==11)||(dia<=21 && dia>=1 && mes==12)){
        printf("\n\t Libra\n");
    }else printf("\n\tErro: dia ou mes de nascimento invalidos !!!\n\n");

    return 0;
}

