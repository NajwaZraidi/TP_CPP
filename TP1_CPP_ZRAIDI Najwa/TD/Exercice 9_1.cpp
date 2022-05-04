#include<iostream>
#include<conio.h>
using namespace std;

struct essai 
{
	int n;
	float x;
};
void Remise_a_zero(struct essai *essai1)
{
	essai1->n=0; //intialisation d'élément essai1 de champs n à 0
	essai1->x=0.0; //intialisation d'élément essai1 de champs x à 0.0
}

int main(){
	struct essai e1;
	Remise_a_zero(&e1);
	cout<<"Valeurs apres remise a zero : "<<e1.n <<" "<<e1.x<<endl;
}
