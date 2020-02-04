#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	bool sex=false;
	char s;
	string nombre;
	cout<<"Digite su nombre: ";
	cin>>nombre;
	cout<<"Digite si es hombre o mujer (h/m): ";
	cin>>s;
	if((s=='h')||(s=='H')){
		   sex=true;
	}else if((s=='m')||(s=='M')){
			sex=false;
	}else{
		  cout<<"Opcion no valida"<<endl;
	}
			
	if((s=='m')||(s=='M')||(s=='h')||(s=='H')){
			if(sex==true){
				cout<<"Nombre: "<<nombre<<" Sexo: ("<<s<<") hombre"<<endl;
			}else{
				cout<<"Nombre: "<<nombre<<" Sexo: ("<<s<<") mujer"<<endl;
			}
	}
		
	system("pause");
	return 0;
}
