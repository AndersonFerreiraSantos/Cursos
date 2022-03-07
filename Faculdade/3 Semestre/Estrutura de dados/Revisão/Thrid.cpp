/*4) Baseando no item anterior, escreva um programa que define uma taxa de desconto de acordo com o seguinte critério:

a) Salário até R$ 1.000,00 – desconto de 8%

b) Salário entre R$ 1.000,01 e 1.500,00 – desconto de 8,5%

c) Salário acima de R$ 1.500,00 – desconto de 9%

d) O programa deve mostrar o salário em consideração e mostrar sua taxa de desconto, bem como o valor do desconto.
*/


#include <iostream>
#include <stdlib.h>

int main() {
	float salario, desconto, resultado, valorDoInss;
	
	salario = 1500.01; 
	
	if (salario <= 1000){
		valorDoInss = 8;
	} else if (salario > 1000 && salario <= 1500){
		valorDoInss = 8.5;
	} else if (salario > 1500){
		valorDoInss = 9;
	}
	
	desconto = (salario / 100) * valorDoInss;
	resultado = salario - desconto;
	
	printf("---------------------------------- \n");
	printf("Salario bruto: %f \n", salario);
	printf("Valor do INSS: %f \n", desconto);
	printf("Salario liquido: %f \n\n", resultado);
	printf("----------------------------------");

}
