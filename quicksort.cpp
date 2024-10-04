#include <iostream>
using namespace std;

void reduce(int A[],int inicio,int final){
	int cen, pos,aux;
	int izq = inicio;
	int der = final;
	pos = izq;
	cen = 1;
	while(cen == 1){
		cen = 0;
		while((A[pos] <= A[der]) && (pos != der)){
			der--;
		}
		if (pos != der){
			aux = A[pos];
			A[pos]= A[der];
			A[der]=aux;
			pos = der;
			while((A[pos] >= A[izq]) && (pos != izq)){
				izq++;
			}
			if (pos != izq){
				aux = A[pos];
				A[pos] = A[izq];
				A[izq] = aux;
				pos = izq;
				cen =1;
			}
		}
		if (pos-1 > inicio){
			reduce(A,inicio,pos-1);
		}
		if (pos+1<final){
			reduce(A, pos+1, final);
		}
	}
}

void quickSort(int A[],int n){
	reduce(A, 0 ,n);
}

int main(){
    int n; 
     cout << "METODO QUICKSORT"<<endl;
    cout<<"Digite cuantos elementos tendra el arreglo: "; 
    cin>>n; 

    int array[n];  

    for(int i=0; i<n; i++){
	cout<<"Digite el elemento ["<<i<<"]: "; 
	cin>>array[i];  
    } 
    
    cout<<"\nArreglo sin ordenar: "; 
    for(int i=0; i<n; i++){
         cout<<array[i]<<" ";  
    } 
    cout<<endl;
    
    quickSort(array,n-1);
     
    cout<<"\nOrdenamiento con Quick Sort: "; 
    for(int i=0; i<n; i++){
        cout<<array[i]<<" ";  
    } 
    cout<<endl;

	
	return 0;
}
