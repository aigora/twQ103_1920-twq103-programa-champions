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
			
		case 2: //Empieza a ejecutarse el case 2
			system("cls"); //Borra todo lo anterior en el compilador
			//Explicacion opcion 2
			printf("Has elegido la opcion numero 2, asi que vamos a buscar a tu jugador favorito y te mostraremos sus estadisticas.\nTan solo tendras que elegir grupo, club y elegir a tu jugador!!");
			printf("\n\nPrimero te vamos a mostrar los 8 grupos correspondientes:\n\n");
			
			pf2 = fopen("2. Grupos.txt", "r"); //Abre el fichero indicado
			
			if(pf2 == NULL){ //Salta un error en caso de no encontar el fichero seleccionado
				printf("No se ha encontrado el fichero");
				return 0;
			}
			//Con este bucle guardamos lo que pone en el fichero
				while((clubs = fgetc(pf2)) != EOF){
					printf("%c", clubs); //Imprime por pantalla lo que pone en el fichero hasta que llega a EOF
			}
			
			fclose(pf2); //Cierra el fichero
			
			fflush(stdin); //Limpia el buffer
			printf("\n\nAhora tienes que elegir uno de los grupos mostrados. Escribe solo la letra: "); scanf("%c", &opcion); //Pide una opcion y la guarda en una variable
			
			switch(opcion){
				case 'A': //Empieza a ejecutarse el case 'A'
					system("cls"); //Borra todo lo anterior en el compilador
					pA = fopen("Grupo A.txt", "r"); //Abre el fichero seleccionado
					while(fgets(vector[i].nombre, 500, pA) != NULL){ //Guarda lo que pone en el fichero en la variable seleccionada
						cont++;
						i++;
					}
					printf("Has elegido el Grupo A, estos son los equipos que componen el Grupo:\n\n");
					for(i=0; i<cont; i++){ //Muestra los equipos del Grupo A
						printf("%d. %s", i+1, vector[i].nombre);
					}
					fclose(pA); //Cierra el fichero
					
					eleccionjugadorA(); //Abre la funcion indicada

				break; //Sale del case 'A'
				
				case 'B':  //Empieza a ejecutarse el case 'B'
					system("cls"); //Borra todo lo anterior en el compilador
					pB = fopen("Grupo B.txt", "r"); //Abre el fichero seleccionado
					while(fgets(vector[i].nombre, 500, pB) != NULL){//Guarda lo que pone en el fichero en la variable seleccionada
						cont++;
						i++;
					}
					printf("Has elegido el Grupo B, estos son los equipos que componen el Grupo:\n\n");
					for(i=0; i<cont; i++){ //Muestra los equipos del Grupo B
						printf("%d. %s", i+1, vector[i].nombre);
					}
					fclose(pB);//Cierra el fichero
					
					eleccionjugadorB(); //Abre la funcion indicada
					
				break; //Sale del case 'B'
				
				case 'C': //Empieza a ejecutarse el case 'C'
					system("cls");//Borra todo lo anterior en el compilador
					pC = fopen("Grupo C.txt", "r");//Abre el fichero seleccionado
					while(fgets(vector[i].nombre, 500, pC) != NULL){//Guarda lo que pone en el fichero en la variable seleccionada
						cont++;
						i++;
					}
					printf("Has elegido el Grupo C, estos son los equipos que componen el Grupo:\n\n");
					for(i=0; i<cont; i++){ //Muestra los equipos del Grupo C
						printf("%d. %s", i+1, vector[i].nombre);
					}
					fclose(pC);//Cierra el fichero
					
					eleccionjugadorC(); //Abre la funcion indicada
					
				break; //Sale del case 'C'
				
				case 'D':  //Empieza a ejecutarse el case 'D'
					system("cls");//Borra todo lo anterior en el compilador
					pD = fopen("Grupo D.txt", "r");//Abre el fichero seleccionado
					while(fgets(vector[i].nombre, 500, pD) != NULL){//Guarda lo que pone en el fichero en la variable seleccionada
						cont++;
						i++;
					}
					printf("Has elegido el Grupo D, estos son los equipos que componen el Grupo:\n\n");
					for(i=0; i<cont; i++){ //Muestra los equipos del Grupo D
						printf("%d. %s", i+1, vector[i].nombre);
					}
					fclose(pD);//Cierra el fichero
					
					eleccionjugadorD(); //Abre la funcion indicada
					
				break; //Sale del case 'D'
				
				case 'E':  //Empieza a ejecutarse el case 'E'
					system("cls");//Borra todo lo anterior en el compilador
					pE = fopen("Grupo E.txt", "r");//Abre el fichero seleccionado
					while(fgets(vector[i].nombre, 500, pE) != NULL){//Guarda lo que pone en el fichero en la variable seleccionada
						cont++;
						i++;
					}
					printf("Has elegido el Grupo E, estos son los equipos que componen el Grupo:\n\n");
					for(i=0; i<cont; i++){ //Muestra los equipos del Grupo E
						printf("%d. %s", i+1, vector[i].nombre);
					}
					fclose(pE);//Cierra el fichero
					
					eleccionjugadorE(); //Abre la funcion indicada
					
				break; //Sale del case 'E'
				
				case 'F':  //Empieza a ejecutarse el case 'F'
					system("cls");//Borra todo lo anterior en el compilador
					pF = fopen("Grupo F.txt", "r");//Abre el fichero seleccionado
					while(fgets(vector[i].nombre, 500, pF) != NULL){//Guarda lo que pone en el fichero en la variable seleccionada
						cont++;
						i++;
					}
					printf("Has elegido el Grupo F, estos son los equipos que componen el Grupo:\n\n");
					for(i=0; i<cont; i++){ //Muestra los equipos del Grupo F
						printf("%d. %s", i+1, vector[i].nombre);
					}
					fclose(pF);//Cierra el fichero
					
					eleccionjugadorF(); //Abre la funcion indicada
					
				break; //Sale del case 'F'
				
				case 'G':  //Empieza a ejecutarse el case 'G'
					system("cls");//Borra todo lo anterior en el compilador
					pG = fopen("Grupo G.txt", "r");//Abre el fichero seleccionado
					while(fgets(vector[i].nombre, 500, pG) != NULL){//Guarda lo que pone en el fichero en la variable seleccionada
						cont++;
						i++;
					}
					printf("Has elegido el Grupo G, estos son los equipos que componen el Grupo:\n\n");
					for(i=0; i<cont; i++){ //Muestra los equipos del Grupo G
						printf("%d. %s", i+1, vector[i].nombre);
					}
					fclose(pG);//Cierra el fichero
					
					eleccionjugadorG(); //Abre la funcion indicada
					
				break; //Sale del case 'G'
				
				case 'H':  //Empieza a ejecutarse el case 'H'
					system("cls");//Borra todo lo anterior en el compilador
					pH = fopen("Grupo H.txt", "r");//Abre el fichero seleccionado
					while(fgets(vector[i].nombre, 500, pH) != NULL){//Guarda lo que pone en el fichero en la variable seleccionada
						cont++;
						i++;
					}
					printf("Has elegido el Grupo H, estos son los equipos que componen el Grupo:\n\n");
					for(i=0; i<cont; i++){ //Muestra los equipos del Grupo H
						printf("%d. %s", i+1, vector[i].nombre);
					}
					fclose(pH);//Cierra el fichero
					
					eleccionjugadorH(); //Abre la funcion indicada
					
				break; //Sale del case 'H'
					
				default://Ejecuta esta opcion en caso de no elegir ningun "case" correctamente
					printf("No has introducido un grupo valido");
			}
		
		break; //Sale del case 2
			
		case 3: //Empieza a ejecutarse el case 3
			system("cls");//Borra todo lo anterior en el compilador
			printf("Has elegido hacer el mejor 11 de la Champions.\n\n"); //Explicacion opcion 3
			printf("Para llevar a cabo esta tarea se mostraran todos los jugadores de los 8 mejores equipos. Estos 8 equipos ya estan \nseleccionados.\n");
			printf("Podras ver todos los porteros correspondientes a los 8 equipos, de los que tendras que elegir a 1 de ellos; luego \nse te mostraran los 32 defensas disponibles, donde tendras que elegir 4; despues podras ver los 24 centrocampistas \ndisponibles y tienes que elegir a 3 de ellos; por ultimo tendras que elegir 3 delanteros de los 24 mostrados.\n\n");
			
			printf("\nPrimero te vamos a mostrar los 8 mejores equipos:\n\n");
			
			pf3 = fopen("3. Mejores equipos.txt", "r"); //Abre el fichero indicado
			
			if(pf3 == NULL){ //Salta un error en caso de no encontrar el fichero
				printf("No se ha encontrado el fichero");
				return 0;
			}
			//ALmacena en una variable lo que pone en el fichero
			while((clubs2 = fgetc(pf3)) != EOF){
				printf("%c", clubs2); //Imprime por pantalla lo que pone en el fichero hasta que llega a EOF
			}
			
			fclose(pf3); //Cierra el fichero indicado
			
			printf("\n");
			system("pause"); //Pide que se pulse una tecla para continuar con el programa
			system("cls");//Borra todo lo anterior en el compilador
			
			mejor11portero(); //Abre la funcion indicada
			mejor11defensas(); //Abre la funcion indicada
			mejor11centrocampistas(); //Abre la funcion indicada
			mejor11delanteros(); //Abre la funcion indicada
			
		break; //Sale del case 3
		
		case 4: //Empieza a ejecutarse el case 4
			system("cls");
			printf("Has elegido la opcion Salir del programa. Hasta pronto!!");
		
	return 0;
			
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
	
	printf("\n\nBien! Ahora que has acabado podras ver tus resultados en el fichero 'Eliminatorias.txt' en la carpeta del programa!");
	
	fclose(pf1); //Cierra el fichero

}

