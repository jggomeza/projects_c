// Bloque 4.2.2:

// Calcular si dos n�meros diferentes son primos con una funci�n.

#include <stdio.h>

int primos(int num);

int main(){
	int x, y, primo_1, primo_2;
	
	
	printf("Introduzca el primer n�mero entero para calcular si es primo: ");
	scanf("%i", &x);
	
	printf("Introduzca el segundo n�mero entero para calcular si es primo: ");
	scanf("%i", &y);
	
	primo_1 = primos(x);
	primo_2 = primos(y);
	
	if(primo_1 == 0){
		printf("El n�mero %i es primo.\n", x);
	}
	else{
		printf("El n�mero %i no es primo.\n", x);
	}
	// ------------------------------------------------
	if(primo_2 == 0){
		printf("El n�mero %i es primo.\n", y);
	}
	else{
		printf("El n�mero %i no es primo.\n", y);
	}
	
		
	system("pause");
	return 0;
}

// Inicio de la funci�n primos()

int primos(int num){
	int i, no_primo = 0;
	
	for(i = 2; i < num && no_primo == 0; i++){
		if((num % i) == 0){
			no_primo = 1;
		}
	}
		
	return no_primo;
}
