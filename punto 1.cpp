#include <iostream>
#include <string.h>
using namespace std;
double mayor(double num1,double num2,double num3)
{
	if(num1>num2)
	{
		if(num1>num3)
			return num1;
	}
	else if(num2>num3)
	{
		if(num2>num1)
			return num2;
	}
	else if(num3>num1)
	{
		if(num3>num2)
			return num3;
	}
}
int main ()
{
	double num1,num2,num3;
	cout<<"ingrese los tres numeros que quiere comparar: "<<endl;
	cin>>num1>>num2>>num3;
	double max=mayor(num1,num2,num3);
	cout<<"\nel mayor numero es: "<<max<<endl;
	return 0;
}
