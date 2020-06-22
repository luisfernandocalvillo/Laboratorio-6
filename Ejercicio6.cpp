#include <iostream>

using namespace std; 

int main(){
    
    int tamanyo, n , i, contador;
    contador = 0;

    cout << endl << endl << "Ingrese el tama\244o del arreglo: ";
    cin >> tamanyo;

    int arr1 [tamanyo];
    for( i= 0; i<tamanyo; i++)
    {
        cout << endl;
        cout << "Ingrese el numero: ";
        cin >> arr1[i];
    }
    
    cout << endl; 
    cout << "Numero que que desea verificar cuantas veces se repite: ";
    cin >> n;

    for( i=0; i< tamanyo; i++)
    {
        if (n== arr1[i])
        {
            contador++;
        }
    }
    cout << "El numero " << n << " se repite " << contador << " veces " << endl << endl;
    
    return 0;
}