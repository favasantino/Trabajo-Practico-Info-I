#include <stdio.h>

float calcularAreaRectangulo(float longitud, float altura) {
	return longitud * altura;
}

float calcularPerimetroRectangulo(float longitud, float altura) {
	return 2 * (longitud + altura);
}

float calcularAreaCirculo(float radio) {
	return 3.14 * radio * radio;
}

float calcularPerimetroCirculo(float radio) {
	return 2 * 3.14 * radio;
}

void imprimirResultados(float area, float perimetro) {
	printf("El area es: %.2f\n", area);
	printf("El perimetro es: %.2f\n", perimetro);
}

int main() {
	int opcion;
	float longitud, altura, radio;
	float area, perimetro;
	
	printf("Ingrese la figura que desea calcular (1: rectangulo, 2: circulo): ");
	scanf("%d", &opcion);
	
	while (opcion != 1 && opcion != 2) {
		printf("Opcion invalida. Ingrese nuevamente: ");
		scanf("%d", &opcion);
	}
	
	if (opcion == 1) {
		printf("Opcion de rectangulo seleccionada\n");
		printf("Ingrese la longitud del rectangulo: ");
		scanf("%f", &longitud);
		printf("Ingrese la altura del rectangulo: ");
		scanf("%f", &altura);
		
		area = calcularAreaRectangulo(longitud, altura);
		perimetro = calcularPerimetroRectangulo(longitud, altura);
	} else {
		printf("Opcion de circulo seleccionada\n");
		printf("Ingrese el radio del circulo: ");
		scanf("%f", &radio);
		
		area = calcularAreaCirculo(radio);
		perimetro = calcularPerimetroCirculo(radio);
	}
	
	imprimirResultados(area, perimetro);
	
	return 0;
}
