#include<iostream>
using namespace std;
struct Complexe
{
	double reel,im;// reel est la partie r�el  et im est la partie imaginaire d'un nombre complexe
};
int main(){
	Complexe *Z;
	Z=new Complexe[50];
	char *pc=new char[100];
	delete pc; //desalloue la zone de 100 carat�res
	delete Z; //ne lib�re que le premier �l�ment
	delete []Z;//ou delete [50]Z;
}
