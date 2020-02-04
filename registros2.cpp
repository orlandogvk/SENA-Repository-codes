#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;

struct Persona{
	char nombre[20];
	int edad;
}persona1;
//persona1 ={"Orlando",20},
//persona2 ={"Pedro",18};
	
	
int main(){
	cout<<"Nombre: ";
	cin.getline(persona1.nombre,20,'\n');
	cout<<"Edad: ";
	cin>>persona1.edad;
	cout<<"Nombre 1: "<<persona1.nombre<<endl;
	cout<<"Edad 1: "<<persona1.edad<<endl;
	
	//cout<<"\nNombre 2: "<<persona2.nombre<<endl;
	//cout<<"Edad 2: "<<persona2.edad<<endl;
	
	
	
	getch();
	return 0;	
}
