// Bloque 3.2.2:

// Realiza un programa que calcule la media de x n�meros introducidos por teclado.

#include<stdio.h>

int main(){
	int i, num, cant;
	float sum = 0, avg;
	
	printf("Introduzca la cantidad de n�meros de los que desea calcular el promedio: ");
	scanf("%i", &cant);
	
	i = 1;
	while(i <= cant){
		printf("Introduzca un valor: ");
		scanf("%i", &num);
		
		sum += num;
		i += 1;
	}
	
	avg = sum / cant;
	
	printf("\nEl promedio de los %i n�meros introducidos es igual a %f.\n", cant, avg);
	
	system("pause");
	return 0;
}