void eleccionjugadorA(){
	
	//Declaracion de las distintas variables
	FILE *pf2;
	int i, j, equipo, cont=0, opcion;
	
	jugador stats[100]; //Declaracion del vector de estructuras

	pf2 = fopen("sGrupoA.txt", "r"); //Abre el fichero eleccionado
	
	if(pf2 == NULL){ //Si no encuentra el fichero salta un error
		printf("No se ha encontrado el fichero");
	}
	
	//Guarda en las distintas variables lo que pone en el fichero
	while(fscanf(pf2, "%[^;]; %[^;]; %d; %d; %d; %[^\n] \n", stats[i].nombre, stats[i].posicion, &stats[i].partidos, &stats[i].goles, &stats[i].asistencias, stats[i].equipo) != EOF){
		i++;
	}

	do{ //Pregunta por uno de los equipos reiteradamente hasta dar una opcion valida 
    	printf("\n\nElige uno de los equipos para ver sus jugadores: ");
    	scanf("%d", &equipo);
	} while (equipo<1 || equipo>4);
	
	system("cls"); //Borra todo lo anterior
	printf("Estos son los jugadores del equipo elegido:\n");
	for(i=equipo*11-11; i<equipo*11; i++){ //Bucle que imprime por pantalla los jugadores el equipo elegido
		printf("\n%d. %s", cont+=1, stats[i].nombre);
	}
	
	do { //Pregunta por uno de los jugadores reiteradamente hasta dar una opcion valida 
		printf("\n\nElige a un jugador para ver sus estadisticas: ");
		scanf("%d", &opcion);
	} while (opcion>11 || opcion<1);
	
	system("cls"); //Borra todo lo anterior
	printf("Estas son las estadisticas del jugador elegido:\n");
	j = equipo*11-12+opcion; //Significado variable j
	//Imprime estadisticas del jugador seleccionado
	printf("\nNombre: %s\nPosicion: %s\nPartidos: %d\nGoles: %d\nAsistencias: %d\n", stats[j].nombre, stats[j].posicion, stats[j].partidos, stats[j].goles, stats[j].asistencias);

	fclose(pf2); //Cierra el fichero
}

