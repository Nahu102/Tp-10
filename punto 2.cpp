#include <iostream>
//biblioteca para rand y srand
#include <cstdlib>
//biblioteca para time(NULL)
#include <time.h>
using namespace std;
void numrand(int rango,int num1)
{
	//para que rand genere un numero totalmente aleatorio se usa srand(time(NULL)) ya
	//que caso contrario generaria el mismo numero cada vez que se ejecute el programa
	srand(time(NULL));
	//esta funcion se encarga de generar una vez un numero aleatorio para este programa
	num1=rand()%rango+1;
	cout<<"\nsu numero aleatorio es: "<<num1;
}
int main ()
{
	int rango,num1;
	cout<<"ingrese el rango que quiera que tenga el numero aleatorio: ";
	cin>>rango;
	numrand(rango,num1);
	return 0;
}
