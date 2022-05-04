#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
class Complexe{
	double reel,img;
	public:
	Complexe();
	Complexe(double);
	Complexe(double,double);	
	void set(double,double);
	double Module();
	void affiche();
};
Complexe :: Complexe(){
    reel=0;
	img=0;	
};
Complexe :: Complexe(double x){
    reel=x;
	img=0;	
};
Complexe :: Complexe(double x,double y){
    reel=x;
	img=y;	
};
void Complexe :: set(double x,double y){
	reel=x;
	img=y;
};
double Complexe :: Module(){
return sqrt(reel*reel+img*img); }

void Complexe :: affiche(){
	cout<<reel<<" + "<<img<<"i"<<endl;
}
int main(){
	Complexe a,b(7),c(2,4);
	cout<<"Le nombre Complexe a   : "<<endl;
    a.affiche();//affichage intial de a grace le premier constructeur
    cout<<"Le modele de a est : " << a.Module()<<endl;// le modeule de nombre complexe a
    cout << "La nouvelle valeur de a est : ";
    a.set(4.1,2.5); // Modification des valeurs avec la methode set
    a.affiche();
    cout<<"Le nombre Complexe b  : "<<endl;
    b.affiche();//affichage intial de a grace le deuxieme constructeur
    cout<<"Le modele de b est : " << b.Module()<<endl;// le modeule de nombre complexe a
    cout<<"Le nombre Complexe c   : "<<endl;
    c.affiche();//affichage intial de a grace le troisieme constructeur
    cout<<"Le modele de c est : " << c.Module()<<endl;// le modeule de nombre complexe a
    
	
}
