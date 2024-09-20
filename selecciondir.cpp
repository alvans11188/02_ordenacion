#include <iostream>
using namespace std;

void seleccionar(int arreglo[],int n){
	int menor, k;
	for ( int i=0; i<n-1; i++){
		menor = arreglo[i];
		k = i;
		for (int j=i+1; j<n;j++){
			if (arreglo[j] < menor ){
			menor = arreglo[j];
			k=j;		
			}
		}
		arreglo[k] = arreglo[i];
		arreglo[i] = menor;
	}
} 

int main(){
	int n, op, s; 
	cout<<"Ingrese los elementos de su arreglo: " << endl;
	cin>>n; 
	
	int arreglo[n];  
	for(int i=0; i<n; i++){
		cout<<"Ingrese el elemento " << i << " del arreglo: "; 
		cin>>arreglo[i];  
	} 
	cout<<"\nArreglo : " ; 
	for(int i=0; i<n; i++){
		cout<<arreglo[i]<<" "; 
		}
	seleccionar(arreglo, n);
	
	cout << "\nEl nuevo arreglo ordenado sera" << endl;
	for(int i=0; i<n; i++){
		cout<<arreglo[i]<<" "; 
		}
	cout << endl;
	return 0;
}
