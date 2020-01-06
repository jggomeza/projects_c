// Crear una estructura que represente un libro y usando los strings dinamicos

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
	char *nombre;
	char *autor;
}libro;

void cambio(char aux[50]);

int main(){
	libro JDT;
	char aux[50];
	
	printf("Introduce un nombre para el libro: ");
	fgets(aux, 50, stdin);
	cambio(aux);
	
	JDT.nombre = (char*)malloc((strlen(aux)+1)*sizeof(char));
	if(JDT.nombre == NULL){
		printf("No se ha podido reservar memoria.\n");
		exit(1);
	}
	strcpy(JDT.nombre, aux); // copiamos el contenido
	//-------------------------------------------------
	printf("Introduce un autor para el libro: ");
	fflush(stdin);
	fgets(aux, 50, stdin);
	cambio(aux);
	
	JDT.autor = (char*)malloc((strlen(aux)+1)*sizeof(char));
	if(JDT.autor == NULL){
		printf("No se ha podido reservar memoria.\n");
		exit(1);
	}
	strcpy(JDT.autor, aux); // copiamos el contenido
	
	printf("%s.\n", JDT.nombre);
	printf("%s.\n", JDT.autor);
	
	free(JDT.nombre);
	free(JDT.autor);
	
	system("pause");
	return 0;
}

void cambio(char aux[50]){
	int i, temp = 0;
	
	for(i = 0; i < 50 && temp == 0; i++){
		if(aux[i] == '\n'){
			aux[i] = '\0';
			temp = 1;
		}
	}
}
