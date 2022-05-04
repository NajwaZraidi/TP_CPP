#include<iostream>
using namespace std;

class liste
{
	int taille;
	float *adr;
	public :
		liste(int);
		liste(liste &);
		void saisie();
		void affiche();
		liste oppose();
		~liste();
};
liste :: liste(int t){
	taille =t;
	adr= new float[taille];
	cout<<"Construction : \n";
	cout<<" - Adresse de l'objet : "<<this<<endl;
	cout<<" - Adresse de liste : "<<adr<<endl;
}
liste :: liste(liste &v){ //passage par référence obligatoire
	taille =v.taille;
	adr= new float[taille];
	for(int i=0;i<taille;i++)
	adr[i]=v.adr[i];
	cout<<"Construction par recopie : \n";
	cout<<" - Adresse de l'objet : "<<this<<endl;
	cout<<" - Adresse de liste : "<<adr<<endl;
}
liste :: ~liste(){
	cout<<"Destruction : \n - Adresse de l'objet : "<<this<<endl;
	cout<<" - Adresse de liste : "<<adr<<endl;
	delete adr;
}
void liste :: saisie(){
	int i;
	for(int i=0;i<taille;i++)
	{
	cout<<"Entrer un nombre : \n";
	cin>>*(adr+i);	
	}	
}
void liste :: affiche(){
	int i;
	for(int i=0;i<taille;i++)
	{
	cout<<*(adr+i)<<" adresse de l'objet : "<<this<<" Adresse de liste : "<<adr<<endl;	
	}
}
liste liste :: oppose(){
	liste res(taille);
	cout<<"liste oppose : \n";
	for(int i=0;i<taille;i++)
	res.adr[i]= -adr[i];
	for(int i=0;i<taille;i++)
	cout<<res.adr[i]<<" \n";
	return res;
}
int main(){
	cout<<"Debut de main()"<<endl;
	liste a(3),b(3);
	a.saisie();
	a.affiche();
	b=a.oppose();
	b.affiche();
	cout<<"Fin de main\n";
}
