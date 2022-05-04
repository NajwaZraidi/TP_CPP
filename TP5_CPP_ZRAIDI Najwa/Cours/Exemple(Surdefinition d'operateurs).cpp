#include<iostream>
using namespace std;
//classe vecteur
//Surdefinition de l'operateur + et l'operateur *

class vecteur
{
	float x,y;
	public :
	vecteur(float,float);
	vecteur operator +(vecteur);
	/* surdefinition de l'operateur somme
	on passe un paramètre un vecteur
	la fonction retourne un  vecteur */
	void affiche();
	float operator*(vecteur);
	vecteur operator*(float);
};
vecteur :: vecteur(float abs=0,float ord=0)
{
	x=abs;
	y=ord;
}
void vecteur :: affiche(){
	cout<<" x = "<<x<<" y= "<<y<<"\n";
}
vecteur vecteur :: operator+(vecteur v){
	vecteur res;
	res.x=v.x+x;
	res.y=v.y+y;
	return res ;
}
float vecteur :: operator*(vecteur v){
	return v.x*x+v.y*y;
}
vecteur vecteur :: operator*(float val){
	vecteur res;
	
	res.x=x*val;
	res.y=y*val;
	return res ;
}
int main()
{
	float prod_scal;
	vecteur a(2,6),b(4,8),c,d,e,f,g;
	g=a.operator*(2);
	g.affiche();
	c= a+b;
	c.affiche();
	prod_scal = a.operator*(b);
	cout<< "le produit scalaire est : "<<prod_scal<<endl;
	d=a.operator +(b);
	d.affiche();
	e=b.operator +(a);
	e.affiche();
	f=a+b+c;
	f.affiche();
	
}
