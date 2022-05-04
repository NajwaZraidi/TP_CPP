#include<iostream>
#include<conio.h>
using namespace std;
class point 
{
	int x,y;
	public :
  point(int abs=0,int ord=0) //constructeur 
    {
	x=abs;
	y=ord;
	}
	void affiche();
};
void point :: affiche(){
	cout<<"Adresse "<<this<<" - Coordonnees : "<<x<<" et "<<y<<"\n";
}


int main(){
	point a(5),b(3,15);
	cout<<"Le point a : \n";
	a.affiche();
	cout<<"Le point b :\n";
	b.affiche();
	getch();
}


