//Declaracion de las librerias a utilizar
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//Declaracion de las funciones que se van a usar
void eliminatorias();

void eleccionjugadorA();
void eleccionjugadorB();
void eleccionjugadorC();
void eleccionjugadorD();
void eleccionjugadorE();
void eleccionjugadorF();
void eleccionjugadorG();
void eleccionjugadorH();

void mejor11portero();
void mejor11defensas();
void mejor11centrocampistas();
void mejor11delanteros();

//Declaracion de las estructuras, la primera almacena el nombre de los equipos y la segunda las estadisticas de los jugadores.
typedef struct{
	char nombre[25];
} equipos;

typedef struct {
	char nombre[100];
	char posicion[100];
	int partidos;
	int goles;
	int asistencias;
	char equipo[100];
} jugador;

typedef struct{
	char nombre[100];
	char equipo[100];
} mejor11;

//Desarrollo principal del programa
int main(){
	
	//Definicion de variables a utilizar
	int eleccion, i, cont=0;
	char opcion, clubs, clubs2;
	
	//Definicion de los punteros
	FILE *pf1;
	FILE *pf2, *pA, *pB, *pC, *pD, *pE, *pF, *pG, *pH;
	FILE *pf3;
	
	//Definicion del vector que almacena el nombre de los equipos
	equipos vector[100];
	
	//Inicio del programa
	printf("\t\t\tPROGRAMA CHAMPIONS\n\n");
	printf("Bienvenido al mejor programa de la Champions... Elige una opcion para continuar!!!\n\n");
	printf("1. Haz tu seleccion de la competicion\n");
	printf("2. Elige tu jugador favorito y podras ver sus estadisticas\n");
	printf("3. Elige el mejor 11 de la Champions\n");
	printf("4. Salir del programa\n\n");
	
	//Con este bucle pedimos una opcion reiteradamente hasta que una es valida
	do {
		printf("Elige una opcion valida para continuar con el programa:\n");
		scanf("%d", &eleccion);
	} while (eleccion > 4 || eleccion <1);
	
	//Con este switch empieza a funcionar el programa dependiendo de la opcion elegida por el usuario
	switch(eleccion){
		case 1: //Empieza a ejecutarse el case 1
			system("cls"); //Borra todo lo anterior en el compilador
			//Explicacion opcion 1
			printf("\nHas elegido hacer tu seleccion de la competicion.\n\nEn este apartado tendras que elegir quienes compondran los partidos de octavos, cuartos, semifinales y final, asi como  el ganador de cada partido.");
			printf("\n\nPrimero te vamos a mostrar los 16 equipos que estan clasificados:\n\n");
			
			pf1 = fopen("1. Seleccion competicion.txt", "r"); //Abre el fichero nombrado
			
			if(pf1 == NULL){ //Salta un error en caso de no encontrar el fichero
				printf("No se ha encontrado el fichero");
				return 0;
			}
			
			//Con este bucle guardamos lo que pone en el fichero
			while(fgets(vector[i].nombre, 25, pf1) != NULL){
				i++;
			}
			
			//Con este bucle imprimimos por pantalla lo que pone en el fichero
			for(i=0; i<16; i++){
				printf("%d. %s", i+1, vector[i].nombre);
			}
			
			fclose(pf1); //Cierra el fichero
			
			eliminatorias(); //Abre la funcion indicada
			
		break; //Sale del case 1
	}
}

