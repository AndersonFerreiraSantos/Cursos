/*
4. Faça uma  função  que  receba  como  argumento  os  valores  dos  lados  de  um triângulo,  
a  função  deverá  retornar  0  se  triângulo  for  equilátero,  1  se  for isósceles ou 2 
se for escaleno.
R.:
*/
#include <stdio.h>
#include <stdlib.h>
// prototipo função
int triangulo(float a, float b, float c);
int main (void){
    // variáveis locais 
    float lA, lB, lC;
    // entrada
    printf("Digite o lado A do triangulo: ");
    scanf("%f",&lA);
    fflush(stdin);
    printf("Digite o lado B do triangulo: ");
    scanf("%f",&lB);
    fflush(stdin);
    printf("Digite o lado C do triangulo: ");
    scanf("%f",&lC);
    fflush(stdin);
    switch(triangulo(lA,lB,lC)){
        case 0:
            printf("Triangulo equilatero \n");
            break;
        case 1:
            printf("Triangulo isoceles \n");
            break;
        case 2:
            printf("Triangulo escaleno \n");
            break;          
        default:
            printf("Nao e triangulo \n");
    }
    return 0;
}
int triangulo(float a, float b, float c){
    if(a==b & b==c){
        return 0;
    }else if(a==b || a==c || b==c){
        return 1;
    }else if((a+b)>c && (a+c)>b && (b+c)>a){
        return 2;
    }else{
        return -1;
    }
}
