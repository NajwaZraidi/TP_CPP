#include<iostream>
using namespace std;

class point {
	int x,y;
	public:
		point(int,int);
		~point();
};
point :: point(int abs,int ord){
	x=abs;y=ord;
	cout<<"Construction du point "<<x<<"  "<<y<<endl;
}
point :: ~point(){
	cout<<"Destruction du point "<<x<<" "<<y<<endl;
}
int main(){
	void fct(point *);
	point *adr;
	cout<<"Debut de main()\n";
	adr = new point(3,7);//reservation de place en memoire 
	fct(adr);
	delete adr; //liberation de la place
	cout<<"Fin de main() \n ";
}
void fct(point *adp){
	cout <<"Debut de la fonction \n";
	delete adp; //liberation de la place
	cout<<"Fin de la fonction \n ";
}
