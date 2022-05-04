#include<iostream>
#include<conio.h>
using namespace std;
class point {
	int x,y;
	public :
		void initialiser(int ,int );
		void deplace(int,int);
		void affiche(); 
};
void point :: initialiser(int abs,int ord){
    x=abs;
	y=ord;	
};
void point :: deplace(int dx,int dy){
    x=x+dx;
	y=y+dy;	
};
void point :: affiche(){
	cout<<"Je suis en "<< x<<" "<<y<<endl;
};
void Scene(){
	point u;
	u.initialiser(3,7);
	u.affiche();
	u.deplace(2,4);
	u.affiche();
	getch();
}
int main(){
	Scene();
}
