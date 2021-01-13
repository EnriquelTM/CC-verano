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
