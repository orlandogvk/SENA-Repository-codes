#include <string>
#include <iostream>

using namespace std;

int main(){
	string s1;
	int edad;
	cout << "escribe la frase: ";
	//cin >> s1;
	getline(cin,s1,'\n');
	cout << "escribe la edad: ";cin>>edad;
	cout << s1 <<" y "<<edad<< endl;
	system("PAUSE");
}
