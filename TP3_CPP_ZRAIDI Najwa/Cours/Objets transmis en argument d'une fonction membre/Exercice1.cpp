#include<iostream>
#include<conio.h>
using namespace std;
class point 
{
	int x,y;
	public :
  point(int abs=0,int ord=0) //constructeur 
    {
	x=abs;
	y=ord;
	}
	int coincide(point *);//passage par adresse
};

int point :: coincide(point *pt){
	
    if((pt->x==x)&&(pt->y==y))
	/*pt.x acces d'absice de point
	 pt et pt.x acces d'ordonnee de point pt*/
    return 1;
    else
    return 0;
}

int main(){
	int test1,test2;
	point a,b(1),c(0,2);
	test1=a.coincide(&b);
	test2=b.coincide(&a);
	cout<<"a et b : "<<test1 <<" ou "<<test2<<endl;
	test1=a.coincide(&c);
	test2=c.coincide(&a);
	cout<<"a et c : "<<test1 <<" ou "<<test2<<endl;
	getch();
}

