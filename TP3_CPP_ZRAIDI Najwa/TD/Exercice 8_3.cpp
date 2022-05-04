#include<iostream>
using namespace std;

class vecteur
{
	float x,y;
	public :
		vecteur(float,float);
		vecteur &homotethie(float);
		void affiche();
};

vecteur :: vecteur(float abs=0.,float ord =0.){
	x=abs;
	y=ord;
}
vecteur &vecteur :: homotethie(float val){
	static vecteur res; 
	res.x=x*val;
	res.y=y*val;
	return res;
}
void vecteur :: affiche(){
	cout<<"x = "<<x<<" y= "<<y<<endl;
}
int main(){
	vecteur v1(1,2),v2(0.5,4);
	cout<<"Le vecteur 1 : "<<endl;
	v1.affiche();
	cout<<"Le vecteur 2 : "<<endl;
	v2.affiche();
	cout<<"Les valeurs nouvelles de la vecteur 1 : "<<endl;
	v1=v1.homotethie(2);
	v1.affiche();
}


