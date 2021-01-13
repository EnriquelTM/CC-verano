#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int r, diametro = 0, circunferencia = 0, area = 0;
    float pi = 3.14159;
    cout <<"Escriba el radio: "; 
	cin>>r;
	
	diametro = r * 2;
	circunferencia = pi * diametro;
	area = pi * pow(r,2);
	
    cout <<"El diametro es: " <<diametro<< endl;
	cout <<"La circunferecnia es: " <<circunferencia<< endl;
	cout <<"El area es: " <<area<< endl;
    return 0;
}
