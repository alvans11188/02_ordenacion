#include <iostream>
using namespace std;

void interDirDec(int arreglo[], int n) {
    int aux, i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
             if (arreglo[j] < arreglo[i]) { 
                aux = arreglo[i];
                arreglo[i] = arreglo[j];
                arreglo[j] = aux;
            }
        }
    }
}

void interDirIzq(int arreglo[], int n) {
    int aux, i, j;
    for (i = n - 1; i > 0; i--) {  
        for (j = i - 1; j >= 0; j--) {
            if (arreglo[j] > arreglo[i]) {  
                aux = arreglo[i];
                arreglo[i] = arreglo[j];
                arreglo[j] = aux;
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
	cout<<"\nArreglo : " ; 
	for(int i=0; i<n; i++){
		cout<<arreglo[i]<<" ";  
	} 
	
    do {
        cout << "\nMETODOS DE INTERCAMBIO DIRECTO" << endl;
        cout << "1- Intercambio directo por la derecha" << endl;
        cout << "2- Intercambio directo por la izquierda " << endl;
        cout << "3- Salir" << endl;
        cin >> op;

        switch (op) {
        case 1:
            interDirDec(arreglo, n);  
            cout << "\nArreglo ordenado: " << endl;
            for (int i = 0; i < n; i++) {
                cout << arreglo[i] << " ";
            }
            cout << endl;
            break;

        case 2:
            interDirIzq(arreglo, n); 
            cout << "\nArreglo ordenado en orden ascendente por la izquierda: " << endl;
            for (int i = 0; i < n; i++) {
                cout << arreglo[i] << " ";
            }
            cout << endl;
            break;

        case 3:
            cout << "Saliendo..." << endl;
            break;

        default:
            cout << "Opción no válida. Intente de nuevo." << endl;
        }
    } while (op != 3);

 
    return 0;
}