void eleccionjugadorB(){
	//Declaracion de las distintas variables
	FILE *pf2;
	int i, j, equipo, cont=0, opcion;
	
	jugador stats[100]; //Declaracion del vector de estructuras

	pf2 = fopen("sGrupoB.txt", "r"); //Abre el fichero eleccionado
	
	if(pf2 == NULL){ //Si no encuentra el fichero salta un error
		printf("No se ha encontrado el fichero");
	}
	
	//Guarda en las distintas variables lo que pone en el fichero
	while(fscanf(pf2, "%[^;]; %[^;]; %d; %d; %d; %[^\n] \n", stats[i].nombre, stats[i].posicion, &stats[i].partidos, &stats[i].goles, &stats[i].asistencias, stats[i].equipo) != EOF){
		i++;
	}

	do{ //Pregunta por uno de los equipos reiteradamente hasta dar una opcion valida 
    	printf("\n\nElige uno de los equipos para ver sus jugadores: ");
    	scanf("%d", &equipo);
	} while (equipo<1 || equipo>4);
	
	system("cls"); //Borra todo lo anterior
	printf("Estos son los jugadores del equipo elegido:\n");
	for(i=equipo*11-11; i<equipo*11; i++){ //Bucle que imprime por pantalla los jugadores el equipo elegido
		printf("\n%d. %s", cont+=1, stats[i].nombre);
	}
	
	do { //Pregunta por uno de los jugadores reiteradamente hasta dar una opcion valida 
		printf("\n\nElige a un jugador para ver sus estadisticas: ");
		scanf("%d", &opcion);
	} while (opcion>11 || opcion<1);
	
	system("cls"); //Borra todo lo anterior
	printf("Estas son las estadisticas del jugador elegido:\n");
	j = equipo*11-12+opcion; //Significado variable j
	//Imprime estadisticas del jugador seleccionado
	printf("\nNombre: %s\nPosicion: %s\nPartidos: %d\nGoles: %d\nAsistencias: %d\n", stats[j].nombre, stats[j].posicion, stats[j].partidos, stats[j].goles, stats[j].asistencias);

	fclose(pf2); //Cierra el fichero
}

