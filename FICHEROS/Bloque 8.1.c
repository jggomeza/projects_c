// Funciones de lectura de ficheros .txt

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	FILE *f;
	char aux;
	char aux2[100];
	
	f = fopen("Ejemplo.txt", "r");
	if(f == NULL){
		printf("No se ha podido abrir el fichero.\n");
		exit(1);
	}
	
	while(aux != EOF){ //Empieza a programar
		aux = fgetc(f); // Este método lee caracter a caracter
		printf("%c", aux);
	}
	printf("\n");
	fclose(f);
	/////////////////////////////////////////////////////////
	f = fopen("Ejemplo.txt", "r");
	if(f == NULL){
		printf("No se ha podido abrir el fichero.\n");
		exit(1);
	}
	
	while(!feof(f)){
		fgets(aux2, 100, f); // Este método lee cadenas enteras
		printf("%s", aux2);
	}
	printf("\n");
	fclose(f);
	
	system("pause");
	return 0;
}
