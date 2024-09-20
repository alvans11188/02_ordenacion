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


void interDirCen(int arreglo[], int n ){
	int aux;
	bool sen;
	
	for ( int i = 0; i<n-1; i++ ){
		sen = false;
		
		for (int j=0; j<n-i-1; j++){
			if (arreglo[j] > arreglo[j+1]){
				
				aux = arreglo[j];
				arreglo[j] = arreglo[j+1];
				arreglo[j+1] = aux;
				sen = true;
			}
		}
		if (!sen){
			break;
		}
	}
	
	for ( int i = 0; i<n; i++){
		cout << arreglo[i] << " ";
	}
	cout << endl;
}

void interBi(int arreglo[], int n ){
	int aux;
	int com =0;
	int ter = n-1;
	bool sen=true;
	
	cout << "El orden sera: " << endl;
	
	while(sen){
		sen = false;
		
		for ( int i = com; i<ter; i++){
			if (arreglo[i] > arreglo[i+1]){
				aux = arreglo[i];
				arreglo[i] = arreglo[i+1];
				arreglo[i+1] = aux;
				sen = true;
				
			}
		}
		
		if (!sen)
			break;
			
		ter--;
		com = false;
		
		for (int i = ter; i>com; i--){
			if (arreglo[i]<arreglo[i-1]){
				aux = arreglo[i];
				arreglo[i] = arreglo[i-1];
				arreglo[i-1] = aux;
				sen=true;
				
			}
		}
		
		com++;
	}
	
	for(int i = 0; i<n; i++){
		cout << arreglo[i] << " ";
		
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
        cout << "3- Intercambio directo con senial" << endl;
        cout << "4- Intercambio directo bidireccional" << endl;
        cout << "5- Salir" << endl;
        cin >> op;

        switch (op) {
        case 1:
            interDirDec(arreglo, n);  
            cout << "\nArreglo ordenado en orden ascendente por la derecha : " << endl;
            for (int i = 0; i < n; i++) {
                cout << arreglo[i] << " ";
            }
            cout << endl;
            break;

        case 2:
            interBi(arreglo, n); 
            cout << "\nArreglo ordenado en orden ascendente por la izquierda: " << endl;
            for (int i = 0; i < n; i++) {
                cout << arreglo[i] << " ";
            }
            cout << endl;
            break;

        case 3:
            interDirCen(arreglo, n);
            cout << "\nArreglo ordenado: " << endl;
            for (int i=0; i<n; i++){
            	cout << arreglo[i] << " ";
			}
			cout << endl;
            break;
		
		 case 4:
            interBi(arreglo, n);
            cout << "\nArreglo ordenado bidireccionalmente: " << endl;
            for (int i=0; i<n; i++){
            	cout << arreglo[i] << " ";
			}
			cout << endl;
            break;
            
        default:
            cout << "Opción no válida. Intente de nuevo." << endl;
        }
    } while (op != 5);

 
    return 0;
}

