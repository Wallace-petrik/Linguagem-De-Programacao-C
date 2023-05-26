#include<stdio.h>

int main(void){
	float valorDoProduto,valorDoProdutoDois;
	int codigoDoProduto,codigoDoProdutoDois, qtdProdutos,qtdProdutosDois;
	
	scanf("%d %d %f",&codigoDoProduto,&qtdProdutos,&valorDoProduto);
	scanf("%d %d %f",&codigoDoProdutoDois,&qtdProdutosDois,&valorDoProdutoDois);
	
	printf("VALOR A PAGAR: R$ %.2f\n",(qtdProdutos*valorDoProduto)+(qtdProdutosDois*valorDoProdutoDois));	
	return 0;
}
