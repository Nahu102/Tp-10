#include <iostream>
using namespace std;
void dolar(double din_inicial)
{
	double dolar_compra=din_inicial/955.5;
	double dolar_venta=din_inicial/995.5;
	cout<<"\nel precio de compra es: $"<<dolar_compra<<"\nel precio de venta es: $"<<dolar_venta;
}
void euro(double din_inicial)
{
	double euro_compra=din_inicial/1059;
	double euro_venta=din_inicial/1119;
	cout<<"\nel precio de compra es: $"<<euro_compra<<"\nel precio de venta es: $"<<euro_venta;
}
void real(double din_inicial)
{
	double real_compra=din_inicial/18050;
	double real_venta=din_inicial/19050;
	cout<<"\nel precio de compra es: $"<<real_compra<<"\nel precio de venta es: $"<<real_venta;
}
int main()
{
	double din_inicial;
	int opcion;
	cout<<"ingrese la cantidad del monto que quiere convertir: ";
	cin>>din_inicial;
	cout<<"\nseleccione el tipo de moneda al que quiere convertir:\n1-dolar\n2-euro\n3-real\n";
	cin>>opcion;
	switch(opcion)
	{
		case 1:
			dolar(din_inicial);
		break;
		case 2:
			euro(din_inicial);
		break;
		case 3:
			real(din_inicial);
		break;
	}
	return 0;
}