void eleccionjugadorC(){
	//Declaracion de las distintas variables
	FILE *pf2;
	int i, j, equipo, cont=0, opcion;
	
	jugador stats[100]; //Declaracion del vector de estructuras

	pf2 = fopen("sGrupoC.txt", "r"); //Abre el fichero eleccionado
	
	if(pf2 == NULL){ //Si no encuentra el fichero salta un error
		printf("No se ha encontrado el fichero");
	}
	
	//Guarda en las distintas variables lo que pone en el fichero
	while(fscanf(pf2, "%[^;]; %[^;]; %d; %d; %d; %[^\n] \n", stats[i].nombre, stats[i].posicion, &stats[i].partidos, &stats[i].goles, &stats[i].asistencias, stats[i].equipo) != EOF){
		i++;
	}

	do{ //Pregunta por uno de los equipos reiteradamente hasta dar una opcion valida 
    	printf("\n\nElige uno de los equipos para ver sus jugadores: ");
    	scanf("%d", &equipo);
	} while (equipo<1 || equipo>4);
	
	system("cls"); //Borra todo lo anterior
	printf("Estos son los jugadores del equipo elegido:\n");
	for(i=equipo*11-11; i<equipo*11; i++){ //Bucle que imprime por pantalla los jugadores el equipo elegido
		printf("\n%d. %s", cont+=1, stats[i].nombre);
	}
	
	do { //Pregunta por uno de los jugadores reiteradamente hasta dar una opcion valida 
		printf("\n\nElige a un jugador para ver sus estadisticas: ");
		scanf("%d", &opcion);
	} while (opcion>11 || opcion<1);
	
	system("cls"); //Borra todo lo anterior
	printf("Estas son las estadisticas del jugador elegido:\n");
	j = equipo*11-12+opcion; //Significado variable j
	//Imprime estadisticas del jugador seleccionado
	printf("\nNombre: %s\nPosicion: %s\nPartidos: %d\nGoles: %d\nAsistencias: %d\n", stats[j].nombre, stats[j].posicion, stats[j].partidos, stats[j].goles, stats[j].asistencias);

	fclose(pf2); //Cierra el fichero
}

void eleccionjugadorD(){
	//Declaracion de las distintas variables
	FILE *pf2;
	int i, j, equipo, cont=0, opcion;
	
	jugador stats[100]; //Declaracion del vector de estructuras

	pf2 = fopen("sGrupoD.txt", "r"); //Abre el fichero eleccionado
	
	if(pf2 == NULL){ //Si no encuentra el fichero salta un error
		printf("No se ha encontrado el fichero");
	}
	
	//Guarda en las distintas variables lo que pone en el fichero
	while(fscanf(pf2, "%[^;]; %[^;]; %d; %d; %d; %[^\n] \n", stats[i].nombre, stats[i].posicion, &stats[i].partidos, &stats[i].goles, &stats[i].asistencias, stats[i].equipo) != EOF){
		i++;
	}

	do{ //Pregunta por uno de los equipos reiteradamente hasta dar una opcion valida 
    	printf("\n\nElige uno de los equipos para ver sus jugadores: ");
    	scanf("%d", &equipo);
	} while (equipo<1 || equipo>4);
	
	system("cls"); //Borra todo lo anterior
	printf("Estos son los jugadores del equipo elegido:\n");
	for(i=equipo*11-11; i<equipo*11; i++){ //Bucle que imprime por pantalla los jugadores el equipo elegido
		printf("\n%d. %s", cont+=1, stats[i].nombre);
	}
	
	do { //Pregunta por uno de los jugadores reiteradamente hasta dar una opcion valida 
		printf("\n\nElige a un jugador para ver sus estadisticas: ");
		scanf("%d", &opcion);
	} while (opcion>11 || opcion<1);
	
	system("cls"); //Borra todo lo anterior
	printf("Estas son las estadisticas del jugador elegido:\n");
	j = equipo*11-12+opcion; //Significado variable j
	//Imprime estadisticas del jugador seleccionado
	printf("\nNombre: %s\nPosicion: %s\nPartidos: %d\nGoles: %d\nAsistencias: %d\n", stats[j].nombre, stats[j].posicion, stats[j].partidos, stats[j].goles, stats[j].asistencias);

	fclose(pf2); //Cierra el fichero
}

