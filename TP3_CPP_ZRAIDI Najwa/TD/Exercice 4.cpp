#include<iostream>
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
	int coincidence(point);
};

int point :: coincidence(point pt){
	
    if((pt.x==x)&&(pt.y==y))
	/*pt.x acces d'absice de point
	 pt et pt.x acces d'ordonnee de point pt*/
    return 1;
    else
    return 0;
}

int main(){
	int test1,test2;
	point a,b(1),c(0,2);
	test1=a.coincidence(b);
	test2=b.coincidence(a);
	cout<<"a et b : "<<test1 <<" ou "<<test2<<endl;
	test1=a.coincidence(c);
	test2=c.coincidence(a);
	cout<<"a et c : "<<test1 <<" ou "<<test2<<endl;
}
