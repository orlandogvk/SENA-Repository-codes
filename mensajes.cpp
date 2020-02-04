#include <iostream>
using namespace std;
int main(void)
{
      char nombre[40];
      int edad;
      cout <<  "Introduce nombre y apellidos: ";
      cin.getline(nombre,40);  //lectura incluyendo espacios
       cout <<  "Introduce edad: ";cin>>edad;
      cout << "Hola " << nombre << endl;
      cout <<  "Introduce nombre y apellidos: ";
      cin >> nombre;  //lectura sin incluir espacios
      cout << "Hola " << nombre << " tu edad es de "<<edad<<endl;
      system("pause");
}
