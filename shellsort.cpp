#include <iostream> 
using namespace std; 

int main(){
    int n; 
    int opcion;
    cout << "METODO SHELLSORT"<<endl;
    cout<<"Digite cuantos elementos tendra el arreglo: "; 
    cin>>n; 

    int array[n];  

    for(int i=0; i<n; i++){
	cout<<"Digite el elemento ["<<i<<"]: "; 
	cin>>array[i];  
    } 
	
    cout<<"\nImprimiendo el arreglo: "; 
    for(int i=0; i<n; i++){
	cout<<array[i]<<" ";  
	} 
	cout<<endl;	
	
    
    int cen,aux;
    int k = n+1;
	while(k>1){
		k=k/2;
		cen = 1;
		while(cen == 1){
			cen = 0;
			int i = 0;
			while(i+k <= n-1){
				if (array[i+k] < array[i]){
					aux = array[i];
					array[i] = array[i+k];
					array[i+k] = aux;
					cen = 1;
				}
				i++;
			}
		}
	}
   
   
    cout<<"\nArreglo ordenado por seleecion directa: "<<endl; 
    for(int i=0; i<n; i++){
	cout<<array[i]<<" ";  
    }
    cout<<endl; 
     
    return 0; 
}
