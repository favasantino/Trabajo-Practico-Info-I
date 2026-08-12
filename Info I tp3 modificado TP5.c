#include <stdio.h>

// Repositorio: https://github.com/favasantino/Trabajo-Practico-Info-I/tree/main
int main(void) {
	float peso, altura, bmi;
	
	do {
		printf("Ingrese el peso en kg: ");
		scanf("%f", &peso);
		if (peso <= 0) {
			printf("Error: Ingrese un peso valido (mayor a 0).\n");
		}
	} while (peso <= 0);
	
	do {
		printf("Ingrese la altura en metros: ");
		scanf("%f", &altura);
		if (altura <= 0) {
			printf("Error: Ingrese una altura valida (mayor a 0).\n");
		}
	} while (altura <= 0);
	
	bmi = peso / (altura * altura);
	printf("\nSu indice de masa corporal es: %.2f\n\n", bmi);
	
	printf("Tabla de rangos:\n");
	printf(" <18.5 | Bajo peso\n");
	printf(" 18.5 a 24.9 | Normal\n");
	printf(" 25.0 a 29.9 | Sobrepeso\n");
	printf(" >=30 | Obesidad\n\n");
	
	if (bmi < 18.5) {
		printf("Segun la tabla su condicion es: Bajo peso\n\n");
	}
	if (bmi >= 18.5 && bmi <= 24.9) {
		printf("Segun la tabla su condicion es: Normal\n\n");
	}
	if (bmi >= 25.0 && bmi <= 29.9) {
		printf("Segun la tabla su condicion es: Sobrepeso\n\n");
	}
	if (bmi >= 30.0) {
		printf("Segun la tabla su condicion es: Obesidad\n\n");
	}
	
	return 0;
}
