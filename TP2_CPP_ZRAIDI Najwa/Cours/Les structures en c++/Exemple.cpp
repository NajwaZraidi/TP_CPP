#include<iostream>
using namespace std;

struct point {
	int x;
	int y;
	void initialise(int,int);
	void Deplace(int,int);
	void affiche();
};

void point :: initialise(int abs,int ord)
{
    x=abs;
	y=ord;	
};
void point :: Deplace(int dx,int dy)
{
    x=x+dx;
	y=y+dy;	
};
void point :: affiche()
{
	cout<<"Je suis en "<< x<<" "<<y<<endl;
};
int main(){
	struct point p;//delcation de point 
	p.initialise(2,1);
	p.Deplace(5,1);
	p.affiche();
}
