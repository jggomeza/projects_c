// Bloque 5.2.1:

// Introduce elementos a un vector con una función.

#include<stdio.h>

void llena_array(int a[]);
void imprime_array(int a[]);

int main(){
	int v[5];
	
	llena_array(v);
	imprime_array(v);
	
	system("pause");
	return 0;
}

void llena_array(int a[5]){
	int i;
	
	for(i = 0; i < 5; i++){
		printf("Dale valor al vector en la posición %i: ", i);
		scanf("%i", &a[i]);
	}
}
	
void imprime_array(int a[5]){
	int i;
	
	for(i = 0; i < 5; i++){
		printf("%i, ", a[i]);
	}
}
