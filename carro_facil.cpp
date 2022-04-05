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

void validacionOpciones (int opcionElegida, int primeraOpcion, int ultimaOpcion);
bool isWindows ();
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
		cout<<"3- Salir'\n";
	    cout<<"Seleccione la opci?n requerida: \n";
	    cin>>menuOpc;
		
        if(!(menuOpc)){
        	validacionOpciones(menuOpc, 1, 3);
        } else {
            validacionOpciones(menuOpc, 1,3);
			//menu(menuOpc);
        }

        
    } while (menuOpc < 1 || menuOpc > 6 || menuOpc != 6);
}
	
	
	

	

void validacionOpciones (int opcionElegida, int primeraOpcion, int ultimaOpcion) {
    if (!(opcionElegida)) {
            cin.clear();
            cin.ignore();
            cout<<"ERROR: OPCI?N INV?LIDA \n";
            cout<<"Presione ENTER e int?ntelo de Nuevo...\n";

            if (isWindows()) {
                system("pause");
                system("cls");
            } else {
                cin.ignore();
                getch();
                system("clear");
            }
        } else if (opcionElegida < primeraOpcion || opcionElegida > ultimaOpcion){
            cin.clear();
            cin.ignore();
            cout<<"ERROR: OPCI?N INV?LIDA \n";
            cout<<"Presione ENTER e int?ntelo de Nuevo...\n";

            if (isWindows()) {
                system("pause");
                system("cls");
            } else {
                getch();
                system("clear");
            }
            //HASTA AQUI-----
        } 
}

bool isWindows () {
    if (OS == 0) {
        return false;
    } else if(OS == 1) {
        return  true;
    }
}



