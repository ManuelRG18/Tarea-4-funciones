#include<stdio.h>
#include<math.h>

float ecuaciondesegundogrado(float a, float b, float c) {
	float x1,x2;

	// Suponemos que b es mayor que a*4*c
	x1 = (-b + sqrt( pow(b,2) - (4*a*c) )) / (2*a); // positivo
	x2 =  (-b - sqrt( pow(b,2) - (4*a*c) )) / (2*a); // negativo
	
	printf("La soluciones son:\n+X1=%.2f\n-X2=%.2f" , x1, x2);
}

int main (){
	float a,b,c;
	printf ("\nBienvenido a este programa de calculo de ecuaciones de segundo grado:");
	printf ("\n Ingrese a: ");
	scanf ("%f", &a); 
	printf ("\n Ingrese b: ");
	scanf ("%f", &b);
    printf ("\n Ingrese c: ");
    scanf ("%f", &c);

	ecuaciondesegundogrado(a,b,c);
		
	return 0;
}