void eleccionjugadorE(){
	//Declaracion de las distintas variables
	FILE *pf2;
	int i, j, equipo, cont=0, opcion;
	
	jugador stats[100]; //Declaracion del vector de estructuras

	pf2 = fopen("sGrupoE.txt", "r"); //Abre el fichero eleccionado
	
	if(pf2 == NULL){ //Si no encuentra el fichero salta un error
		printf("No se ha encontrado el fichero");
	}
	
	//Guarda en las distintas variables lo que pone en el fichero
	while(fscanf(pf2, "%[^;]; %[^;]; %d; %d; %d; %[^\n] \n", stats[i].nombre, stats[i].posicion, &stats[i].partidos, &stats[i].goles, &stats[i].asistencias, stats[i].equipo) != EOF){
		i++;
	}

	do{ //Pregunta por uno de los equipos reiteradamente hasta dar una opcion valida 
    	printf("\n\nElige uno de los equipos para ver sus jugadores: ");
    	scanf("%d", &equipo);
	} while (equipo<1 || equipo>4);
	
	system("cls"); //Borra todo lo anterior
	printf("Estos son los jugadores del equipo elegido:\n");
	for(i=equipo*11-11; i<equipo*11; i++){ //Bucle que imprime por pantalla los jugadores el equipo elegido
		printf("\n%d. %s", cont+=1, stats[i].nombre);
	}
	
	do { //Pregunta por uno de los jugadores reiteradamente hasta dar una opcion valida 
		printf("\n\nElige a un jugador para ver sus estadisticas: ");
		scanf("%d", &opcion);
	} while (opcion>11 || opcion<1);
	
	system("cls"); //Borra todo lo anterior
	printf("Estas son las estadisticas del jugador elegido:\n");
	j = equipo*11-12+opcion; //Significado variable j
	//Imprime estadisticas del jugador seleccionado
	printf("\nNombre: %s\nPosicion: %s\nPartidos: %d\nGoles: %d\nAsistencias: %d\n", stats[j].nombre, stats[j].posicion, stats[j].partidos, stats[j].goles, stats[j].asistencias);

	fclose(pf2); //Cierra el fichero
}

void eleccionjugadorF(){
	//Declaracion de las distintas variables
	FILE *pf2;
	int i, j, equipo, cont=0, opcion;
	
	jugador stats[100]; //Declaracion del vector de estructuras

	pf2 = fopen("sGrupoF.txt", "r"); //Abre el fichero eleccionado
	
	if(pf2 == NULL){ //Si no encuentra el fichero salta un error
		printf("No se ha encontrado el fichero");
	}
	
	//Guarda en las distintas variables lo que pone en el fichero
	while(fscanf(pf2, "%[^;]; %[^;]; %d; %d; %d; %[^\n] \n", stats[i].nombre, stats[i].posicion, &stats[i].partidos, &stats[i].goles, &stats[i].asistencias, stats[i].equipo) != EOF){
		i++;
	}

	do{ //Pregunta por uno de los equipos reiteradamente hasta dar una opcion valida 
    	printf("\n\nElige uno de los equipos para ver sus jugadores: ");
    	scanf("%d", &equipo);
	} while (equipo<1 || equipo>4);
	
	system("cls"); //Borra todo lo anterior
	printf("Estos son los jugadores del equipo elegido:\n");
	for(i=equipo*11-11; i<equipo*11; i++){ //Bucle que imprime por pantalla los jugadores el equipo elegido
		printf("\n%d. %s", cont+=1, stats[i].nombre);
	}
	
	do { //Pregunta por uno de los jugadores reiteradamente hasta dar una opcion valida 
		printf("\n\nElige a un jugador para ver sus estadisticas: ");
		scanf("%d", &opcion);
	} while (opcion>11 || opcion<1);
	
	system("cls"); //Borra todo lo anterior
	printf("Estas son las estadisticas del jugador elegido:\n");
	j = equipo*11-12+opcion; //Significado variable j
	//Imprime estadisticas del jugador seleccionado
	printf("\nNombre: %s\nPosicion: %s\nPartidos: %d\nGoles: %d\nAsistencias: %d\n", stats[j].nombre, stats[j].posicion, stats[j].partidos, stats[j].goles, stats[j].asistencias);

	fclose(pf2); //Cierra el fichero
}

