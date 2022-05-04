#include<iostream>
using namespace std;

class point {
	int x,y;
	public:
		point(int abs=0,int ord=0)
		{
			x=abs;y=ord;
		}
		void affiche(){
			static int i=0;
			cout<<"courbe ["<<i<<"]    "<<x<<"  "<<y<<endl;
			i++;
		}
};
int main(){
   point  courbe[5]={7,4,2};
   for (int i=0;i<5;i++){
   	courbe[i].affiche();
   }
}
