//Menu operaciones con funciones
#include <iostream>
#include <conio.h>
#include <windows.h> //sirve para el sleep esperar un tiempo
#include <string.h>

using namespace std;
//Prototipos de funciones 
void opcion_menu();
/*void captura_num();*/
void ingresoDatos();
void ingresoDatosLaborales();
void ingresoDatosNomina();
/*
int resta(int x, int y);
int multiplicacion(int x, int y);
float division(float x, float y);

               */
//funcion pricipal main
string nom,dir,email,cargo,depto;
int opc,doc,tel,salario,nh,ho,hed,hen,hedDomFest,henDomFest,hoDomFest;
int main(){
	
	retornar: //con la opcion goto lo retornamos al menu principal
	system("cls");
		
	do{
		
		opcion_menu();
		system("cls");//SYSSTEM se utiliza para que no se repita la misma pregunta del menu, limpiair
		
	}while ((opc<1)||(opc>5));
	
	
	switch (opc){
		case 1: ingresoDatos();
				getch();
				goto retornar;
				
		case 2: ingresoDatosLaborales();
				getch();
				goto retornar;
				
		case 3: ingresoDatosNomina();
				getch();
				goto retornar;
				
		case 4: liquidacionNomina(string nom,int salario,int hed, int hen,int ho);
				getch();
				goto retornar;
				
		case 5: cout<<"\n\n Proceso finalizado....";
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
cout<<"\n1.Ingreso de datos personales";
cout<<"\n2.Ingreso de datos laborales";
cout<<"\n3.Ingreso de datos de nomina";
cout<<"\n4.Liquidacion de nomina";
cout<<"\n5.Salir";

cout<<"\n\n Digite una opcion entre (1-5):";cin>>opc;
}

void ingresoDatos(){
	cin.ignore();
	cout<<"Ingrese su documento: ";cin>>doc;
	cin.ignore();
	cout<<"Ingrese su nombre: ";getline(cin,nom,'\n');
	cin.ignore();
    cout<<"Ingrese su direccion: ";getline(cin,dir,'\n');
    cin.ignore();
	cout<<"Ingrese su telefono: ";cin>>tel;	
	cin.ignore();
	cout<<"Ingrese su correo: ";getline(cin,email,'\n');	
}

void ingresoDatosLaborales(){
	cin.ignore();
	cout<<"Ingrese su cargo: ";getline(cin,cargo,'\n');
	cout<<"Ingrese su departamento: ";getline(cin,depto,'\n');
	cout<<"Ingrese salario: ";cin>>salario;

}

void ingresoDatosNomina(){
	    cout<<"Ingrese horas ordinarias: ";cin>>ho;
	    cout<<"Ingrese horas extras diurnas: ";cin>>hed;
	    cout<<"Ingrese horas extras nocturnas: ";cin>>hen;
	    cout<<"Ingrese horas ordinaria diurnas dominical/festivo: ";cin>>hoDomFest;
	    cout<<"Ingrese horas extras diurnas dominical/festivo: ";cin>>hedDomFest;
	    cout<<"Ingrese horas extras nocturnas dominical/festivo: ";cin>>henDomFest;
	    
}

void liquidacionNomina(string nom,int salario,int hed, int hen,int ho){
	int at,salbas,hora_o_diurna,auxhd,auxhn,rec_noc;

	
		hora_o_diurna=(salario/240);
		
		cout<<"Hora ordinaria diurna: "<<hora_o_diurna;
	    auxhd=(hora_o_diurna*1.25)*hed;   
     	cout<<"Hora extra diurna: "<<auxhd;
     	auxhn=(hora_o_diurna*1.75)*hen;   
     	cout<<"Hora extra nocturna: "<<auxhn;
  
     	
     	
     	
    if(salario<1775000){
		at=102854;
		salbas=salario+at;
	}else{
		salbas=salario;
	}
     	
	
}




