#include<iostream>
#include<conio.h>
using namespace std;
class point {
	int x,y;
	public :
		point(int,int);//noter le type du constructeur (pas de "void")
		void deplace(int,int);
		void affiche(); 
		~point(); //noter le type du destructeur
};
point :: point(int abs,int ord){//initialisation par default
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
point :: ~point(){
	cout<<"Taper une touche pour continuer ...\n";
	getch();
	cout<<"destruction du point x ="<<x<<" y="<<y<<"\n";
}
void test()
{
	point u(3,7);
	u.affiche();
	getch();
}
int main(){
	point a(1,4);//les points sont 
	a.affiche();
	getch();
	test();
	point b(5,10);
	b.affiche();
	getch();
}
