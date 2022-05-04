#include<iostream>
#include<conio.h>
using namespace std;
class point {
	int x,y;
	public :
		point(int,int);//noter le type du constructeur (pas de "void")
		void deplace(int,int);
		void affiche(); 
};
point :: point(int abs,int ord){//initialisation par deux parametres
	x=abs;
	y=ord;
	//grace au constructeur ,ici parametre à passer
}
void point :: deplace(int dx,int dy){
    x=x+dx;
	y=y+dy;	
};
void point :: affiche(){
	cout<<"Je suis en "<< x<<" "<<y<<endl;
};
int main(){
	point a(10,4);//intialisation de point  grace a constructeur point
	a.affiche();
	getch();
	a.deplace(17,10);
	a.affiche();
	getch();
}

