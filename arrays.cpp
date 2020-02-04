#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<stdio.h>
//Programa que realiza los procesos basicos con matrices realizado por MsC.Ing.Orlando Rodriguez P.
using namespace std;

	
int main(){
	int m,n;
	srand(time(NULL));
	int entero;
	float prom;
	char op;
	cout<<"PROGRAMA MATRICES"<<endl;
	do{
		cout<<"Ingrese la cantidad de filas: ";
		cin>>m;
		cout<<"Ingrese la cantidad de columnas: ";
		cin>>n;
		int Mat[m][n];
			if(m==n){
				//Llenando la matriz
				for(int i = 0; i < m; i++)
    			{
    				for(int j = 0;j <n; j++){
    		   		Mat[i][j] = 1 + rand() % (10 - 1);              //variable = limite_inferior + rand() % (limite_superior +1 - limite_inferior) ;
					}	
    			}
    
    			//Imprimiendo la matriz
    			for(int i = 0; i < m; i++)
    			{		
    				for(int j = 0;j <n; j++){
    		   		cout<<Mat[i][j]<<" ";
					}
					cout<<endl;
    			}
    				cout<<endl;
    				cout<<"Diagonal principal";
    				cout<<endl;
    			//Imprimiendo la diagonal principal
    			for(int i = 0; i < m; i++)
    			{	
    				for(int j = 0;j <n; j++){
    				cout<<" ";
    					if(i==j){
    						cout<<Mat[i][j];
						}	   
					}
					cout<<endl;
    			}
    				cout<<endl;
    				cout<<"Diagonal secundaria";
    				cout<<endl;
    			//Imprimiendo la diagonal secundaria
    			for(int i = 0; i < m; i++)
    			{		
    				for(int j = 0;j <n; j++){
    					cout<<" ";
    					if((i+j)==(m-1)){
    						cout<<Mat[i][j];
						}	   
					}
					cout<<endl;
    			}
    				cout<<endl;
    				cout<<"Primera columna";
    				cout<<endl;
    			//Imprimiendo la primera columna
    			for(int i = 0; i < m; i++)
   		 		{
    				for(int j = 0;j <n; j++){
    					if(j==0){
    						cout<<Mat[i][j];
						}	   
					}
					cout<<endl;
    			}		
    	
    				cout<<endl;
    				cout<<"Ultima columna";
    				cout<<endl;
    			//Imprimiendo la ultima columna
    			for(int i = 0; i < m; i++)
   		 		{
    				for(int j = 0;j <n; j++){
    					if(j==(n-1)){
    						cout<<Mat[i][j];
						}	   
					}
					cout<<endl;
    			}
    				cout<<"Primera fila";
    				cout<<endl;
    			//Imprimiendo la primera fila
    			for(int i = 0; i < m; i++)
   		 		{
    				for(int j = 0;j <n; j++){
    					if(i==0){
    						cout<<Mat[i][j]<<" ";
						}	   
					}
					cout<<endl;
    			}
    				cout<<"Ultima fila";
    				cout<<endl;
    			//Imprimiendo la ultima fila
    			for(int i = 0; i < m; i++)
   		 		{
    				for(int j = 0;j <n; j++){
    					if(i==(m-1)){
    						cout<<Mat[i][j]<<" ";
						}	   
					}
					cout<<endl;
    			}
    	
    			if(((m%2)!=0)&&((n%2)!=0)){
    				prom=n/2;
    				entero=(int)prom;
    				cout<<"Columna central";
    				cout<<endl;
    	
    				//Imprimiendo la columna central
    				for(int i = 0; i < m; i++)
   		 			{
    					for(int j = 0;j <n; j++){
    						if(j==prom){
    							cout<<Mat[i][j];
							}	   
						}	
							cout<<endl;
    				}
    				
    				cout<<"Fila central";
    				cout<<endl;
    				//Imprimiendo la fila central
    				for(int i = 0; i < m; i++)
   		 			{	
    					for(int j = 0;j <n; j++){
    						if(i==prom){
    							cout<<Mat[i][j]<<" ";
							}	   
						}	
						cout<<endl;
    				}
		
                }
					cout<<endl;
			}else{
					cout<<"NO ES UNA MATRIZ CUADRADA!"<<endl;
			}
			
		cout<<"Desea continuar? s/n: ";
		cin>>op;
	}while(op=='s');

	cout<<"Hasta pronto BUENA SUERTE!!!..."<<endl;
	
//	system("PAUSE");
//	return 0;
}
