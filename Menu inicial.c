#include<stdio.h>

int main(){
	
	int eleccion;
	
	printf("\tPROGRAMA CHAMPIONS\n\n");
	printf("1. Elige tu jugador favorito\n");
	printf("2. Haz tu seleccion de la competicion\n");
	printf("3. Elige el mejor 11 de la Champions\n");
	printf("4. Salir del programa\n\n");
	
	do {
		printf("Elige una opcion para continuar con el programa:\n");
		scanf("%d", &eleccion);
	}while (eleccion > 4 || eleccion <=0);
}

