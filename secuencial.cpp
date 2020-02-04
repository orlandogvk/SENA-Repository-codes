// Busqueda secuencial

//a[5] ={3,4,2,1,5}; dato=4;

#include <iostream>
#include <conio.h>


using namespace std;

int main() {

	int a[]={3,4,2,1,5};
	int i,dato;
	bool band=false;
	//Ingresar un dato desde el teclado-Enter a data from the keyboard
	cout<<"Ingrese un dato a buscar: ";
	cin>>dato;
	//Busqueda secuencial
	
	i=0;
	while((band==false)&&(i<5)){
		if(a[i]==dato){
			band=true;
		}
		i++;
	}

	if(band!=true){
		cout<<"El numero a buscar no existe en el arreglo"<<endl;
	}else{
		cout<<"El numero a sido encontrado en la posicion: "<<i-1<<endl;
	}


	getch();
	return 0;
}
