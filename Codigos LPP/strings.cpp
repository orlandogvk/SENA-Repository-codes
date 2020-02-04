#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
//Funcion strlen()----->Devuelve un valor entero
int main(){
//	char palabra[]="Alejandro";
//	char palabra2[]={'A','l','e','j','a','n','d','r','o'};
	char cadena[50];
	char cadena1[30];
	char arreglo[30];
	char nombre[]="Alejandro";
	char nombre2[20];
	cout<<"Ingrese una cadena: ";
	//gets(nombre);
	cin.getline(cadena,50,'\n');
	if(strlen(cadena)>10){
		cout<<cadena<<endl;
	}
	
	
//	cout<<palabra<<endl;
//	cout<<palabra2<<endl;

//Copiar el contenido de una cadena a otra---->strcpy()

//	strcpy(nombre2,nombre);
//	cout<<nombre2<<endl;
	cout<<"Ingrese una nueva cadena: ";
	cin.getline(cadena1,30,'\n');
	strcpy(arreglo,cadena1);
	cout<<"Nueva cadena: "<<arreglo<<endl;
	getch();
	return 0;
}
