#include<iostream>
#include<conio.h>
using namespace std;
class Compteur {
  static int ctr;
	public :
    Compteur();
	~ Compteur();
};
int Compteur::ctr = 0;// initialisation de variable static ctr  dans la classe  Compteur
Compteur :: Compteur()
{
	cout<<"\n Un nouvel objet vient de se creer : "<<endl;
	cout<<"Il y a maitenant : "<<++ctr<<" Objets ";
	getch();
}
Compteur :: ~ Compteur()
{
	cout<<"\n Un objet  vient de se detruire : "<<endl;
	cout<<"Il reste maitenant : "<<--ctr<<" Objets ";
	getch();
}
void Essai(){
	Compteur u,v;
}
int main(){
	Compteur a;
	Essai();
	Compteur b;
	return 0;
}

