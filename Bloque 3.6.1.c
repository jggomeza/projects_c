// Bloque 3.6.1:

// Escribe un programa que calcule el factorial de un n�mero n entero positivo, leido por teclado.

#include <stdio.h>

int main(){
	int x = 0, y = 1, i, num, res;
	
	printf("Introduce un n�mero de terminos para la sucesi�n de Fibonacci: ");
	scanf("%i", &num);
	
	if(num == 1){
		printf("0, ");
	}
	else{
		printf("%i, %i, ", x, y);
	}
	
	
	for(i = 1; i <= num - 2; i++){
		res = x + y;
		printf("%i, ", res);
		x = y;
		y = res;
	}
	
	system("pause");
	return 0;
}
