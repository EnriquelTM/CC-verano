
#include <iostream>
using namespace std;

int main()
{
    int n1, n2;
    cout << "Ingrese un numero: ";
    cin>> n1;
    cout << "Escriba otro numero: ";
    cin>> n2;
    
	if (n1 > n2){
    cout << "El numero "<< n1<< " es mayor que "<<n2<<endl;
    }
    else if (n2 > n1) {
    cout << "El numero "<< n1<< " es menor que "<< n2<<endl;
    } 
    
    else 
    cout <<"Los numeros son iguales ";
    return 0;
}
