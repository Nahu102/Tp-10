#include <iostream>
using namespace std;
void potencia(int num1,int exponente)
{
	int num2=num1;
	//si el exponente no es negativo, se realizara la siguiente operacion:
	if(exponente>=0)
	{
		for(int i=1;i<exponente;i++)
			num1=num1*num2;
	}
	//si el exponente es negativo se realizara la siguiente operacion:
	else
	{
		for(int x=exponente;x!=-1;x++)
			num1=num1*num2;
	}
	
	//se verifica el exponente el para mostrar al usuario la respuesta correcta:
	
	//si el exponente es 0 se mostrara 1
	if(exponente==0)
		cout<<"1";
	//si el exponente es positivo se mostrara unicamente el resultado de la operacion
	else if(exponente>0)
		cout<<num1;
	//si el exponente es negativo se mostrara el producto en forma fraccion
	else if(exponente<0)
		cout<<" 1\n___\n"<<num1;
}
int main ()
{
	int num1,exponente;
	cout<<"ingrese el numero: ";
	cin>>num1;
	cout<<"\ningrese el exponente del numero: ";
	cin>>exponente;
	potencia(num1,exponente);
	return 0;
}
