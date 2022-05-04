//Fonctions Membres en ligne 
#include<iostream>
#include<conio.h>
using namespace std;

class point 
{
	int x,y;
	public :
    point(){  //constructeur 1
		x=0;
		y=0;
	} 
    point(int abs) //constructeur 2
    {
	x=abs;
	y=abs;
    }
    point(int abs,int ord) //constructeur 3
    {
	x=abs;
	y=ord;
	}
  void affiche();	
};
void point :: affiche(){
	cout<<"Le point est en"<< x<<" "<<y<<endl;
};
int main(){
   point a,b(5);
   cout<<"Le point A :\n ";
   a.affiche();
   cout<<"Le point B :\n ";
   b.affiche();
   point c(3,12);
   cout<<"Le point C :\n ";
   c.affiche();
   getch();	
}
