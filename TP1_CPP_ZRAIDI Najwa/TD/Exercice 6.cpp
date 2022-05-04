#include<iostream>
#include<conio.h>
using namespace std;

void essai(float x,char c,int n=0)
{
	cout<<"Fonction N°1: x= "<<x<<" c= "<<c<<" n= "<<n<<"\n";
}
void essai(float x,int n)
{
	cout<<"Fonction N°2: x= "<<x<<" n= "<<n<<"\n";
}

int main(){
	char l='z';
	int u=4;
	float y=2.0;
	essai(y,l,u); //appelle fonction N°1
	essai(y,l); //appelle fonction N°1
	essai(y,u); //appelle fonction N°2
	essai(u,u); //appelle fonction N°2
	essai(u,l); //appelle fonction N°1
	// essai(y,y); rejet par le compilateur  car la fonction qui contient deux arguments de type float n'existe pas
	essai(y,y,u); //fonction N°1
	getch();
	
}
