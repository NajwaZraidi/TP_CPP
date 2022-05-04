#include<iostream>
#include<conio.h>
#include <windows.h> 
using namespace std;
class point 
{
  int x,y,couleur;
  public :
  void initialiser(int,int,int);
  void deplacer(int,int);
  void afficher();
  void effacer();	
};
void point :: initialiser(int abs,int ord,int c)
{
    x=abs;
	y=ord;
	couleur=c;	
};
void point :: deplacer(int dx,int dy)
{
	effacer();
    x=x+dx;
	y=y+dy;	
	afficher();
};
void point :: afficher()
{
	system("Color 1 ");
	cout<<"Je suis en "<< x<<" "<<y<<endl;
};
void point :: effacer()
{
	int aux=couleur;
	couleur=system("Color 0");
	afficher();
	couleur =aux;	
};
int main(){
	point p1,*p2;
	p1.initialiser(30,15,1);
	p1.afficher();
	getch();
	p1.effacer();
	p1.deplacer(10,5);
	getch();
	
	p1.effacer();
	p2=new point;
	p2->initialiser(15,20,7);
	p2->afficher();
	delete p2;
	getch();
}


