// Bloque 5.6.2:

// Cambiar en una frase dada la letra a por un espacio.

#include<stdio.h>
#include<string.h>

void cambio(char c1[]);

int main(){
	
	char c1[] = "Si os esta gustando este video os podreis suscribir al canal!\n";
	
	cambio(c1);
	printf("%s\n ", c1);
	
	system("pause");
	return 0;
}

void cambio(char c1[]){
	int i, lim;
	
	lim = strlen(c1);
	
	for(i = 0; i < lim; i++){
		if(c1[i] == 'a'){
			c1[i] = ' ';
		}
	}
}
