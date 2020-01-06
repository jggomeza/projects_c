// Escribir en un fichero de texto:

#include <stdio.h>
#include <stdlib.h>

void cambio(char aux[]);

int main(){
	
	FILE *f;
	char aux[50];
	
	f = fopen("Bloque8.3.txt", "w");
	if(f == NULL){
		printf("No se ha podido abrir el fichero.\n");
		exit(1);
	}
	
	printf("Introduce una frase: ");
	fgets(aux, 50, stdin);
	cambio(aux);
	
	fprintf(f, "El string introducido es: %s", aux);
	
	fclose(f);
	
	system("pause");
	return 0;
}

void cambio(char aux[]){
	int i;
	
	for(i = 0; i < 50; i++){
		if(aux[i] == '\n'){
			aux[i] = '\0';
		}
	}
}
