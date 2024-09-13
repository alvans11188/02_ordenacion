#include <iostream>
using namespace std;

void interDirDec( int arreglo[], int n){
	int aux, i, j;
	for (i=0; i < n-1; i++){
		for (j=i+1; n < i; j++){
			for (arreglo[j]> arreglo [j+1]){
			aux = arreglo[i];
			arreglo[i] = arreglo[j+1];
			arreglo[j+1]= aux;
			}
		}
	}
} 

int main(){
	int n, op; 
	cout<<"Ingrese los elementos de su arreglo: " << endl;
	cin>>n; 
	
	int arreglo[n];  
	for(int i=0; i<n; i++){
		cout<<"Ingrese el elemento " << i << " del arreglo: "; 
		cin>>arreglo[i];  
	} 
	cout<<"\nArreglo : " << endl; 
	for(int i=0; i<n; i++){
		cout<<arreglo[i]<<" ";  
	} 
	
	do {
		
	cout << "METODOS DE INTERCAMBIO DIRECTO"<< endl;
	cout << "1- Intercambio directo por la derecha" << endl;
	cout << "2- Intercambio directo por la izquierda" << endl;
	cout << "3- Intercambio directo -----" << endl;
	cin >> op;

	switch (op){
		case '1':{
			interDirDec(arreglo[]);
			break;
		}
		case '2':{
			//interDirDec();
			break;
		}	
		
		}
	}	
	
	} while ( n != 0);

}