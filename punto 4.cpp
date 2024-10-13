#include <iostream>
using namespace std;
void numprimo(int num1)
{
	int contador=0;
	//este for verifica cada numero anterior a num1
	for(int i=1;i<=num1;i++)
	{
		//si el iterador i es divisible por num1 contador aumentara su valor
		if(num1%i==0)
			contador++;
	}
	//si el numero es divisible unicamente por 2 numero es un numero primo
	if(contador==2)
		cout<<num1<<" si es un numero primo";
	else 
		cout<<num1<<" no es un numero primo";
}
int main ()
{
	int num1;
	cout<<"ingrese un numero: ";
	cin>>num1;
	numprimo(num1);
	return 0;
}
