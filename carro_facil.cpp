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
#ifdef __linux__
    #define OS 0
#elif _WIN32
    #define OS 1
#else
    #define OS 2
#endif
using namespace std;

//Declaracion de funciones
    void ingresoRegistro ();
    void validacionOpciones (int opcionElegida, int primeraOpcion, int ultimaOpcion);
    bool isWindows ();
    void registroVentas ();
    
//--------------------------
int main () {

    setlocale(LC_ALL, "spanish");
    int year;
    string agenciaNombre[3] = {"Perisur", "Valle", "Lomas"};
    float ventas[4][3];
    int menuOpc;


	do {
        cout<<"\nBienvenido al sistema de Carro Facil.\n";
		cout<<"1- Ingresar Registros de Ventas\n";
		cout<<"2- Ver Registro de Ventas\n";
		cout<<"3- Salir\n";
	    cout<<"Seleccione la opción requerida: \n";
	    menuOpc = getche();
        cout<<endl;
        cout<<menuOpc;
		
        if(!(menuOpc)){
        	validacionOpciones(menuOpc, 1, 3);
        } else if (menuOpc == 3) {
            break;
        } else {
            validacionOpciones(menuOpc, 1,3);
			if (menuOpc == 1) ingresoRegistro();
            else if (menuOpc == 2) registroVentas();
        }
    } while (menuOpc < 1 || menuOpc > 3);
}

void ingresoRegistro () {
    cout<<"Entrando al INGRESO DE REGISTRO DE VENTAS";
}

void registroVentas () {
    cout<<"Entrando a la VISUALIZACION DE REGISTRO DE VENTAS";
}
	
	
	

	

void validacionOpciones (int opcionElegida, int primeraOpcion, int ultimaOpcion) {
if (!(opcionElegida) || (opcionElegida < primeraOpcion || opcionElegida > ultimaOpcion)) {
            cin.clear();
            cin.ignore();
            cout<<"ERROR: OPCION INVALIDA \n";
            cout<<"Presione ENTER e inténtelo de Nuevo...\n";
                
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
    if (OS == 1) {
        return true;
    } else {
        return false;
    }
}



