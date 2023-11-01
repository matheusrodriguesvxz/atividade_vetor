#include <stdio.h>
#include <stdlib.h>

void main(){
	
	int vetor[10];
	int n;

	for(n=0;n<10;n++){
		printf("Escolha um numero para vetor %d: \n=>",n);
		scanf("%d",&vetor[n]);
	}
	

	for(n=0;n<10;n++){
		printf("\t \t \n======NUMEROS ANTES DA MULTIPLICACAO======\n");
		printf("\nPosicao %d:%d\n",n , vetor[n]);
	}
	for(n=0;n<10;n++){
		printf("\t \t \n======NUMEROS DEPOIS DA MULTIPLICACAO======\n");
		
		vetor[n]= (vetor[n]*2);
		printf("\nPosicao %d:%d\n",n, vetor[n]);
}
}		
