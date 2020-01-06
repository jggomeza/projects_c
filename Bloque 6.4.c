// Bloque 6.4:

// Realizar un programa para controlar varias bibliotecas utilizando estructuras dentro de estructuras.

#include<stdio.h>
#include<string.h>
#define N 50

typedef struct{
	char nombre_lib[N];
	char autor[N];
	int lleno;
}libro;

typedef struct{
	char nombre_bi[N];
	libro lib[10];
	int lleno_bi;
}biblioteca;

biblioteca bi[3];

void vacio();
void cambio(char frase[N]);
void anadebi();
void anadelib();
void consulta();

int main(){
	int op;
	char key;
	
	vacio();
	
	do{
		do{
			printf("Elige una opsion a realizar:\n");
			printf("(1) Anadir una nueva biblioteca.\n");
			printf("(2) Anadir un libro a una biblioteca.\n");
			printf("(3) Consultar un libro.\n");
			scanf("%i", &op);
		}while(op < 1 || op > 3);
		
		switch(op){
			case 1:{
				anadebi();
				break;
			}
			case 2:{
				anadelib();
				break;
			}
			case 3:{
				consulta();
				break;
			}
		}
		
		printf("Quieres realizar alguna operacion mas? (S/N): ");
		fflush(stdin);
		scanf("%c", &key);
		
	}while(key == 'S' || key == 's');
	
	system("pause");
	return 0;
}

void vacio(){
	int i, j;
	
	for(i = 0; i < 3; i++){
		bi[i].lleno_bi = 0;
		for(j = 0; j < 10; j++){
			bi[i].lib[j].lleno = 0;
		}
	}
}

void anadebi(){
	int i, aux = 0;
	
	for(i = 0; i < 3 && aux == 0; i++){
		if(bi[i].lleno_bi == 0){
			printf("Introduce un nombre para la biblioteca: ");
			fflush(stdin);
			fgets(bi[i].nombre_bi, N, stdin);
			cambio(bi[i].nombre_bi);
			bi[i].lleno_bi = 1;
			aux = 1;
		}
	}
	
	if(aux == 0){
		printf("No queda nungun espacio libre para una nueva biblioteca.\n");
	}	
}

void anadelib(){
	int i, op, aux = 0;
	
	printf("Selecciona la Biblioteca en la cual anadiras el libro.\n");
	
	for(i = 0; i < 3 && aux == 0; i++){
		if(bi[i].lleno_bi == 1){
			printf("(%i) %s.\n", i/*+1*/, bi[i].nombre_bi);
		}
	}
	scanf("%i", &op);
//	op -= 1;
	for(i = 0; i < 10 && aux == 0; i++){
		if(bi[op].lib[i].lleno == 0){
			printf("Introduce el nombre del libro: ");
			fflush(stdin);
			fgets(bi[op].lib[i].nombre_lib, N, stdin);
			cambio(bi[op].lib[i].nombre_lib);
			
			printf("Introduce el nombre del autor: ");
			fflush(stdin);
			fgets(bi[op].lib[i].autor, N, stdin);
			cambio(bi[op].lib[i].autor);
			
			bi[op].lib[i].lleno = 1;
			aux = 1;
		}
	}	
}

void consulta(){
	int op, i, j, resul = 1;
	char buscar[N];
	
	do{
		printf("Que quieres busca, nombre libro o nombre autor?: \n");
		printf("(1) Nombre Libro.\n");
		printf("(2) Nombre Autor.\n");
		scanf("%i", &op);
	}while(op < 1 || op > 2);
	
	switch(op){
		case 1:{
			printf("Introduce el nombre del libro: ");
			fflush(stdin);
			fgets(buscar, N, stdin);
			cambio(buscar);
			
			for(i = 0; i < 3; i++){
				resul = 1;
				for(j = 0; j < 10; j++){
					resul = strcmp(buscar, bi[i].lib[j].nombre_lib);
					
					if(resul == 0){
						printf("El libro %s se encuentra en la biblioteca %s.\n", buscar, bi[i].nombre_bi);
						printf("El nombre del autor del libro es %s.\n", bi[i].lib[j].autor);
					}
				}
			}
			break;
		}
		case 2:{
			printf("Introduce el nombre del autor: ");
			fflush(stdin);
			fgets(buscar, N, stdin);
			cambio(buscar);
			
			for(i = 0; i < 3; i++){
				resul = 1;
				for(j = 0; j < 10; j++){
					resul = strcmp(buscar, bi[i].lib[j].autor);
					
					if(resul == 0){
						printf("El libro %s se encuentra en la biblioteca %s.\n", bi[i].lib[j].nombre_lib, bi[i].nombre_bi);
						printf("El nombre del autor del libro es %s.\n", bi[i].lib[j].autor);
					}
				}
			}
			break;
		}
	}
}

void cambio(char frase[N]){
	int i;
	
	for(i = 0; i < N; i++){
		if(frase[i] == '\n'){
			frase[i] = '\0';
		}
	}
}