void eliminatorias(){ 
	
	FILE *pf1; //Definicion varibales, en este caso solo el puntero
	
	pf1 = fopen("Eliminatorias.txt", "w"); //Crea el fichero indicado
	
	if(pf1 == NULL){ //Salta un error si no se ha podido crear el fichero
		printf("El fichero no se ha podido crear");
	}
	
	//Declaracion de las variables correspondientes al nombre de los equipos
	char equipo1[25]; 
	char equipo2[25];
	char equipo3[25];
	char equipo4[25];	
	char equipo5[25];
	char equipo6[25];
	char equipo7[25];
	char equipo8[25];
	char equipo9[25];
	char equipo10[25];
	char equipo11[25];
	char equipo12[25];
	char equipo13[25];
	char equipo14[25];
	char equipo15[25];
	char equipo16[25];
	
	char equipo17[25]; 
	char equipo18[25];
	char equipo19[25];
	char equipo20[25];	
	char equipo21[25];
	char equipo22[25];
	char equipo23[25];
	char equipo24[25];
	
	char equipo25[25];
	char equipo26[25];
	char equipo27[25];
	char equipo28[25];
	
	char equipo29[25];
	char equipo30[25];
	
	char equipo31[25];

	fflush(stdin); //Limpia el buffer
	printf("\nElige equipo 1 para Octavos de final 1: "); gets(equipo1); //Pide un equipo y lo guarda en su variable correspondiente
	printf("Elige equipo 2 para Octavos de final 1: "); gets(equipo2); //Pide un equipo y lo guarda en su variable correspondiente
	printf("Elige equipo 1 para Octavos de final 2: "); gets(equipo3); //Pide un equipo y lo guarda en su variable correspondiente
	printf("Elige equipo 2 para Octavos de final 2: "); gets(equipo4); //Pide un equipo y lo guarda en su variable correspondiente
	printf("Elige equipo 1 para Octavos de final 3: "); gets(equipo5); //Pide un equipo y lo guarda en su variable correspondiente
	printf("Elige equipo 2 para Octavos de final 3: "); gets(equipo6); //Pide un equipo y lo guarda en su variable correspondiente
	printf("Elige equipo 1 para Octavos de final 4: "); gets(equipo7); //Pide un equipo y lo guarda en su variable correspondiente
	printf("Elige equipo 2 para Octavos de final 4: "); gets(equipo8); //Pide un equipo y lo guarda en su variable correspondiente
	printf("Elige equipo 1 para Octavos de final 5: "); gets(equipo9); //Pide un equipo y lo guarda en su variable correspondiente
	printf("Elige equipo 2 para Octavos de final 5: "); gets(equipo10); //Pide un equipo y lo guarda en su variable correspondiente
	printf("Elige equipo 1 para Octavos de final 6: "); gets(equipo11); //Pide un equipo y lo guarda en su variable correspondiente
	printf("Elige equipo 2 para Octavos de final 6: "); gets(equipo12); //Pide un equipo y lo guarda en su variable correspondiente
	printf("Elige equipo 1 para Octavos de final 7: "); gets(equipo13); //Pide un equipo y lo guarda en su variable correspondiente
	printf("Elige equipo 2 para Octavos de final 7: "); gets(equipo14); //Pide un equipo y lo guarda en su variable correspondiente
	printf("Elige equipo 1 para Octavos de final 8: "); gets(equipo15); //Pide un equipo y lo guarda en su variable correspondiente
	printf("Elige equipo 2 para Octavos de final 8: "); gets(equipo16); //Pide un equipo y lo guarda en su variable correspondiente
	
	printf("\nElige al ganador entre %s y %s (Octavos de final 1): ", equipo1, equipo2); gets(equipo17); //Pide un equipo y lo guarda en su variable correspondiente
	printf("Elige al ganador entre %s y %s (Octavos de final 2): ", equipo3, equipo4); gets(equipo18); //Pide un equipo y lo guarda en su variable correspondiente
	printf("Elige al ganador entre %s y %s (Octavos de final 3): ", equipo5, equipo6); gets(equipo19); //Pide un equipo y lo guarda en su variable correspondiente
	printf("Elige al ganador entre %s y %s (Octavos de final 4): ", equipo7, equipo8); gets(equipo20); //Pide un equipo y lo guarda en su variable correspondiente
	printf("Elige al ganador entre %s y %s (Octavos de final 5): ", equipo9, equipo10); gets(equipo21); //Pide un equipo y lo guarda en su variable correspondiente
	printf("Elige al ganador entre %s y %s (Octavos de final 6): ", equipo11, equipo12); gets(equipo22); //Pide un equipo y lo guarda en su variable correspondiente
	printf("Elige al ganador entre %s y %s (Octavos de final 7): ", equipo13, equipo14); gets(equipo23); //Pide un equipo y lo guarda en su variable correspondiente
	printf("Elige al ganador entre %s y %s (Octavos de final 8): ", equipo15, equipo16); gets(equipo24); //Pide un equipo y lo guarda en su variable correspondiente
	
	printf("\nElige al ganador entre %s y %s (Cuartos de final 1): ", equipo17, equipo18); gets(equipo25); //Pide un equipo y lo guarda en su variable correspondiente
	printf("Elige al ganador entre %s y %s (Cuartos de final 2): ", equipo19, equipo20); gets(equipo26); //Pide un equipo y lo guarda en su variable correspondiente
	printf("Elige al ganador entre %s y %s (Cuartos de final 3): ", equipo21, equipo22); gets(equipo27); //Pide un equipo y lo guarda en su variable correspondiente
	printf("Elige al ganador entre %s y %s (Cuartos de final 4): ", equipo23, equipo24); gets(equipo28); //Pide un equipo y lo guarda en su variable correspondiente
	
	printf("\nElige al ganador entre %s y %s (Semifinal 1): ", equipo25, equipo26); gets(equipo29); //Pide un equipo y lo guarda en su variable correspondiente
	printf("Elige al ganador entre %s y %s (Semifinal 2): ", equipo27, equipo28); gets(equipo30); //Pide un equipo y lo guarda en su variable correspondiente
	
	printf("\nElige al ganador entre %s y %s (Final): ", equipo29, equipo30); gets(equipo31); //Pide un equipo y lo guarda en su variable correspondiente
	
	printf("Tu campeon de la Champions es: %s", equipo31); //Imprime por pantalla el equipo campeon
	
	
	fprintf(pf1, "Clasificado Octavos de final 1: %s\n", equipo17); //Escribe en el fichero el nombre del equipo asocidado a su variable
	fprintf(pf1, "Clasificado Octavos de final 2: %s\n", equipo18); //Escribe en el fichero el nombre del equipo asocidado a su variable
	fprintf(pf1, "Clasificado Octavos de final 3: %s\n", equipo19); //Escribe en el fichero el nombre del equipo asocidado a su variable
	fprintf(pf1, "Clasificado Octavos de final 4: %s\n", equipo20); //Escribe en el fichero el nombre del equipo asocidado a su variable
	fprintf(pf1, "Clasificado Octavos de final 5: %s\n", equipo21); //Escribe en el fichero el nombre del equipo asocidado a su variable
	fprintf(pf1, "Clasificado Octavos de final 6: %s\n", equipo22); //Escribe en el fichero el nombre del equipo asocidado a su variable
	fprintf(pf1, "Clasificado Octavos de final 7: %s\n", equipo23); //Escribe en el fichero el nombre del equipo asocidado a su variable
	fprintf(pf1, "Clasificado Octavos de final 8: %s\n", equipo24); //Escribe en el fichero el nombre del equipo asocidado a su variable
	
	fprintf(pf1, "\nClasificado Cuartos de final 1: %s\n", equipo25); //Escribe en el fichero el nombre del equipo asocidado a su variable
	fprintf(pf1, "Clasificado Cuartos de final 2: %s\n", equipo26); //Escribe en el fichero el nombre del equipo asocidado a su variable
	fprintf(pf1, "Clasificado Cuartos de final 3: %s\n", equipo27); //Escribe en el fichero el nombre del equipo asocidado a su variable
	fprintf(pf1, "Clasificado Cuartos de final 4: %s\n", equipo28); //Escribe en el fichero el nombre del equipo asocidado a su variable
	
	fprintf(pf1, "\nClasificado Semifinal 1: %s\n", equipo29); //Escribe en el fichero el nombre del equipo asocidado a su variable
	fprintf(pf1, "Clasificado Semifinal 2: %s\n", equipo30); //Escribe en el fichero el nombre del equipo asocidado a su variable
	
	fprintf(pf1, "\nCampeon de la Champions: %s\n", equipo31); //Escribe en el fichero el nombre del equipo asocidado a su variable
	
	fclose(pf1); //Cierra el fichero

}

