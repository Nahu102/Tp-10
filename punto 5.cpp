#include <iostream>
using namespace std;
void dolar(double din_inicial,bool venta)
{
	if(!venta)
	cout<<"\nel valor de compra es $"<<din_inicial/955.5<<endl;
	else
	cout<<"\nel valor de venta es $"<<din_inicial/995.5<<endl;
}
void euro(double din_inicial,bool venta)
{
	if(!venta)
	cout<<"\nel valor de compra es $"<<din_inicial/1059<<endl;
	else
	cout<<"\nel valor de venta es $"<<din_inicial/1119<<endl;
}
void real(double din_inicial,bool venta)
{
	if(!venta)
	cout<<"\nel valor de compra es $"<<din_inicial/18050<<endl;
	else
	cout<<"\nel valor de venta es $"<<din_inicial/19050<<endl;
}
int main()
{
	double din_inicial;		int opcion,num1=0;		bool venta;
	cout<<"ingrese la cantidad del monto que quiere convertir: ";
	cin>>din_inicial;
	cout<<"\nseleccione el tipo de moneda al que quiere convertir:\n1-dolar\n2-euro\n3-real\n";
	cin>>opcion;
	cout<<"desea ver el valor de 1-compra o de 2-venta: ";
	cin>>num1;
	if(num1==1)
	venta=false;
	else
	venta=true;
	switch(opcion)
	{
		case 1:
			dolar(din_inicial,venta);
		break;
		case 2:
			euro(din_inicial,venta);
		break;
		case 3:
			real(din_inicial,venta);
		break;
	}
	return 0;
}
