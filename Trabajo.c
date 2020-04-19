#include<stdio.h>

typedef struct{
	char nombre[20];
} equipos;

typedef struct {
	char nombre[20];
	char poosicion[20];
	int partidos;
	int goles;
	int asistencias;
	char equipo[20];
} jugador;

int main(){
	
	int eleccion;
	
	printf("\t\t\tPROGRAMA CHAMPIONS\n\n");
	printf("Bienvenido al mejor programa de la champions... Elige una opcion para continuar!!!\n\n");
	printf("1. Haz tu seleccion de la competicion\n");
	printf("2. Elige tu jugador favorito y podras ver sus estadisticas\n");
	printf("3. Elige el mejor 11 de la Champions\n");
	printf("4. Salir del programa\n\n");
	
	do {
		printf("Elige una opcion valida para continuar con el programa:\n");
		scanf("%d", &eleccion);
	} while (eleccion > 4 || eleccion <=0);
	
	return 0;
}
	

