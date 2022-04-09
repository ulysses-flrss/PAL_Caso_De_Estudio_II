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
    void registrarVentas(int opcion);
    void verRegistro ();
    void variables();
    void menu();
    void subMenu_registrarVentas ();
    void validacionVentas(double ventas);
    double ventasAnualesLomas ();
    double promedioSegundoTrimestre ();
    void promedioSuperadoTercer ();
    void menoresVentas ();
    
//--------------------------

struct Agencia {
    double ventasT1;
    double ventasT2;
    double ventasT3;
    double ventasT4;

    Agencia() {
        double ventasT1 = 0;
        double ventasT2 = 0;
        double ventasT3 = 0;
        double ventasT4 = 0;
    } 
    
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
}   perisur,
    valle,
    lomas;

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
			if (menuOpc == 1) subMenu_registrarVentas();
            else if (menuOpc == 2) verRegistro();
        }
    } while (menuOpc < 1 || menuOpc > 3);
}

void subMenu_registrarVentas(){
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
		} else {
            validacionOpciones(opc, 1, 4);
            registrarVentas(opc);
        }	
        } while (opc < 1 || opc > 4);
}

void registrarVentas(int opcion) {
    switch (opcion){
			case 1: {
                
                do {
                    cout<<"AGENCIA PERISUR\n";
                    cout <<"Ingrese las ventas totales (en dólares) del Trimestre 1:\n";cin>>perisur.ventasT1;
                    validacionVentas(perisur.ventasT1);
                } while (perisur.ventasT1 <= 0);

                do {
                    cout<<"AGENCIA PERISUR\n";
                    cout <<"Ingrese las ventas totales (en dólares) del Trimestre 2:\n";cin>>perisur.ventasT2;
                    validacionVentas(perisur.ventasT2);
                } while (perisur.ventasT2 <= 0);

                do {
                    cout<<"AGENCIA PERISUR\n";
                    cout <<"Ingrese las ventas totales (en dólares) del Trimestre 3:\n";cin>>perisur.ventasT3;
                    validacionVentas(perisur.ventasT3);
                } while (perisur.ventasT3 <= 0);

                do {
                    cout<<"AGENCIA PERISUR\n";
                    cout <<"Ingrese las ventas totales (en dólares) del Trimestre 4:\n";cin>>perisur.ventasT4;
                    validacionVentas(perisur.ventasT4);
                } while (perisur.ventasT4 <= 0);
                    

            }
			break;
			
			case 2: {
				
                do {
                    cout<<"AGENCIA VALLE\n";
                    cout <<"Ingrese las ventas totales (en dólares) del Trimestre 1:\n";cin>>valle.ventasT1;
                    validacionVentas(valle.ventasT1);
                } while (valle.ventasT1 <= 0);

                do {
                    cout<<"AGENCIA VALLE\n";
                    cout <<"Ingrese las ventas totales (en dólares) del Trimestre 2:\n";cin>>valle.ventasT2;
                    validacionVentas(valle.ventasT2);
                } while (valle.ventasT2 <= 0);

                do {
                    cout<<"AGENCIA VALLE\n";
                    cout <<"Ingrese las ventas totales (en dólares) del Trimestre 3:\n";cin>>valle.ventasT3;
                    validacionVentas(valle.ventasT3);
                } while (valle.ventasT3 <= 0);

                do {
                    cout<<"AGENCIA VALLE\n";
                    cout <<"Ingrese las ventas totales (en dólares) del Trimestre 4:\n";cin>>valle.ventasT4;
                    validacionVentas(valle.ventasT4);
                } while (valle.ventasT4 <= 0);
                    

            }
			break;
			
			case 3: {
				
                do {
                    cout<<"AGENCIA LOMAS\n";
                    cout <<"Ingrese las ventas totales (en dólares) del Trimestre 1:\n";cin>>lomas.ventasT1;
                    validacionVentas(lomas.ventasT1);
                } while (lomas.ventasT1 <= 0);

                do {
                    cout<<"AGENCIA LOMAS\n";
                    cout <<"Ingrese las ventas totales (en dólares) del Trimestre 2:\n";cin>>lomas.ventasT2;
                    validacionVentas(lomas.ventasT2);
                } while (lomas.ventasT2 <= 0);

                do {
                    cout<<"AGENCIA LOMAS\n";
                    cout <<"Ingrese las ventas totales (en dólares) del Trimestre 3:\n";cin>>lomas.ventasT3;
                    validacionVentas(lomas.ventasT3);
                } while (lomas.ventasT3 <= 0);

                do {
                    cout<<"AGENCIA LOMAS\n";
                    cout <<"Ingrese las ventas totales (en dólares) del Trimestre 4:\n";cin>>lomas.ventasT4;
                    validacionVentas(lomas.ventasT4);
                } while (lomas.ventasT4 <= 0);
            }
			break;
			
			case 4: {
				main();
            }
			break;
		}
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

void validacionVentas (double ventas) {
    if (!(ventas) && ventas != 0) {
        cin.ignore();
        cin.clear();
        ventas = -1;
    } 
    
    if (ventas <= 0 ) {
        cout<<"\nERROR: El número NO debe ser: \n -Menor o igual a 0 \n -Una letra o caracter alfanumerico\n\n Presione ENTER para intentarlo de nuevo\n";
        cin.ignore();
        cin.clear();
        if (isWindows()) {
            system("pause");
            system("cls");
        } else {
            getch();
            system("clear");
        }
    } 
}

void respuestas(){
        cout << "¿Cuál fue el total anual de ventas de la agencia Lomas?\n";
        cout<< ventasAnualesLomas()<<endl<<endl;
        
        cout << "¿Cuál fue el promedio de ventas de Carro Fácil en el segundo trimestre del año?\n";
        cout<<promedioSegundoTrimestre()<<endl<<endl;

        cout << "¿Cuáles agencias superaron el promedio de ventas del tercer trimestre?\n";
        promedioSegundoTrimestre();

        cout << "¿En qué trimestre se registraron las menores ventas del año, considerando a todas las agencias?\n";
        menoresVentas();
    }


double ventasAnualesLomas () {
    return lomas.ventasT1 + lomas.ventasT2 + lomas.ventasT3 + lomas.ventasT4;

}

double promedioSegundoTrimestre () {
    return (perisur.ventasT2 + valle.ventasT2 + lomas.ventasT2)/3;
}

void promedioSuperadoTercer () {
    double promedioTr3 = (perisur.ventasT3 + valle.ventasT3 + lomas.ventasT3)/3

    if (perisur.ventasT3 > promedioTr3) {

    } else if (valle.ventasT3 > promedioTr3) {

    } else if (lomas.ventasT3 > promedioTr3) {

    }
}

void menoresVentas () {

}