/*
La empresa automotriz Carro Fácil tiene 3 agencias y cuenta con la información acerca de los montos (en dólares) de las ventas trimestrales de automóviles alcanzadas el por año por cada una de éstas. A partir de estos datos la empresa construyó la siguiente matriz de ventas:
Agenc¡a>>	Perisur	Valle	Lomas
Trimestre 1			
Trimestre 2			
Trimestre 3			
Trimestre 4			
El programa pedir el año de ventas a ingresar y luego permite ingresar apropiadamente los valores de la matriz anterior. Luego, debe mostrar las respuestas a las siguientes preguntas:
a)	¿Cuál fue el total anual de ventas de la agencia Lomas?
b)	¿Cuál fue el promedio de ventas de Carro Fácil en el segundo trimestre del año?
c)	¿Cuáles agencias superaron el promedio de ventas del tercer trimestre?
d)	¿En qué trimestre se registraron las menores ventas del año, considerando a todas las agencias?
Estas preguntas deben accederse por medio de un menú, y una opción para volver a ingresar los datos y salirse.
*/

#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#ifdef __linux__
    #define OS 0
#elif _WIN32
    #define OS 1
#else
    #define OS 2
#endif
using namespace std;

//Declaracion de funciones
    void validacionOpciones (int opcionElegida, int primeraOpcion, int ultimaOpcion);
    bool isWindows ();
    void registrarVentas(/*double ventas[][3], int, int, char agencias[4], int*/);
    void verRegistro ();
    void variables();
    void menu();
    
//--------------------------

struct Agencia {
    char nombre [15];
    double ventasT1;
    double ventasT2;
    double ventasT3;
    double ventasT4;

    Agencia() {
        char nombre = ' ';
        double ventasT1 = 0;
        double ventasT2 = 0;
        double ventasT3 = 0;
        double ventasT4 = 0;
    }//Como quieras xD,va pverao, quiero hacer una pruebita xD
    
    // métodos
    void ingresarRegistro(char nombreA[]){
        //nombre = nombreA; //No sé xq sale así el nombre xD
        cout << "Ingrese en dólares, las ventas totales del primer trimestre del año: $";
        cin >> ventasT1;
        cout << "Ingrese en dólares, las ventas totales del segundo trimestre del año: $";
        cin >> ventasT2;
        cout << "Ingrese en dólares, las ventas totales del tercer trimestre del año: $";
        cin >> ventasT3;
        cout << "Ingrese en dólares, las ventas totales del cuarto trimestre del año: $";
        cin >> ventasT4;
    }
};

int main () {
    setlocale(LC_ALL, "spanish");
	variables();
    menu();
}

void variables () {
    bool existen = false;
    const int NFILAS = 4;
    const int NCOL = 3;
    const int nspace = 3;
    //double ventas[NFILAS][NCOL];
    int menuOpc;
}

void menu () {
    int menuOpc;
    const int nspace = 4;
    
    do {
        cout<<"\nBienvenido al sistema de Carro Facil.\n";
		cout<<"1- Ingresar Registros de Ventas\n";
		cout<<"2- Ver Registro de Ventas\n";
		cout<<"3- Salir\n";
	    cout<<"Seleccione la opción requerida: \n";
	    cin>>menuOpc;
		
        if(!(menuOpc)){
        	validacionOpciones(menuOpc, 1, 3);
        } else if (menuOpc == 3) {
            break;
        } else {
            validacionOpciones(menuOpc, 1,3);
			if (menuOpc == 1) registrarVentas();
            else if (menuOpc == 2) verRegistro();
        }
    } while (menuOpc < 1 || menuOpc > 3);
}

void registrarVentas(/*double ventas[][3], int nfilas, int ncol, char agencias[3], int nspace*/){
	int opc;
	do{
		cout << "?En qu? agencia desea ingresar los datos?\n" << endl;
		cout << "1.  Agencia Perisur" << endl;
		cout << "2.  Agencia Valle" << endl;
		cout << "3.  Agencia Lomas" << endl;
		cout << "4. Regresar al menú anterior" << endl;
		cout << "Ingrese la opci?n que desee" << endl;
		cin >> opc;
		
		if(!(opc)){
			validacionOpciones(opc, 1, 4);
		}
		switch (opc){
			case 1: {
				Agencia perisur;
				cout << "Ingrese las ventas totales (en dólares) del Trimestre 1:\n";cin>>perisur.ventasT1;
				cout << "\n\nVentas totales: "<<perisur.ventasT1;

            }
			break;
			
			case 2: {
				Agencia valle;
            }
			break;
			
			case 3: {
				Agencia lomas;

            }
			break;
			
			case 4: {
				main();
            }
			break;
		}
	}while (opc < 1 || opc > 4);
		
}

void verRegistro () {
    cout<<"Entrando al INGRESO DE REGISTRO DE VENTAS";
}

void validacionOpciones (int opcionElegida, int primeraOpcion, int ultimaOpcion) {
	if (!(opcionElegida) || (opcionElegida < primeraOpcion) || (opcionElegida > ultimaOpcion)) {
        cin.clear();
        cin.ignore();
        cout<<"ERROR: OPCION INVALIDA \n";
        cout<<"Presione ENTER e int?ntelo de Nuevo...\n";
                
        cin.ignore();
        if (isWindows()) {
            system("pause");
            system("cls");
        } else {
            getch();
            system("clear");
        }
    } 
}

bool isWindows () {
    if (OS == 0) {
        return false;
    } else if(OS == 1) {
        return  true;
    }
}
void respuestas(){
        cout << "¿Cuál fue el total anual de ventas de la agencia Lomas?\n\n";
        cout << "¿Cuál fue el promedio de ventas de Carro Fácil en el segundo trimestre del año?\n\n";
        cout << "¿Cuáles agencias superaron el promedio de ventas del tercer trimestre?\n\n";
        cout << "¿En qué trimestre se registraron las menores ventas del año, considerando a todas las agencias?\n\n";
    }