#include <stdio.h>
int main() {
	float peso, altura, bmi;
	printf("Ingrese el peso en kg: ");
	scanf("%f", &peso);
	printf("Ingrese la altura en metros: ");
	scanf("%f", &altura);
	bmi = peso / (altura * altura);
	printf("\nSu indice de masa corporal es: %.2f\n\n", bmi);
	if (bmi < 18.5) {
		printf("Condicion: Bajo peso\n\n");
	}
	if (bmi >= 18.5 && bmi <= 24.9) {
		printf("Condicion: Normal\n\n");
	}
	if (bmi >= 25.0 && bmi <= 29.9) {
		printf("Condicion: Sobrepeso\n\n");
	}
	if (bmi >= 30.0) {
		printf("Condicion: Obesidad\n\n");
	}
	printf(" <18.5 | Bajo peso\n");
	printf(" 18.5 a 24.9 | Normal\n");
	printf(" 25.0 a 29.9 | Sobrepeso\n");
	printf(" >=30 | Obesidad\n");
	return 0;
}
