//Fonctions Membres en ligne 
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
 void affiche(char* ="Position du point\n");//argument par defaut
 
};

void point :: affiche(char *message)
{
	cout<<"Le point est en "<< x<<" "<<y-1<<endl;
	cout<<message;
	cout<<"Le point est en "<< x<<" "<<y<<endl;
}
int main(){
	point a,b(40);
	a.affiche();
	b.affiche("Point B\n");
	char text[10]="Bonjour \n";
	point c(3,12);
	c.affiche(text);
	getch();
}
