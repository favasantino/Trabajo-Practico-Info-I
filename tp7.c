#include <stdio.h>

#define TAM 5

int main() {
	int codigos[TAM];
	float precios[TAM];
	int i;
	int pos_mayor;
	int pos_menor;
	
	printf("Ingrese 5 productos, se solicitara el codigo y precio:\n");
	
	for (i = 0; i < TAM; i++) {
		printf("Ingrese el codigo de barras (1-999999999): ");
		scanf("%d", &codigos[i]);
		
		while (codigos[i] < 1 || codigos[i] > 999999999) {
			printf("Error. El codigo de barras debe estar entre 1 y 999999999\n");
			printf("Ingrese el codigo de barras (1-999999999): ");
			scanf("%d", &codigos[i]);
		}
		
		printf("Ingrese el precio: ");
		scanf("%f", &precios[i]);
		
		while (precios[i] < 0) {
			printf("Error. El precio no puede ser negativo\n");
			printf("Ingrese el precio: ");
			scanf("%f", &precios[i]);
		}
	}
	
	printf("\nCodigo Precio\n");
	for (i = 0; i < TAM; i++) {
		printf("   %d     %.2f\n", codigos[i], precios[i]);
	}
	
	pos_mayor = 0;
	pos_menor = 0;
	
	for (i = 0; i < TAM; i++) {
		if (precios[i] > precios[pos_mayor]) {
			pos_mayor = i;
		}
		if (precios[i] < precios[pos_menor]) {
			pos_menor = i;
		}
	}
	
	printf("\nMas caro: [%d] %.2f\n", codigos[pos_mayor], precios[pos_mayor]);
	printf("Mas barato: [%d] %.2f\n", codigos[pos_menor], precios[pos_menor]);
	
	return 0;
}
