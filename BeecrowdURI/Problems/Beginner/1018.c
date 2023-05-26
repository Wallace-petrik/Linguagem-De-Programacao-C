    #include<stdio.h>

    int main(void){

        char K[7][7] = {"100,00", "50,00", "20,00", "10,00", "5,00", "2,00", "1,00"};
        int valor;

        scanf("%d", &valor);
        printf("%d\n",valor);

        for(int i = 0; i < 7 ; i++){
            printf("%d nota(s) de R$ %s\n", valor/atoi(K[i]), K[i]);
            valor = valor%atoi(K[i]);
        }
        return 0;
    }


