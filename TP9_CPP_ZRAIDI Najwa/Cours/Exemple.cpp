#include <iostream>

using namespace std;	

class vehicule
{
	public :
	void afficher () const;
	virtual void afficher2 () const;
	
	protected :
	int m_prix;

};

class voiture : public vehicule
{
	public :
	void afficher () const;
	virtual void afficher2 () const;

	private :
	int m_portes;
};

class moto : public vehicule
{
	public :
	void afficher () const;
	virtual void afficher2 () const;
	
	private :
	double m_vitesse;

};

void vehicule::afficher() const {
	cout<<"ceci est un vehicule "<<endl;
}

void voiture::afficher() const {
	cout<<"ceci est une voiture "<<endl;
}

void moto::afficher() const {
	cout<<"ceci est une moto "<<endl;
}

void vehicule::afficher2() const {
	cout<<"ceci est un vehicule "<<endl;
}

void voiture::afficher2() const {
	cout<<"ceci est une voiture "<<endl;
}

void moto::afficher2() const {
	cout<<"ceci est une moto "<<endl;
}

/// partie 2 
void presenter(vehicule v){
	v.afficher();
}

// partie 3 : virtualisation de la methode afficher :p 
void presenter2(vehicule& v){
	v.afficher2();
}

int main(){
	/// test 1
		cout<<endl<<"------------------ test 1"<<endl;
		
		vehicule v;
		v.afficher();
		
		moto m;
		m.afficher();
	
	/// fin test1
	
	/// test partie 2
		cout<<endl<<"------------------ test partie 2"<<endl;
		
		presenter(v);
		presenter(m);
		
	/// fin test partie  2
	
	/// test partie  3 
		cout<<endl<<"------------------ test partie  3 "<<endl;
		presenter2(v);
		presenter2(m);
	/// fin test partie 3
	

    return 0;
}
