// Bloque 5.3.2:

// Calcular las probabilidades de que salgan cada uno de los números de un dado con un vector usando punteros.
// Calcular con 10000 iteraciones.

#include<stdio.h>

void sorteo(int *vec);
void imprime_array(int *vec);

int main(){
	
	int vec[] = {0, 0, 0, 0, 0, 0};
	
	sorteo(vec);
	imprime_array(vec);
	
	system("pause");
	return 0;
}

void sorteo(int *vec){
	srand(time(NULL)); // Se crea una semilla
	int i, aux;
	
	for(i = 0; i < 10000; i++){
		aux = rand()%6; // Números aleatorios entre 0 y 5
		
		switch(aux){
			case 0:{
				*(vec+aux) += 1;
				break;
			}
			case 1:{
				*(vec+aux) += 1;
				break;
			}
			case 2:{
				*(vec+aux) += 1;
				break;
			}
			case 3:{
				*(vec+aux) += 1;
				break;
			}
			case 4:{
				*(vec+aux) += 1;
				break;
			}
			case 5:{
				*(vec+aux) += 1;
				break;
			}
		}
	}
}
	
void imprime_array(int *vec){
	int i;
	float x;
	
	for(i = 0; i < 6; i++){
		x = (*(vec+i)*100)/10000.;
		printf("La probabilidad de que el número %i salga es de: %f\n\n", i + 1, x);
	}
}
