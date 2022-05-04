#include<iostream>
using namespace std;

struct Complexe
{
	double reel,im;// reel est la partie réel  et im est la partie imaginaire d'un nombre complexe
};
void affiche(int); // declaration de la fonction affiche 
void affiche(double); // declaration de la fonction affiche 
void affiche(Complexe);// declaration de la fonction affiche 

int main(void){
	int a=5;
	double d=0.0;
	Complexe c={1.0,-1.0};
	affiche(a);//Appel la fonction (1)
	affiche(d);//Appel la fonction (2)
	affiche(c);//Appel la fonction (3)
}
void affiche(int i){
	cout<< "TYPE de variable (int) : "<<endl;
	cout<<"Valeur : "<<i<<endl;
}
void affiche(double d){
	cout<< "TYPE de variable (double) : "<<endl;
	cout<<"Valeur : "<<d<<endl;
}
void affiche(Complexe c){
	cout<< "TYPE de variable (complexe) : "<<endl;
	cout<<"Valeur : "<<c.reel<<"+"<<c.im<<endl;
	
}
