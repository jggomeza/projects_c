// Pong v0.01

#include <stdio.h>
#include <windows.h>
#define V 21 // Vertical
#define H 75 // Horizontal

void inicio(char campo[V][H], int pelX, int pelY, int iniJug, int finJug, int iniIa, int finIa);
void borde(char campo[V][H]);
void raquetaJugador(char campo[V][H], int iniJug, int finJug);
void raquetaIa(char campo[V][H], int iniIa, int finIa);
void pelota(char campo[V][H], int pelX, int pelY);
void leercamp(char campo[V][H]);
void gameloop(char campo[V][H], int pelX, int pelY, int iniJug, int finJug, int iniIa, int finIa, int modX, int modY, int modIa);
void draw(char campo[V][H]);
void input(char campo[V][H], int *pelX, int *pelY, int *iniJug, int *finJug, int *iniIa, int *finIa, int *modX, int *modY, int *modIa, int *gol);
void update(char campo[V][H], int pelX, int pelY, int iniJug, int finJug, int iniIa, int finIa);

int main(){
	int pelX, pelY, iniJug, finJug, iniIa, finIa; // Posición
	int modX, modY, modIa; // Modificación
	char campo[V][H];
	
//	Variables de Posicion
	pelX = 37;
	pelY = 10;
	
	iniJug = 8;
	finJug = 12;
	
	iniIa = 1;
	finIa = 18;

//	Variables de modificacion
	modX = -1;
	modY = -1;
	modIa = -1;
	
	
	inicio(campo, pelX, pelY, iniJug, finJug, iniIa, finIa);
	gameloop(campo, pelX, pelY, iniJug, finJug, iniIa, finIa, modX, modY, modIa);
//	leercamp(campo); // Imprimir toda la interfaz visual del juego
	
	system("pause");
	return 0;
}

void inicio(char campo[V][H], int pelX, int pelY, int iniJug, int finJug, int iniIa, int finIa){
	borde(campo);
	raquetaJugador(campo, iniJug, finJug);
	raquetaIa(campo, iniIa, finIa);
	pelota(campo, pelX, pelY);
}

void borde(char campo[V][H]){
	int i, j;
	
	for(i=0; i<V; i++){
		for(j=0; j<H; j++){
			if(i==0 || i==V-1){
				campo[i][j]='-';
			}
			else if(j==0 || j==H-1){
				campo[i][j]='|';
			}
			else{
				campo[i][j]=' ';
			}
		}
	}
}

void raquetaJugador(char campo[V][H], int iniJug, int finJug){
	int i, j;
	
	for(i=iniJug; i <= finJug; i++){
		for(j=2; j<=3; j++){
			campo[i][j] = 'X';
		}
	}
}

void raquetaIa(char campo[V][H], int iniIa, int finIa){
	int i,j;
	
	for(i=iniIa; i<=finIa; i++){
		for(j=H-4; j<=H-3; j++){
			campo [i][j] = 'X';
		}
	}
}

void pelota(char campo[V][H], int pelX, int pelY){
	campo[pelY][pelX] = 'O';
}

void leercamp(char campo[V][H]){
	int i,j;
	printf("Desarrollado por Ing. Jose Gomez\n");
	
	for (i=0; i<V; i++){
		for(j=0; j<H; j++){
			printf("%c", campo[i][j]);
		}
		printf("\n");
	}
}

void gameloop(char campo[V][H], int pelX, int pelY, int iniJug, int finJug, int iniIa, int finIa, int modX, int modY, int modIa){
	int gol;
	
	gol = 0;
	draw(campo); // Dibijar en pantalla
	system("pause");
	
	do{
		draw(campo); // Dibijar en pantalla
		input(campo, &pelX, &pelY, &iniJug, &finJug, &iniIa, &finIa, &modX, &modY, &modIa, &gol); // Verificar y modificar las posiciones
		update(campo, pelX, pelY, iniJug, finJug, iniIa, finIa); // Actualizar la matriz campo
//		sleep(1); 
	}while(gol == 0);
}

void draw(char campo[V][H]){
	system("cls"); // linux: system("clear");
	leercamp(campo);
}

void input(char campo[V][H], int *pelX, int *pelY, int *iniJug, int *finJug, int *iniIa, int *finIa, int *modX, int *modY, int *modIa, int *gol){
	int i;
	char key;
	
// Verificación
	if(*pelY==1 || *pelY==V-2){
		*modY *= -1;
	}
	
	if(*pelX==1 || *pelX==H-2){
		*gol = 1;
	}
	
	if(*pelX==4){
		for(i=(*iniJug); i<=(*finJug); i++){
			if(i==(*pelY)){
				*modX *= -1;
			}
		}
	}
	
	if(*pelX==H-5){
		for(i=(*iniIa); i<=(*finIa); i++){
			if(i==(*pelY)){
				*modX *= -1;
			}
		}
	}
	
	if(*iniIa==1 || *finIa == V-2){
		*modIa *= -1;
	}
	
// Modificación
	if(*gol==0){
//		Pelota:
		*pelX += (*modX);
		*pelY += (*modY);
		
//		Raqueta de la IA
		*iniIa += (*modIa);
		*finIa += (*modIa);
//		Raqueta jugador
		
		if(kbhit()==1){
			key = getch(); // Lo mismo que scanf, solo que no hay que pulsar intro
			
			if(key=='8'){
				if(*iniJug != 1){
					*iniJug -= 1;
					*finJug -= 1;
				}
			}
			
			if(key=='2'){
				if(*finJug != V-2){
					*iniJug += 1;
					*finJug += 1;
				}
			}
			
		}
	}
}

void update(char campo[V][H], int pelX, int pelY, int iniJug, int finJug, int iniIa, int finIa){
	borde(campo);
	raquetaJugador(campo, iniJug, finJug);
	raquetaIa(campo, iniIa, finIa);
	pelota(campo, pelX, pelY);
}
