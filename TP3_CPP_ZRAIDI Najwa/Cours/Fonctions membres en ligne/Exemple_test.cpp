//Fonctions off-ligne
#include<iostream>
#include<conio.h>
using namespace std;
class point {
	int x,y;
	public:
		point();//constructeur 1
		point(int);//constructeur 2
		point(int,int);//constructeur 3
		void affiche();
		void affiche(char *);
};

point :: point() //constructeur 1
{
	x=0;
	y=0;
}
point :: point(int abs) //constructeur 2
{
	x=abs;
	y=abs;
}
point :: point(int abs,int ord) //constructeur 3
{
	x=abs;
	y=ord;
}
void point :: affiche(){
	cout<<"Le point est en "<< x<<" "<<y<<endl;
};
void point :: affiche(char *message){
	cout<<message;
	affiche();
}
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
