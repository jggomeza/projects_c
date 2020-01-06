// Bloque 3.6.2:

// Imprimir por pantalla todos ños números entre 2 y 2000

#include <stdio.h>

int main(){
	int i, j;
	int no_primo;
	

	
	for(i = 2; i < 2000; i++){
		no_primo = 0;
		
		for(j = 2; j < i && no_primo == 0; j++){
			if((i % j) == 0){
				no_primo = 1;
			}
		}
		
		if(no_primo != 1){
			printf("%i, ", i);
		}
	}
	
	printf("\n");	
	
	system("pause");
	return 0;
}
