#include<iostream>
#include<conio.h>
using namespace std;

class vecteur
{
	float x,y;
	public :
		vecteur(float,float);
		vecteur homotethie(float);
		float det(vecteur);
		void affiche();
};

vecteur :: vecteur(float abs=0.,float ord =0.){
	x=abs;
	y=ord;
}
vecteur vecteur :: homotethie(float val){
	x=x*val;
	y=y*val;
	
}
void vecteur :: affiche(){
	cout<<"x = "<<x<<" y= "<<y<<endl;
}
float vecteur:: det(vecteur v1)
{
	return v1.x * y - x *v1.y;
}
int main(){
	vecteur v1(1,2),v2(0.5,4);
	cout<<"Le vecteur 1 : "<<endl;
	v1.affiche();
	cout<<"Le vecteur 2 : "<<endl;
	v2.affiche();
	cout<<"Les valeurs nouvelles de la vecteur 1 : "<<endl;
	v1.homotethie(2);
	v1.affiche();
	cout<< "Le determinant des deux vecteurs v1 et v2 : \n";
	cout <<"det(v1,v2) = "<<v1.det(v2);
}


