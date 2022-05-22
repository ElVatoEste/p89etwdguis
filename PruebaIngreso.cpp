// parte de Manuel, Almacen

#include "anexos.h"
#include <fstream>

using namespace std;

void crear_usuario ();
void leer_usuario ();

//
//

void crear_usuario(){
	
	ofstream archivo("usuarios.csv", ios::app);
	
	if(!archivo){
		cout<<"Ha sucedido un error inesperado, verifique si existe el documento y reinicie el programa"<<endl;
	}
	else {
		string Nombre, Apellido, Email;
		int Tarjeta;	
		
		cout<<"Ingrese su nombre: ";
		getline(cin, Nombre);
		
		cout<<"Ingrese su apellido: ";
		getline(cin, Apellido);
		
		cout<<"Ingrese su correo: ";
		getline(cin, Email);
		
		fflush(stdin); //Limpia el buffer de lectura para no mezclar los tipos de valores
		
		cout<<"Ingrese su tarjeta: ";
		cin>> Tarjeta;
		
		archivo<<Nombre<<";"<<Apellido<<";"<<Email<<";"<<Tarjeta<<endl;
		archivo.close();
	}
}

void leer_usuario(){
	
	ifstream archivo("usuarios.csv", ios::in);

	if(!archivo){
		cout<<"Ha sucedido un error inesperado, verifique si existe el documento y reinicie el programa"<<endl<<endl;
	}else{
		
		
		string registro;
		while(std::getline(archivo, registro)){
			
			cout << registro << endl;
		}
		
		archivo.close();
		
	}
}

int main (){
	
	crear_usuario();
	leer_usuario();
	return 0;
}