void eleccionjugadorG(){
	//Declaracion de las distintas variables
	FILE *pf2;
	int i, j, equipo, cont=0, opcion;
	
	jugador stats[100]; //Declaracion del vector de estructuras

	pf2 = fopen("sGrupoG.txt", "r"); //Abre el fichero eleccionado
	
	if(pf2 == NULL){ //Si no encuentra el fichero salta un error
		printf("No se ha encontrado el fichero");
	}
	
	//Guarda en las distintas variables lo que pone en el fichero
	while(fscanf(pf2, "%[^;]; %[^;]; %d; %d; %d; %[^\n] \n", stats[i].nombre, stats[i].posicion, &stats[i].partidos, &stats[i].goles, &stats[i].asistencias, stats[i].equipo) != EOF){
		i++;
	}

	do{ //Pregunta por uno de los equipos reiteradamente hasta dar una opcion valida 
    	printf("\n\nElige uno de los equipos para ver sus jugadores: ");
    	scanf("%d", &equipo);
	} while (equipo<1 || equipo>4);
	
	system("cls"); //Borra todo lo anterior
	printf("Estos son los jugadores del equipo elegido:\n");
	for(i=equipo*11-11; i<equipo*11; i++){ //Bucle que imprime por pantalla los jugadores el equipo elegido
		printf("\n%d. %s", cont+=1, stats[i].nombre);
	}
	
	do { //Pregunta por uno de los jugadores reiteradamente hasta dar una opcion valida 
		printf("\n\nElige a un jugador para ver sus estadisticas: ");
		scanf("%d", &opcion);
	} while (opcion>11 || opcion<1);
	
	system("cls"); //Borra todo lo anterior
	printf("Estas son las estadisticas del jugador elegido:\n");
	j = equipo*11-12+opcion; //Significado variable j
	//Imprime estadisticas del jugador seleccionado
	printf("\nNombre: %s\nPosicion: %s\nPartidos: %d\nGoles: %d\nAsistencias: %d\n", stats[j].nombre, stats[j].posicion, stats[j].partidos, stats[j].goles, stats[j].asistencias);

	fclose(pf2); //Cierra el fichero
}

void eleccionjugadorH(){
	//Declaracion de las distintas variables
	FILE *pf2;
	int i, j, equipo, cont=0, opcion;
	
	jugador stats[100]; //Declaracion del vector de estructuras

	pf2 = fopen("sGrupoH.txt", "r"); //Abre el fichero eleccionado
	
	if(pf2 == NULL){ //Si no encuentra el fichero salta un error
		printf("No se ha encontrado el fichero");
	}
	
	//Guarda en las distintas variables lo que pone en el fichero
	while(fscanf(pf2, "%[^;]; %[^;]; %d; %d; %d; %[^\n] \n", stats[i].nombre, stats[i].posicion, &stats[i].partidos, &stats[i].goles, &stats[i].asistencias, stats[i].equipo) != EOF){
		i++;
	}

	do{ //Pregunta por uno de los equipos reiteradamente hasta dar una opcion valida 
    	printf("\n\nElige uno de los equipos para ver sus jugadores: ");
    	scanf("%d", &equipo);
	} while (equipo<1 || equipo>4);
	
	system("cls"); //Borra todo lo anterior
	printf("Estos son los jugadores del equipo elegido:\n");
	for(i=equipo*11-11; i<equipo*11; i++){ //Bucle que imprime por pantalla los jugadores el equipo elegido
		printf("\n%d. %s", cont+=1, stats[i].nombre);
	}
	
	do { //Pregunta por uno de los jugadores reiteradamente hasta dar una opcion valida 
		printf("\n\nElige a un jugador para ver sus estadisticas: ");
		scanf("%d", &opcion);
	} while (opcion>11 || opcion<1);
	
	system("cls"); //Borra todo lo anterior
	printf("Estas son las estadisticas del jugador elegido:\n");
	j = equipo*11-12+opcion; //Significado variable j
	//Imprime estadisticas del jugador seleccionado
	printf("\nNombre: %s\nPosicion: %s\nPartidos: %d\nGoles: %d\nAsistencias: %d\n", stats[j].nombre, stats[j].posicion, stats[j].partidos, stats[j].goles, stats[j].asistencias);

	fclose(pf2); //Cierra el fichero
}

void mejor11portero(){
	
	//Declaracion de las variables a utilizar
	FILE *pf3, *pf4;
	int i, cont=0;
	int opcion;
	mejor11 jugadores[100]; //Declaracion del vector de estructuras
	
	printf("\nBien! Ahora te vamos a mostrar los 8 mejores porteros:\n\n");
	
	pf3 = fopen("mejor11portero.txt", "r"); //Abre el fichero indicado

	if(pf3 == NULL){ //Si no encuentra el fichero avisa con un error
		printf("No se ha encontrado el fichero");
	}
	
	// Almacena lo que pone en el fichero en las variables indicadas
	while(fscanf(pf3, "%[^;]; %[^\n]\n", jugadores[i].nombre, jugadores[i].equipo) != EOF){
		cont++;
		i++;
	}
	for(i=0; i<cont; i++){ //Con este bucle se muestra por pantalla lo que pone en el fichero
		printf("%d.Nombre: %s \t\t%d.Club: %s\n", i+1, jugadores[i].nombre, i+1, jugadores[i].equipo);
	}
	
	fclose(pf3); //Cierra el fichero correspondiente
	
	do{ //Pide reiteradamente una opcion hasta que se da una valida
    	printf("\n\nElige una opcion para guardarla como mejor portero: ");
    	scanf("%d", &opcion); //Guarda dicha opcion
	} while (opcion<1 || opcion>8);
	
	system("cls"); //Limpia el compilador
	
	pf4 = fopen("mejor11final.txt", "w"); //Crea el fichero correspondiente
	
	if(pf4 == NULL){ //Avisa de un error si no se ha podido crear el fichero
		printf("No se ha podido crear el fichero");
	}
	
	// Escribe en el fichero el nombre del portero elegido
	fprintf(pf4, "Portero: %s \t\t\t\t Club: %s\n", jugadores[opcion-1].nombre, jugadores[opcion-1].equipo);
	fclose(pf4); //Cierra el fichero
}

