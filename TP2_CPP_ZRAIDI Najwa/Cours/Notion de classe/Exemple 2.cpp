#include<iostream>
#include<conio.h>
using namespace std;
class point {
	int x,y;
	public :
		point();//noter le type du constructeur (pas de "void")
		void deplace(int,int);
		void affiche(); 
};
point :: point(){//initialisation par default
	x=20;
	y=10;
	//grace au constructeur 
}
void point :: deplace(int dx,int dy){
    x=x+dx;
	y=y+dy;	
};
void point :: affiche(){
	cout<<"Je suis en "<< x<<" "<<y<<endl;
};
int main(){
	point a,b;//les points sont 
	a.affiche();
	getch();
	a.deplace(17,10);
	a.affiche();
	getch();
	b.affiche();
	getch();
}
