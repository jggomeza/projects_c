// Bloque 3.6.2:

// Escribe un programa que calcule si un número es primo.

#include <stdio.h>

int main(){
	int i, num;
	int no_primo = 0;
	
	printf("Introduzca un número: ");
	scanf("%i", &num);
	
	for(i = 2; i < num && no_primo == 0; i++){
		if((num % i) == 0){
			no_primo = 1;
		}
	}
	
	if(no_primo != 1){
		printf("El numero %i es primo!\n", num);
	}
	else{
		printf("El numero %i no es primo!\n", num);
	}
	
	system("pause");
	return 0;
}
