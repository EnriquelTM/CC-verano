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
