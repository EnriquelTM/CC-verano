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
