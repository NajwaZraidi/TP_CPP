#include<iostream>
#include<conio.h>
using namespace std;

class compte_objet
{
	static int ctr;
	public :
		compte_objet();
		~compte_objet();
		static void compte();
};
int compte_objet ::ctr=0;
compte_objet :: compte_objet(){
	cout<< "++construction : il y a maitenant "<<++ctr<<" objets\n";
}
compte_objet :: ~compte_objet(){
	cout<< "--desruction : il y a maitenant "<<--ctr<<" objets\n";
}
void compte_objet :: compte(){
	cout <<"Appel compte : il y a "<< ctr <<" objets\n";
}
void fonction()
{
	compte_objet u,v;
}
int main(){
	void fonction();
	compte_objet :: compte();
	compte_objet a;
	compte_objet :: compte();
	fonction();
	compte_objet :: compte();
	compte_objet b;
	compte_objet :: compte();
	
}
