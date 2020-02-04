#include<iostream>
#include<stdlib.h>
#include<stdio.h>

using namespace std;

void registrarEstudiantes(){
	int i,sumaed=0,promedioed,ch=0,cm=0,mayor=0,menor=9999;
	float notaprom,spromt=0,prom[4];
 	string sex,nom;
    struct {
        string nombre,cedula,sexo;
       	int edad;
       	float n1,n2,n3,n4;
    } registro[4];
 	//Ingresamos los datos al registro en el vector
    for (i=0; i<4 ; i++) {
        cout << "Introduce tu nombre: ";
        getline(cin, registro[i].nombre);
        cout << "Ingrese su cedula: ";
        getline(cin,registro[i].cedula);
 
        cout << "Sexo: ";
        cin>>sex;
        if(sex=="MASCULINO" || sex=="masculino" ){
        	registro[i].sexo=sex;
        	ch++;
		}else if(sex=="FEMENINO" || sex=="femenino"){
        	registro[i].sexo=sex;
        	cm++;
		}else{
			cout<<"Dato no valido"<<endl;
			i--;
		}
        cout << "Edad: ";
        cin>>registro[i].edad;
        cout << "Registro de notas"<<endl; 
        cout << "Ingrese la primera nota: ";
        cin>>registro[i].n1;
        cout << "Ingrese la segunda nota: ";
        cin>>registro[i].n2;
        cout << "Ingrese la tercera nota: ";
        cin>>registro[i].n3;
        cout << "Ingrese la cuarta nota: ";
        cin>>registro[i].n4;
        notaprom=(registro[i].n1+registro[i].n2+registro[i].n3+registro[i].n4)/4;
        prom[i]=notaprom;
        cout<<"Promedio: "<<notaprom<<endl;
        cin.ignore();   //Se agrega esta funcion para que haga un salto de linea
        system("PAUSE");
        system("CLS");
    }
    cout<<" "<<endl;
   
    
    //Calculamos el promedio de edad
     for (i=0; i<4; i++) {	
       sumaed+=registro[i].edad;
    }
		promedioed=(sumaed/4);
	
 	cout<<" "<<endl;
 	//mostrar datos
 	 for (i=0; i<4; i++) {
    	
        cout <<"Registro Nro: " <<(i+1)<<endl;
        cout <<"Nombre: " <<registro[i].nombre <<endl;
        cout <<"Cedula: " <<registro[i].cedula <<endl;
        cout <<"Sexo: " <<registro[i].sexo <<endl;
        cout <<"Edad: " <<registro[i].edad <<endl;
        cout <<"Promedio: "<<prom[i];
      	cout<<" "<<endl;
      	cout<<" "<<endl;
    }
    cout<<" "<<endl;
	cout<<"El promedio de edad es: "<<promedioed<<endl;	
	cout<<"La cantidad de mujeres es: "<<cm<<endl;
	cout<<"La cantidad de hombres es: "<<ch<<endl;	
	cout<<"Porcentaje de hombres es: "<<(ch*100/4)<<"%"<<endl;
	cout<<"Porcentaje de mujeres es: "<<(cm*100/4)<<"%"<<endl;
	for(i=0;i<4;i++){
		spromt+=prom[i];
	}
	cout<<"El promedio total del salon es: "<<(spromt/4)<<endl;
	//Persona mayor
		for(i=0;i<4;i++){
		if(registro[i].edad>mayor){
			mayor=registro[i].edad;
			nom=registro[i].nombre;
		}	
	}
	cout<<nom<<" es la persona con mayor edad con "<<mayor<<" anios"<<endl;
	//Persona menor
		for(i=0;i<4;i++){
		if(registro[i].edad<menor){
			menor=registro[i].edad;
			nom=registro[i].nombre;
		}	
	}
	cout<<nom<<" es la persona con menor edad con "<<menor<<" anios"<<endl;
	
	//Busqueda de registros
	char eleccion;
	
	cout<<" "<<endl;
	cout << "Consultar datos registrados " << endl;
 
    do{
        cout << "Ingrese el numero del registro realizado: ";
        cin >>i;
        cout << endl << endl;
 
        if(i >= 0 && i <= 4){
            cout << "Los datos consultados son:";
            cout << endl << endl;
            cout << "Nombre:" << registro[i-1].nombre << endl;
            cout << "Cedula:" << registro[i-1].cedula << endl;
            cout << "Sexo:" << registro[i-1].sexo << endl;
            cout << "Edad:" << registro[i-1].edad << endl;
            cout << "Promedio: "<<prom[i-1]<<endl;
        }else{
            cout << endl << endl;
            cout << "Indice erroneo." << endl;
        }
        
        cout << "Desea consultar otro registro? S/N:";
        cin >> eleccion;
        cout << endl << endl;
    }while (eleccion=='s' || eleccion =='S');
	
}

 

int main(){

	registrarEstudiantes();
	system("PAUSE");
	return 0;	
}



