#include <iostream>
#include <stdlib.h>

int main() {
	const char *name = "Jonas Laube";
	float totalAmount, result, inssAmont;
	int inss = 8;

	totalAmount = 3250.50;
	
	inssAmont = (inss * totalAmount) / 100;
	result = totalAmount - inssAmont;
	
	printf("---------------------------------- \n");
	printf("Folha de pagamento -> \n\n");
	printf("Nome do Funcionario: %s \n", name);
	printf("Salario bruto: %f \n", totalAmount);
	printf("Valor do INSS: %f \n", inssAmont);
	printf("Salario liquido: %f \n\n", result);
	printf("----------------------------------");

}
