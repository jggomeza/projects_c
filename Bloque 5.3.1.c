// Bloque 5.3.1:

// Introducir valores numéricos en un array mediante punteros.

#include<stdio.h>

void llena_array(int *vec);
void imprime_array(int *vec);

int main(){
	int vec[3];
	
	llena_array(vec);
	imprime_array(vec);
	
	system("pause");
	return 0;
}

void llena_array(int *vec){
	int i;
	
	for(i = 0; i < 3; i++){
		printf("Dale valor al vector en la posición %i: ", i+1);
		scanf("%i", (vec+i));
	}
}
	
void imprime_array(int *vec){
	int i;
	
	for(i = 0; i < 3; i++){
		printf("%i, ", *(vec+i));
	}
	printf("\n\n");
}
