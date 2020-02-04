//Comparar cadenas - Función strcmp();
#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	
	char palabra1[50];
	char palabra2[50];
	char palabra3[50];
	cout<<"Ingrese la primera palabra: ";
	cin.getline(palabra1,50,'\n');
	cout<<"Ingrese la segunda palabra: ";
	cin.getline(palabra2,50,'\n');
	if(strcmp(palabra1,palabra2)==0){
		cout<<"Son iguales"<<endl;
	}else if(strcmp(palabra1,palabra2)>0){
			cout<<palabra1<<" es mayor"<<endl;
     	}else{
     		 cout<<palabra2<<" es mayor"<<endl;
			 }
     
     strcpy(palabra3,palabra2);
     
	//concatenar una cadena con otra  -Función strcat();
	strcat(palabra3,palabra1);
	cout<<palabra3<<endl;
	


	
	getch();
	return 0;
}
