#include<iostream>
using namespace std;
//CREADO Cesar Alvarez Mosquera
int main() 
{
	float c,m;
	cout<<"ingrese el primer numero que desea comparar:   ";
	cin>> c;
	cout<<"ingrese el segundo numero que desesa comparar:  ";
	cin>> m;
	if(c==m)
	{
		cout<<"es el primer numero es mayor:  ";
	}
	
	else if(c>m)
	{
		cout<<"son iguales:  ";
	}
	else if(c<m)
	{  
		cout<<"el segundo nuemro es mayor:  ";
	}
	return(0);
}
