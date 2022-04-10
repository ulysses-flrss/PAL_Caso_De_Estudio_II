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
    void validacionVentas(float ventas);
    float ventasAnualesLomas ();
    float promedioSegundoTrimestre ();
    void promedioSuperadoTercer ();
    void menoresVentas ();
    void respuestas();
    
//--------------------------

struct Agencia {
    float ventasT1;
    float ventasT2;
    float ventasT3;
    float ventasT4;

    Agencia() {
        float ventasT1 = 0;
        float ventasT2 = 0;
        float ventasT3 = 0;
        float ventasT4 = 0;
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
    //float ventas[NFILAS][NCOL];
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
                
                    cout<<"AGENCIA PERISUR\n";
                do {
                    cout <<"Ingrese las ventas totales (en dólares) del Trimestre 1:\n";cin>>perisur.ventasT1;
                    validacionVentas(perisur.ventasT1);
                } while (perisur.ventasT1 <= 0);

                do {
                    cout <<"Ingrese las ventas totales (en dólares) del Trimestre 2:\n";cin>>perisur.ventasT2;
                    validacionVentas(perisur.ventasT2);
                } while (perisur.ventasT2 <= 0);

                do {
                    cout <<"Ingrese las ventas totales (en dólares) del Trimestre 3:\n";cin>>perisur.ventasT3;
                    validacionVentas(perisur.ventasT3);
                } while (perisur.ventasT3 <= 0);

                do {
                    cout <<"Ingrese las ventas totales (en dólares) del Trimestre 4:\n";cin>>perisur.ventasT4;
                    validacionVentas(perisur.ventasT4);
                } while (perisur.ventasT4 <= 0);
                    

            subMenu_registrarVentas();
            }
			break;
			
			case 2: {
				
                    cout<<"AGENCIA VALLE\n";
                do {
                    cout <<"Ingrese las ventas totales (en dólares) del Trimestre 1:\n";cin>>valle.ventasT1;
                    validacionVentas(valle.ventasT1);
                } while (valle.ventasT1 <= 0);

                do {
                    cout <<"Ingrese las ventas totales (en dólares) del Trimestre 2:\n";cin>>valle.ventasT2;
                    validacionVentas(valle.ventasT2);
                } while (valle.ventasT2 <= 0);

                do {
                    cout <<"Ingrese las ventas totales (en dólares) del Trimestre 3:\n";cin>>valle.ventasT3;
                    validacionVentas(valle.ventasT3);
                } while (valle.ventasT3 <= 0);

                do {
                    cout <<"Ingrese las ventas totales (en dólares) del Trimestre 4:\n";cin>>valle.ventasT4;
                    validacionVentas(valle.ventasT4);
                } while (valle.ventasT4 <= 0);
                    

            subMenu_registrarVentas();
            }
			break;
			
			case 3: {
				
                    cout<<"AGENCIA LOMAS\n";
                do {
                    cout <<"Ingrese las ventas totales (en dólares) del Trimestre 1:\n";cin>>lomas.ventasT1;
                    validacionVentas(lomas.ventasT1);
                } while (lomas.ventasT1 <= 0);

                do {
                    cout <<"Ingrese las ventas totales (en dólares) del Trimestre 2:\n";cin>>lomas.ventasT2;
                    validacionVentas(lomas.ventasT2);
                } while (lomas.ventasT2 <= 0);

                do {
                    cout <<"Ingrese las ventas totales (en dólares) del Trimestre 3:\n";cin>>lomas.ventasT3;
                    validacionVentas(lomas.ventasT3);
                } while (lomas.ventasT3 <= 0);

                do {
                    cout <<"Ingrese las ventas totales (en dólares) del Trimestre 4:\n";cin>>lomas.ventasT4;
                    validacionVentas(lomas.ventasT4);
                } while (lomas.ventasT4 <= 0);
            subMenu_registrarVentas();
            }
			break;
			
			case 4: {
				main();
            }
			break;
		}




}

void verRegistro () {
    respuestas();
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

void validacionVentas (float ventas) {
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
        cout << "\n¿Cuál fue el total anual de ventas de la agencia Lomas?\n";
        cout<<"$"<< ventasAnualesLomas()<<endl<<endl;
        
        cout << "¿Cuál fue el promedio de ventas de Carro Fácil en el segundo trimestre del año?\n";
        cout<<"$"<<promedioSegundoTrimestre()<<endl<<endl;

        cout << "¿Cuáles agencias superaron el promedio de ventas del tercer trimestre?\n";
        promedioSuperadoTercer();
        cout<<endl<<endl;

        cout << "¿En qué trimestre se registraron las menores ventas del año, considerando a todas las agencias?\n";
        menoresVentas();
        cout<<endl<<endl;
    }


float ventasAnualesLomas () {
    return lomas.ventasT1 + lomas.ventasT2 + lomas.ventasT3 + lomas.ventasT4;

}

float promedioSegundoTrimestre () {
    return (perisur.ventasT2 + valle.ventasT2 + lomas.ventasT2)/3;
}

void promedioSuperadoTercer () {
    float promedioTr3 = (perisur.ventasT3 + valle.ventasT3 + lomas.ventasT3)/3;

    if (perisur.ventasT3 > promedioTr3) {
        cout<<"- Perisur \n";
    } else {
        cout<<"-\n";
    }
    
    if (valle.ventasT3 > promedioTr3) {
        cout<<"- Valle \n";
    }  else {
        cout<<"-\n";
    } 
    
    if (lomas.ventasT3 > promedioTr3) {
        cout<<"- Lomas \n";
    }  else {
        cout<<"-";
    }
}

void menoresVentas () {
    float sumaTr1 = perisur.ventasT1 + valle.ventasT1 + lomas.ventasT1;
    float sumaTr2 = perisur.ventasT2 + valle.ventasT2 + lomas.ventasT2;
    float sumaTr3 = perisur.ventasT3 + valle.ventasT3 + lomas.ventasT3;
    float sumaTr4 = perisur.ventasT4 + valle.ventasT4 + lomas.ventasT4;


    if (sumaTr1 < sumaTr2 && sumaTr1 < sumaTr3 && sumaTr1 < sumaTr4) {
        cout<<"Trimestre 1";
    } else if (sumaTr2 < sumaTr1 && sumaTr2 < sumaTr3 && sumaTr2 < sumaTr4) {
        cout<<"Trimestre 2";
    } else if (sumaTr3 < sumaTr1 && sumaTr3 < sumaTr2 && sumaTr3 < sumaTr4) {
        cout<<"Trimestre 3";
    } else if (sumaTr4 < sumaTr1 && sumaTr4 < sumaTr2 && sumaTr4 < sumaTr3) {
        cout<<"Trimestre 4";
    } else {
        cout<<"Todas tiene la misma suma o son iguales";
    }
}