#include<iostream>
using namespace std;

class point {
	int x,y;
	public:
		point(int,int);
		point(point &);//constructeur par recopie
		point symetrique();
		void affiche(){ cout<<"x= "<<x<<" y= "<<y<<"\n";	}
		~point();
};
point :: point(int abs=0,int ord=0){
	x=abs;y=ord;
	cout<<"Construction du point "<<x<<"  "<<y<<" a l'adresse : "<<this<<endl;
}
point :: point(point &pt){
	x =pt.x;y=pt.y;
		cout<<"Construction par recopie du point "<<x<<"  "<<y<<" a l'adresse : "<<this<<endl;
}
point point :: symetrique(){
	point res;
	cout<<"**********************************************\n";
	res.x=-x;
	res.y=-y;
	cout<<"##############################################\n";
	return res;
}
point :: ~point(){
	cout<<"Destruction du point "<<x<<" "<<y<<" a l'adresse : "<<this<<endl;
}

int main(){
	cout<<"Debut de main()\n";
	point a(1,4),b;
	cout<<" Avant appel a symetrique  : \n";
	b=a.symetrique();
	b.affiche();
	cout<<" Apres appel a symetrique  : \n";
	cout<<"Fin de main() \n ";
}
