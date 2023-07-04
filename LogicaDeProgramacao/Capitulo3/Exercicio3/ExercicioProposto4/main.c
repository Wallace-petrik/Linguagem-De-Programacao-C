#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
    float consumo,autonomia;
    int capacidadeTanque,litrosAbastecidos,kmPercorrido;

    printf("\n\tEntre com a capacidade do tanque: ");
        scanf("%d",&capacidadeTanque);
    printf("\n\tEntre com a listros abastecidos: ");
        scanf("%d",&litrosAbastecidos);
    printf("\n\tEntre com a Km percorrido: ");
        scanf("%d",&kmPercorrido);

    consumo = kmPercorrido/litrosAbastecidos;

    autonomia = consumo*capacidadeTanque;

    printf("\n\tO consumo do carro foi %.2fKm/l\n\tO veiculo teria uma autonomia de %.2fKm",consumo,autonomia-kmPercorrido);
    return 0;
}