void mejor11defensas(){
	//Declaracion de las variables a utilizar
	FILE *pf3, *pf4;
	int i, cont=0;
	int opcion1, opcion2, opcion3, opcion4;
	mejor11 jugadores[100]; //Declaracion del vector de estructuras
	
	printf("\nBien! Ahora te vamos a mostrar los 32 mejores defensas:\n\n");
	
	pf3 = fopen("mejor11defensas.txt", "r"); //Abre el fichero indicado
	
	if(pf3 == NULL){ //Si no encuentra el fichero avisa con un error
		printf("No se ha encontrado el fichero");
	}
	
	// Almacena lo que pone en el fichero en las variables indicadas
	while(fscanf(pf3, "%[^;]; %[^\n]\n", jugadores[i].nombre, jugadores[i].equipo) != EOF){
		cont++;
		i++;
	}
	for(i=0; i<cont; i++){ //Con este bucle se muestra por pantalla lo que pone en el fichero
		printf("%d.Nombre: %s \t\t%d.Club: %s\n", i+1, jugadores[i].nombre, i+1, jugadores[i].equipo);
	}
	fclose(pf3); //Cierra el fichero correspondiente
	do{ //Pide reiteradamente una opcion hasta que se da una valida
    	printf("\n\nElige 4 opciones para guardarla como mejores defensas: ");
    	scanf("%d %d %d %d", &opcion1, &opcion2, &opcion3, &opcion4);
	} while (opcion1<1 || opcion1>32 || opcion2<1 || opcion2>32 || opcion3<1 || opcion3>32 || opcion4<1 || opcion4>32);
	
	system("cls"); //Limpia el compilador
	
	pf4 = fopen("mejor11final.txt", "a"); //Abre el fichero correspondiente para añadir informacion
	
	if(pf4 == NULL){ //Avisa de un error si no se ha podido crear el fichero
		printf("No se ha podido crear el fichero");
	}
	
	// Escribe en el fichero el nombre de los cuatro defensas elegidos
	fprintf(pf4, "Defensa: %s \t\t\t\t Club: %s\n", jugadores[opcion1-1].nombre, jugadores[opcion1-1].equipo);
	fprintf(pf4, "Defensa: %s \t\t\t\t Club: %s\n", jugadores[opcion2-1].nombre, jugadores[opcion2-1].equipo);
	fprintf(pf4, "Defensa: %s \t\t\t\t Club: %s\n", jugadores[opcion3-1].nombre, jugadores[opcion3-1].equipo);
	fprintf(pf4, "Defensa: %s \t\t\t\t Club: %s\n", jugadores[opcion4-1].nombre, jugadores[opcion4-1].equipo);
	fclose(pf4); //Cierra el fichero correspondiente
}

