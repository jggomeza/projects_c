// Bloque 3.4.2:

// Hacer un bucle que nos pregunte si queremos continuar y hasta que no escribamos la letra a no pare.

#include <stdio.h>
#include <windows.h>
// #include<unistd.h> // Solo para Linux

int main(){
	int h, min, seg, x;
	
	x = 1000;
		
	for(h = 0; h < 24; h++){
		for(min = 0; min < 60; min++){
			for(seg = 0; seg < 60; seg++){
				printf("%02i:%02i:%02i\r", h, min, seg);
				Sleep(x); // La 'S' debe ser en mayuscula
				// usleep(1000 * x); // Cuando se usa Linux, en este caso el parametro debe estar en microsegundos.
			}
		}
	}
	
	
	system("pause");
	return 0;
}
