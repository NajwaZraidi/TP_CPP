#include<iostream>
using namespace std;

class point {
	int x,y;
	public:
		point(int abs=0,int ord=0)
		{
			x=abs;y=ord;
			cout<<"Construction du point "<<x<<"  "<<y<<endl;
		}
};
class pointcol{
	point p;
	int couleur;
	public :
		pointcol(int,int,int);
};
pointcol ::pointcol(int abs,int ord ,int coul) :p(abs,ord)
{
	couleur = coul ;
	cout<<"Construction du pointcol "<<couleur<<endl;
}
int main()
{
	pointcol a(1,3,0);
}
