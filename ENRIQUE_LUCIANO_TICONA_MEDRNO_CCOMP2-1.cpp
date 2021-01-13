// 2.16
using namespace std;

int main()
{
    int n1, n2; 
    
    cout <<"Esbriba un numero: "; 
	cin>>n1;
    cout<<"Escriba otro numero: ";
	cin>>n2;


    cout <<"La suma es: " << n1 + n2 << endl;
    cout<<"La diferencia es: " <<n1 - n2<<endl;
    cout<<"El producto es: "<< n1 * n2<< endl;
    cout<<"El cociente es: "<< n1 / n2<< endl;
   
    return 0;
}
// 2.18
#include <iostream>
using namespace std;

int main()
{
    int n1, n2, comparar = 0;
    cout << "Ingrese un numero: ";
    cin>> n1;
    cout << "Escriba otro numero: ";
    cin>> n2;
    
    if (n1 > n2){
    cout <<n1<< " es mayor " ;
    }
    else {
    cout << n2<< " es mayor " ;
    }
   
    return 0;
}

//2.20
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

//2.22
cout <<"*****\n****\n***\n**\n*" <<endl;
// Da el siguiente error:[Error] 'cout' does not name a type

//2.24
#include <iostream>
 
using namespace std;
 
int main() {
 
  int num,num2,suma= 0;
 
  cout<<"Escriba un numero: ";
  cin>>num;
  cout <<"Escriba otro numero: ";
  cin>>num2;
  
  suma= num + num2;
  
  if(num % 2 == 1){
    cout<<num<<" si es impar\n";
  } else {
    cout<<num<<" no es impar\n";
  }
  
  if(num2 % 2 == 1){
    cout<<num2<<" si es impar\n";
  } else {
    cout<<num2<<" no es impar\n";
  }
 
   if(suma % 2 == 1){
    cout<<suma<<" si es impar\n";
  } else {
    cout<<suma<<" no es impar\n";
  } 
  
  return 0;
}

//2.26
#include <iostream>
using namespace std;

int main()
{

	cout <<  "* * * * * * * *"<<endl<<" * * * * * * * *" << endl<< "* * * * * * * *"<<endl<< " * * * * * * * *"<<endl;
	cout<< "* * * * * * * *"<<endl<<  " * * * * * * * *"<<endl<<  "* * * * * * * *"<<endl<<  " * * * * * * * *"<<endl;
    
	return 0;
}

// 2.28
 #include <iostream>
 using namespace std;
 
 int main()
 {
	int num = 0, divisor = 1, primer = 0, temp = 0 , tercer = 0, temp2=0, segundo = 0, temp3 = 0, cuarto = 0;
 	cout << "Escriba un numero de 4 digitos: ";
 	cin >> num;
 	
 	divisor = divisor *1000;
 	
    primer = num/divisor;
    temp = num % divisor ;
    segundo = temp / 100 ;
    temp2 = temp % 100;
    tercer = temp2 / 10;
    temp3 = temp2 % 10;
    cuarto = temp3 / 1;
    

    cout <<cuarto<<" "<< tercer<<" "<< segundo<<" "<< primer<< endl;

    

	 return 0;
	 }
	 
// 2.30
 #include <iostream>
 using namespace std;
 float altura = 0, peso = 0 , imc;
 int main()
 {

	cout<<"Ingrese su peso en kg: "<< endl;
	cin >> peso;
	
	cout << "Ingrese su altura en metros: "<< endl ;
	cin>> altura;
	
	imc = peso/(altura*altura);
	
	cout<<"Tu resultado es: "<< imc << endl;
	
	cout << "\nDepartamento de Salud y Servicios Humanos / Institutos Nacionales de Salud para que el usuario pueda evaluar su IMC:"<<endl;
	cout << "\nBMI VALUES" << endl << "Underweight: less than 18.5"<< endl<< "Normal:      between 18.5 and 24.9"<< endl<< "Overweight:  between 25 an 29.9"<<endl;
	cout << "Obese:       30 or greater";
	

	 return 0;
	 }
