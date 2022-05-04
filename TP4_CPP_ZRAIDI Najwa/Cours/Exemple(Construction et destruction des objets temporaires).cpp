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
	cout<<"Construction du point "<<x<<"  "<<y<<" a l'adresse : "<<this<<endl;
}
point :: ~point(){
	cout<<"Destruction du point "<<x<<" "<<y<<" a l'adresse : "<<this<<endl;
}
void test(){
	cout<< "Debut de test ()"<<endl;
	point u(3,7);
	cout<<"Fin de test () \n ";
}
int main(){
	cout<<"Debut de main()\n";
	point a(0,0);
	a=point(1,2);
	a=point(3,5);
	point b(5,10);
	cout<<"Fin de main() \n ";
}
