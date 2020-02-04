//Clases en C++

#include<iostream>
#include<stdlib.h>

using namespace std;

class Persona{
	private:  //Atributos
		int edad;
		string nombre;
	public:  //metodos
		Persona(int,string);   //Constructor
		void leer();
		void correr();
};
//constructor, inicializa los atributos
Persona::Persona(int _edad,string _nombre){
	edad=_edad;
	nombre=_nombre;
}

void Persona::leer(){
	cout<<"Soy "<<nombre<<" y estoy leyendo un libro"<<endl;
}

void Persona::correr(){
	cout<<"Soy "<<nombre<<", estoy corriendo una maraton y tengo "<<edad<<" anios"<<endl;
}

int main(){
	int edad,n;
	string nom;

	
	cout<<"Ingrese es su nombre: ";
	cin>>nom;
	cout<<"Ingrese es su edad: ";
	cin>>edad;
	Persona p1 = Persona(edad,nom);
	p1.leer();
	cout<<"Ingrese es su nombre: ";
	cin>>nom;
	cout<<"Ingrese es su edad: ";
	cin>>edad;
	Persona p2(edad,nom);
	p2.correr();	
	system("pause");
	return 0;
}
