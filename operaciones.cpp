//Menu operaciones con funciones
#include <iostream>
#include <conio.h>
#include <windows.h> //sirve para el sleep esperar un tiempo


using namespace std;
//Prototipos de funciones 
void opcion_menu();
void captura_num();
int suma(int x, int y);
int resta(int x, int y);
int multiplicacion(int x, int y);
float division(float x, float y);
int numbers();
int opc,n1,n2;
string nombre;

//funcion pricipal main
int main(){
	
	retornar: //con la opcion goto lo retornamos al menu principal
	system("cls");
		
	do{
		
		opcion_menu();
		system("cls");//SYSSTEM se utiliza para que no se repita la misma pregunta del menu, limpiair
		
	}while ((opc<1)||(opc>5));
	
	
	switch (opc){
		case 1: captura_num();
				cout<<"La suma de los numeros es: "<<suma(n1,n2);
				getch();
				goto retornar;
				
		case 2: captura_num();
				cout<<"\nLa resta de los numeros es: "<<resta(n1,n2);
				getch();
				goto retornar;
						
		case 3: captura_num();
				cout<<"\nLa multiplicacion de los numeros es: "<<multiplicacion(n1,n2);
				getch();
				goto retornar;
				
		case 4:	captura_num();
		        cout<<"\nLa division de los numeros es: "<<division(n1,n2);
				getch();
				goto retornar;
				
		case 5: cout<<"\n\n Hasta pronto perras....";
				Sleep(1000);
				break;
				
		defaul : "\n\n ----El Valor No Es Valido----";
				goto retornar;
				getch();
	} 

	
	return 0;
}

void opcion_menu(){

cout<<"\n\n---- Menu ----";
cout<<"\n1.Suma";
cout<<"\n2.Resta";
cout<<"\n3.Multiplicacion";
cout<<"\n4.Division";
cout<<"\n5.Salir";

cout<<"\n\n Digite una opcion entre (1-5):";cin>>opc;
}
int numbers(){
	int num;
	cout<<"ingrese un numero: ";
	cin>>num;
	return num;
}
void captura_num(){
cin.ignore();
cout<<"Ingrese su nombre: ";getline(cin,nombre,'\n');
cout<<"Ingrese el primer numero: ";cin>>n1;
cout<<"Ingrese el segundo numero: ";cin>>n2;

}

int suma(int x, int y){
	int sumar = x+y;
	return sumar;
}

int resta(int x, int y){
	int restar = x-y;
	return restar;
	
}
int multiplicacion(int x, int y){
	int multiplicar = x*y;
	return multiplicar;
}
float division(float x, float y){
	float dividir = x/y;
	return dividir;
}
