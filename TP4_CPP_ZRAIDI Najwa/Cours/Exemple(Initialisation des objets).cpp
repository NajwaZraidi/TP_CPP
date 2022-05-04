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

int main(){
	cout<<"Debut de main()\n";
	point a(3,7);
	point b=a;
	cout<<"Fin de main() \n ";
}
