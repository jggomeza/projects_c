// Coger los datos de los trabajadores del fichero de texto y meterlos en una estructura

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
	char *nombre;
	int edad;
}trabajadores;

trabajadores *trab;

void vaciar(char temp[]);
void copiar(char temp[], int i);

int main(){
	
	FILE *f;
	int cont = 0;
	char temp[50];
	int i, j;
	char aux;
	
	f = fopen("Bloque8.2.txt", "r");
	if(f == NULL){
		printf("No se ha podido abrir el fichero.\n");
		exit(1);
	}
	
	while(!feof(f)){
		fgets(temp, 50, f); // lee linea a linea
		cont++;
	}
	
	rewind(f); // Pone el cursor al inicio del fichero
	
	trab = (trabajadores*)malloc((cont)*sizeof(trabajadores));
	if(f == NULL){
		printf("No se ha podido reservar memoria.\n");
		exit(1);
	}
	
	for(i = 0; !feof(f); i++){
		vaciar(temp);
		
		aux = '0';
		for(j = 0; aux != '-'; j++){
			aux = fgetc(f);
			if(aux != '-'){
				temp[j] = aux;
			}
		}
		copiar(temp, i);
		
		fgets(temp, 4, f);
		trab[i].edad = atoi(temp); // convierte cadenas de numeros en enteros
		
		printf("Nombre: %s Edad: %i.\n", trab[i].nombre, trab[i].edad);
	}
	
	printf("\n");
	fclose(f);
	
	system("pause");
	return 0;
}

void vaciar(char temp[]){
	int i;
	
	for(i = 0; i < 50; i++){
		temp[i] = '\0';
	}
}

void copiar(char temp[], int i){
	int N = strlen(temp) + 1; // '\0'
	trab[i].nombre = (char*)malloc(N*sizeof(char));
	if(trab[i].nombre == NULL){
		printf("No se ha podido reservar memoria.\n");
		exit(1);
	}
	strcpy(trab[i].nombre, temp);
	
}
