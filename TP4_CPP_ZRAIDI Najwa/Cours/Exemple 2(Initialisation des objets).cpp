#include<iostream>
using namespace std;

class liste
{
	int taille;
	float *adr;
	public :
		liste(int);
		liste(liste &);
		~liste();
};
liste :: liste(int t){
	taille =t;
	adr= new float[taille];
	cout<<"Construction : \n";
	cout<<" - Adresse de l'objet : "<<this<<endl;
	cout<<" - Adresse de liste : "<<adr<<endl;
}
liste :: liste(liste &v){ //passage par reference obligatoire
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
int main(){
	cout<<"Debut de main()"<<endl;
	liste a(3);
	liste b=a;
	cout<<"Fin de main\n";
}