void mejor11centrocampistas(){
	//Declaracion de las variables a utilizar
	FILE *pf3, *pf4;
	int i, cont=0;
	int opcion1, opcion2, opcion3;
	mejor11 jugadores[100]; //Declaracion del vector de estructuras
	
	printf("\nBien! Ahora te vamos a mostrar los 24 mejores centrocampistas:\n\n");
	
	pf3 = fopen("mejor11centrocampistas.txt", "r"); //Abre el fichero indicado
	
	if(pf3 == NULL){ //Si no encuentra el fichero avisa con un error
		printf("No se ha encontrado el fichero");
	}
	
	// Almacena lo que pone en el fichero en las variables indicadas
	while(fscanf(pf3, "%[^;]; %[^\n]\n", jugadores[i].nombre, jugadores[i].equipo) != EOF){
		cont++;
		i++;
	}
	for(i=0; i<cont; i++){ //Con este bucle se muestra por pantalla lo que pone en el fichero
		printf("%d.Nombre: %s \t\t%d.Club: %s\n", i+1, jugadores[i].nombre, i+1, jugadores[i].equipo);
	}
	fclose(pf3); //Cierra el fichero correspondiente
	
	do{ //Pide reiteradamente una opcion hasta que se da una valida
    	printf("\n\nElige 3 opciones para guardarla como mejores centrocampistas: ");
    	scanf("%d %d %d", &opcion1, &opcion2, &opcion3);
	} while (opcion1<1 || opcion1>32 || opcion2<1 || opcion2>32 || opcion3<1 || opcion3>32);
	
	system("cls"); //Limpia el compilador
	
	pf4 = fopen("mejor11final.txt", "a"); //Abre el fichero correspondiente para añadir informacion
	
	if(pf4 == NULL){ //Avisa de un error si no se ha podido crear el fichero
		printf("No se ha podido crear el fichero");
	}
	
	// Escribe en el fichero el nombre de los tres centrocampistas elegidos
	fprintf(pf4, "Centrocampista: %s \t\t\t\t Club: %s\n", jugadores[opcion1-1].nombre, jugadores[opcion1-1].equipo);
	fprintf(pf4, "Centrocampista: %s \t\t\t\t Club: %s\n", jugadores[opcion2-1].nombre, jugadores[opcion2-1].equipo);
	fprintf(pf4, "Centrocampista: %s \t\t\t\t Club: %s\n", jugadores[opcion3-1].nombre, jugadores[opcion3-1].equipo);
	fclose(pf4); //Cierra el fichero correspondiente
}

void mejor11delanteros(){
	//Declaracion de las variables a utilizar
	FILE *pf3, *pf4;
	int i, cont=0;
	int opcion1, opcion2, opcion3, eleccion;
	mejor11 jugadores[100]; //Declaracion del vector de estructuras
	
	printf("\nBien! Ahora te vamos a mostrar los 24 mejores delanteros:\n\n");
	
	pf3 = fopen("mejor11delanteros.txt", "r"); //Abre el fichero indicado
	
	if(pf3 == NULL){ //Si no encuentra el fichero avisa con un error
		printf("No se ha encontrado el fichero");
	}
	
	// Almacena lo que pone en el fichero en las variables indicadas
	while(fscanf(pf3, "%[^;]; %[^\n]\n", jugadores[i].nombre, jugadores[i].equipo) != EOF){
		cont++;
		i++;
	}
	for(i=0; i<cont; i++){ //Con este bucle se muestra por pantalla lo que pone en el fichero
		printf("%d.Nombre: %s \t\t%d.Club: %s\n", i+1, jugadores[i].nombre, i+1, jugadores[i].equipo);
	}
	fclose(pf3); //Cierra el fichero correspondiente
	
	do{ //Pide reiteradamente una opcion hasta que se da una valida
    	printf("\n\nElige 3 opciones para guardarla como mejores delanteros: ");
    	scanf("%d %d %d", &opcion1, &opcion2, &opcion3);
	} while (opcion1<1 || opcion1>32 || opcion2<1 || opcion2>32 || opcion3<1 || opcion3>32);
	
	system("cls"); //Limpia el compilador
	
	pf4 = fopen("mejor11final.txt", "a"); //Abre el fichero correspondiente para añadir informacion
	
	if(pf4 == NULL){ //Avisa de un error si no se ha podido crear el fichero
		printf("No se ha podido crear el fichero");
	}
	
	// Escribe en el fichero el nombre de los tres delanteros elegidos
	fprintf(pf4, "Delantero: %s \t\t\t\t Club: %s\n", jugadores[opcion1-1].nombre, jugadores[opcion1-1].equipo);
	fprintf(pf4, "Delantero: %s \t\t\t\t Club: %s\n", jugadores[opcion2-1].nombre, jugadores[opcion2-1].equipo);
	fprintf(pf4, "Delantero: %s \t\t\t\t Club: %s\n", jugadores[opcion3-1].nombre, jugadores[opcion3-1].equipo);
	fclose(pf4); //Cierra el fichero correspondiente
	
	system ("cls"); //Limpia el compilador
	
	printf("Te gustaria ver tu eleccion del mejor 11?\n\n1. Si\n2. No\n\n");
	
	do { //Pregunta reiteradamente una de las dos opciones hasta dar una valida
		printf("Elige entre 1 o 2: ");
		scanf("%d", &eleccion); //Guarda el valor de dicha eleccion
	} while (eleccion<1 || eleccion>2);

	switch (eleccion){ //Comienza el switch
		case 1: //Comienza la ejecucion del case 1
			printf("Visita el fichero 'mejor11final.txt' en la carpeta del programa y podras verlo!");
		break; //Sale del case 1
		
		case 2: //Comienza la ejecucion del case 2
			printf("Vaya... Tu eleccion del mejor 11 se ha guardado en el fichero 'mejor11final.txt' en la carpeta del programa y estara disponible en cualquier momento!");
		break; //Sale del case 2
	}
}

