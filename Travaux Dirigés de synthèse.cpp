#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

class Employe
{
	int Matricule;
	string Nom;
	float Salaire;
	int Age;
	public :
	Employe(int,string,int,float);//Constructeur
	string ToString()const;//permettant d'afficher toutes les caractéristique d'un employé
	float GetSalaire();//permettant de retourner la salaire d'un employe
	void SetSalaire(float);//permettant de changer le salaire d'un employe
	void AfficherS();//permettant d'afficher le salaire d'un employe
	int GetAge();//permettant de retourner l'age d'un employe
	void SetAge(int);//permettant de changer l'age d'un employe
	void AfficherA();//permettant d'afficher l'age d'un employe
	~Employe();//Destructeur
};
class Adherent : public Employe {
	string date_adherence;
	float montant;
	public :
		Adherent(int,string,int,float,string,float);
		float GetMontant();
		void SetMontant(float);
		float GetSalaire();
		void AfficherS();	
};
Employe :: Employe(int mat,string nom,int age,float sal){
	this->Matricule=mat;
	this->Nom=nom;
	this->Age=age;
	this->Salaire=sal;
}
string Employe :: ToString() const {
	return "Matricule : " + to_string(this->Matricule) + "\n Nom : " + this->Nom +  "\n Age : " +to_string(this->Age)+"\n Salaire : " +to_string(this->Salaire) +"\n" ;
}
float Employe :: GetSalaire() { return this->Salaire; }
void Employe :: SetSalaire(float salaire){ this->Salaire=salaire; }
void Employe :: AfficherS(){ cout<<"Le salaire est : "<<this->Salaire;}
int Employe :: GetAge() { return this->Age; }
void Employe :: SetAge(int Age){ this->Age=Age; }
void Employe :: AfficherA(){ cout<<"L'age est : "<<this->Age;}
Adherent :: Adherent(int mat,string nom,int age,float sal,string date,float montant) : Employe(mat,nom,age,sal){
	this->date_adherence=date;
	this->montant=montant;
}
float Adherent :: GetMontant() { return this->montant; }
void Adherent :: SetMontant(float Montant){ this->montant=Montant; }
float Adherent :: GetSalaire() { return Employe :: GetSalaire()-this->montant; }
void Adherent :: AfficherS(){ cout<<"Le salaire est : "<<this->GetSalaire()<<endl;}
Employe :: ~Employe(){
	cout<<"\nTaper une touche pour continuer ...";
	getch();
	cout<<"\nDestruction du l'employe :\n Matricule : "<<Matricule<<"\n Nom : "<<Nom<<"\n Age : "<<Age<<"\n Salaire : "<<Salaire;
}
int main(){
	Employe E(1,"Kamis",26,3000);
	Adherent EA(1,"Kamis",26,3000,"27/01/2022",500);
	cout<<"l'employe : \n "<<E.ToString()<<endl;
	E.AfficherS();
	cout<<endl;
	E.SetAge(27);
	E.AfficherA();
	cout<<endl;
	cout<<"\n-----------------------------------"<<endl;
	EA.GetSalaire();
	EA.AfficherS();
	cout<<"le montant est : "<<EA.GetMontant()<<endl;
	EA.SetMontant(250);
	EA.AfficherS();
	
}
