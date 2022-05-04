#include<iostream>
using namespace std;
//classe vecteur
//Surdefinition de l'operateur +

class vecteur
{
	float x,y;
	public :
	vecteur(float,float);
	friend vecteur operator +(vecteur,vecteur);
	/* surdefinition de l'operateur somme
	on passe un paramètre un vecteur
	la fonction amie retourne un  vecteur */
	void affiche();
	
};
vecteur :: vecteur(float abs=0,float ord=0)
{
	x=abs;
	y=ord;
}
void vecteur :: affiche(){
	cout<<" x = "<<x<<" y "<<y<<"\n";
}
vecteur operator+(vecteur v,vecteur w){
	vecteur res;
	res.x=v.x+w.x;
	res.y=v.y+w.y;
	return res ;
}

int main()
{
	vecteur a(2,6),b(4,8),c,d;
	c= a+b;
	c.affiche();
	d=a+b+c;
	d.affiche();
	
}
