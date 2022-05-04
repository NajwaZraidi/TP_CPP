#include <iostream>
#include <string>
#include <conio.h>
using namespace std;
// 1ere partie :
class coordonne{
	protected :
		int x,y;
	public:
	coordonne(int a=0,int b=0)
	{	x=a;	y=b;}
	deplace(int a,int b)
	{	x+=a;	y+=b;	}
	affiche(){cout<<" x="<<x<<"  y="<<y;	}		
	int GetX(){ return x;}
	int GetY(){ return y;}
};
class forme{
	protected :
		short couleur;
	public :
		forme(short=1);
		forme(forme &);
		void affiche();
		forme operator =(forme &);
};
// 2eme partie :
class cercle : public coordonne,forme{
	protected :
		coordonne centre;
		short rayon;
	public :
		cercle(int,int,short,short);
		cercle(cercle &);
		cercle operator =(cercle &);
		void affiche();
		void deplace(int,int);
		float surface();
		float perimetre();
};
// 3eme partie :
class triangle : public coordonne,forme {
	protected :
		coordonne a,b,c;
	public :
		triangle(int,int,int,int,int,int,short);
		triangle(triangle &);
		triangle operator =(triangle &);
		void affiche();
		void deplace(int,int);
		float surface();
		float perimtre();
};
// 4eme partie :
class rectangle : public coordonne,forme {
	protected :
		coordonne a,b;
	public :
		rectangle(int,int,int,int,short);
		rectangle(rectangle &);
		rectangle operator =(rectangle &);
		void affiche();
		void deplace(int,int);
		float surface();
		float perimtre();
};
// 5eme partie :
class carre : public coordonne,forme {
	protected :
		short cote;
	public :
		carre(int,int,short,short);
		carre(carre &);
		carre operator =(carre &);
		void affiche();
		void deplace(int,int);
		float surface();
		float perimtre();
};



