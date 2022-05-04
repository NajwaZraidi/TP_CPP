#include<iostream>
#include<conio.h>
using namespace std;
// La valeur de retour d'une fonction est un objet
//Transmmission par refrence

class point 
{
	int x,y;
	public :
  point(int abs=0,int ord=0) //constructeur 
    {
	x=abs;
	y=ord;
	}
	point &symetrique();
	void affiche();
};

point &point :: symetrique(){
   static point res;
  // La variable res est obligatoirement static pour passer par reference
	res.x=-x;
	res.y=-y;
	return res;
}
void point :: affiche(){
	cout<<"Le point est en "<<x<<" et "<<y<<"\n";
}
int main(){
	point a,b(1,6);
	a=b.symetrique();
	a.affiche();
	b.affiche();
	getch();
}