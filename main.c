#include <stdio.h>
#include <stdlib.h>

int main(){
  	unsigned int x[200];
  	int valor;
  	int posArray;
  	int posBitArray;
  	int bit;
  	int iArray;

	// zerando o array
	for (iArray = 0; iArray <= 200; iArray++) {
		x[iArray] = 0;
	}
	
  	// armazenando os valores dentro do array
	while (valor != -1) {
		printf("Digite um numero entre 0 e 5000: ");
		scanf("%d", &valor);
		
		if (valor >= 0 && valor <= 5000) {
			posArray = valor / 32;
			posBitArray = valor % 32;
			x[posArray] = x[posArray] | (1 << posBitArray); // marcando os bits no array
			/* ex:
				indice 2 = 72 // 32 
				bit 8 = 72 % 32
				x[2] = x[2] | (1 << 8)

				A divisão inteira de 72 por 32 diz o indice do array onde o bit sera marcado
				E o resto dessa divisão diz qual bit do indice sera marcado
			*/
		}
	}
	
	printf("\n");
	
  	// extraindo e printando os valores do array
	for (iArray = 0; iArray <= 200; iArray++) {
		for (bit = 0; bit <= 31; bit++) {
			if ((x[iArray] >> bit) & 1) { // verifica se o bit está marcado
				printf("Valores digitados: %d\n", (32 * iArray) + bit);
				/* ex:
					32 = (32*1) + 0  
					72 = (32 * 2) + 8;

					Aqui desfazemos o processo que é feito dentro do while e calculamos o valor que foi
					desmontado para marcar o bit
				*/
			}
		}
	}
   	   
	return 0;  
}
