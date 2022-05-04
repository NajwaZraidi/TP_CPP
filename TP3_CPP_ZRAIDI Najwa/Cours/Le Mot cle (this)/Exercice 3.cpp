#include<iostream>
#include<conio.h>
using namespace std;

class vecteur
{
	float x,y;
	public :
		vecteur(float,float);
		float prod_scal(vecteur);
		vecteur somme(vecteur);
		void affiche();
};

vecteur :: vecteur(float abs=0.,float ord =0.){
	x=abs;
	y=ord;
}
float vecteur :: prod_scal(vecteur v1){
	return this->x*v1.x + this->y * v1.y;
}
vecteur vecteur :: somme(vecteur v1){
	vecteur res;
	res.x = this->x + v1.x;
	res.y = this->y + v1.y;
	return res;
}
void vecteur :: affiche(){
	cout<<"x = "<<x<<" y= "<<y<<endl;
}

int main(){
	vecteur v1(1,2),v2(0.5,4),res;
	cout<<"Le vecteur 1 : "<<endl;
	v1.affiche();
	cout<<"Le vecteur 2 : "<<endl;
	v2.affiche();
	cout<< "Le produit de deux vecteurs : "<< v1.prod_scal(v2)<<endl;
	res=v1.somme(v2);
	res.affiche();
	
}


