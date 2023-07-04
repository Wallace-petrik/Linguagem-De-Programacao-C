#include <stdio.h>

void main() {
  int maior = 0, menor = 9999, valor;

  printf("Informe um valor por linha entre 0 e 9999, -1 para encerrar:\n");

  while (1) {
    scanf("%d", &valor);

    if (valor == -1){
        break;
    }

    if(valor<-1){
        continue;
    }

    if (valor > maior){
        maior = valor;
    }else if (valor < menor){
      menor = valor;
    }
  }
  printf("\n\n");
  printf("O maior valor = %d\n", maior);
  printf("O menor valor = %d", menor);
}
