#include<iostream>
#include<stdlib.h>

using namespace std;

class Rectangulo{
	private:
		int largo,ancho;
	public:
		Rectangulo(int,int);
		void area();
		void perimetro();
};

Rectangulo::Rectangulo(int _largo, int _ancho){
	largo=_largo;
	ancho=_ancho;
}

void Rectangulo::area(){
	int arear;
	arear=largo*ancho;
	cout<<"El area del rectangulo es: "<<arear<<endl;
}

void Rectangulo::perimetro(){
	int perim;
	perim=(largo*2)+(ancho*2);
	cout<<"EL perimetro del rectangulo es: "<<perim<<endl;
}

int main(){
	int lgo;
	int anch;
	
	cout<<"Ingrese el largo: ";
	cin>>lgo;
	cout<<"Ingrese el ancho: ";
	cin>>anch;
	Rectangulo ob1(lgo,anch);
	ob1.area();
	ob1.perimetro();
	system("pause");
	return 0;
}
