// Bloque 2.4.2:

// Escriba un programa que acepte tres números, horas, minutos y segundos y devuelva
// la hora que sera dentro de un segundo, controlando que sea una hora correcta.

#include<stdio.h>

int main(){
	int h, min, seg;
	
	printf("Introduce un valor para horas: ");
	scanf("%i", &h);
	printf("Introduce un valor para minutos: ");
	scanf("%i", &min);
	printf("Introduce un valor para segundos: ");
	scanf("%i", &seg);
	
	if(h <= 23 && min <= 59 && seg <=59){
		seg += 1;
		
		if(seg == 60){
			min += 1;
			seg = 0;
			
			if(min == 60){
				h += 1;
				min = 0;
				
				if(h == 24){
					h = 0;
				}
			}
		}
		
		printf("La hora es %i:%i:%i\n", h, min, seg);
	}
	else{
		printf("La hora introducida no es correcta!");
	}
	

	
	system("pause");
	return 0;
}
