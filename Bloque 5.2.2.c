// Bloque 5.2.2:

// Odenar un vector de 10 enteros de menor a moyor mediante una función.

#include<stdio.h>

void llena_array(int a[]);
void ordena_array(int a[]);
void imprime_array(int a[]);

int main(){
	int v[10];
	
	llena_array(v);
	imprime_array(v);
	ordena_array(v);
	imprime_array(v);
	
	system("pause");
	return 0;
}

void llena_array(int a[10]){
	int i;
	
	for(i = 0; i < 10; i++){
		printf("Dale valor al vector en la posición %i: ", i);
		scanf("%i", &a[i]);
	}
}

void ordena_array(int a[10]){
	int i, j, aux;
	for(i = 0; i < 10; i++){
		for(j = i; j < 10; j++){
			if(a[i] > a[j]){
				aux = a[i];
				a[i] = a[j];
				a[j] = aux;
			}
		}
	}
}
	
void imprime_array(int a[10]){
	int i;
	
	for(i = 0; i < 10; i++){
		printf("%i, ", a[i]);
	}
	printf("\n\n");
}
