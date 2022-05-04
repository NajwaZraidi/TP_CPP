#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
using namespace std;

class Note {
	float value;
	public :
		// les fonctions de 1ere partie  qui vont traiter la note 
		void input();
		void print();
		float set(float);
		float get();
		string apprecier();
		void harmonise(Note &);
		float Moyenne(Note*,int);
		void appreciation(Note *,int);
};
// 1ere partie :
void Note :: input(){ // la fonction input() permet de saisir une note entre 0 et 20
	cout<<"Entrer la note entre 0 et 20 :\n";
	cin>>this->value;
}
void Note :: print(){//la fonction print() permet d'afficher la note
	if(this->value>=0 && this->value<=20)
	cout<<"La note est : "<<value<<endl;
	else
	cout<<"la note n'est pas comprise entre 0 et 20 \n ";
}
float Note :: set(float val){ //la fonction set(float) permet de modifier la note
	return value=val;
}
float Note :: get(){ //la fonction get() permet de retourner la note 
	return value;
}
string Note :: apprecier(){ 
/*la fonction apprecier() permet de retourner une chaine de caract�res qui 
repr�sente l'appr�ciation selon la note */
	if(this->value>=0 && this->value<=20)
	if(value<=8){
	return " le resultat : Insuffisant \n";
	}
	else{
	if(value<12)
	return " le resultat : Passable \n";
	else{
	if(value<14)
		return "le resultat : assez bien \n" ;
	else{
	if(value<16)
		return "le resultat : bien \n";
	else 
	    return "le resultat : tres bien \n";
	}
}
}}

// 2eme partie 

void Note :: harmonise(Note &N){ 
/* la fonction  harmonise(Note &N) 
qui permet d'harmoniser la note recue 
en argument : si cette note est inf�rieure � 8,
 elle sera remplacer par z�ro ,sinon elle sera remplacer par 8 */
	if(this->value>=0 && this->value<=20)
	if(N.value<8){
	 N.value=0;
	}
	else
	N.value=8;	
}
float Note :: Moyenne(Note *v,int nbr){
	/*  La fonction  Moyenne(Note *N,int nbr) qui permet de calculer
	la moyenne de notes d'une classe. Cette fonction recoit comme parametre,
	le tableau des notes de la classe et le nombre d'�l�ves de cette classe */  
	int sum = 0,i=0;
	if(this->value>=0 && this->value<=20)
	for(int i=0;i<nbr;i++){
	sum+=v[i].get();
	}
	return sum/nbr;
}
void Note :: appreciation(Note *N,int n){
	/* La fonction  appreciation(Note *N,int n) qui permet d'afficher les appr�ciations suivant les notes */
	if(this->value>=0 && this->value<=20)
	for(int i=0;i<n;i++){
    cout<<"L'appreciation de L'etudiant "<<i+1<<" : \n"<<N[i].apprecier();
	}
}
int main(){
	// le test de premiere patie 
	Note *N1=new Note;
	N1->input();
	N1->print();
	N1->set(5);
	cout<<"La nouvelle note est : "<<N1->get()<<endl;
	N1->print();
	cout<<N1->apprecier();
	cout<<"-----------------------------------------------\n";
	// 3eme partie 
	int n;
	cout<<"Saisir le nombre d'eleves de la classe : \n";
	cin>>n;
	// cr�ation du tableau des notes
	Note *N=new Note[n];
	//Boucle de saisie des n notes
	for(int i=0;i<n;i++){
		cout<<"L'etudiant "<<i+1<<" : "<<endl;
	    N[i].input();
	}
	// Boucle d'affichage des notes et des appr�ciations 
	cout<<"La liste des notes des etudiants :\n";
	for(int i=0;i<n;i++){
		cout<<"La note d'etudiant "<<i+1<<" : "; 
	    cout<< N[i].get();
	    cout<<"\n";
	}
	cout<< "les resultat des appreciations : \n";
	N->appreciation(N,n);
	// affichage de la moyenne
	cout<<"La moyenne de la classe est : "<<N->Moyenne(N,n)<<endl;
	//Boucle sur les notes, si la note est < 15 alors on l'harmonise
		for(int i=0;i<n;i++){
		if(N[i].get()<15)
	    N[i].harmonise(N[i]);
	}
	cout<<"La nouvelle liste des notes des etudiants :\n";	
		for(int i=0;i<n;i++){
		cout<<"La note d'etudiant "<<i+1<<" : "; 
	    cout<< N[i].get();
	    cout<<"\n";
	}
		// Boucle d'affichage des notes et des appr�ciations 
	cout<< "les resultat des appreciations : \n";
	N->appreciation(N,n);
	// affichage de la moyenne
	cout<<"La moyenne de la classe est : "<<N->Moyenne(N,n)<<endl;	
}
