#include<iostream>
using namespace std;
struct Complexe
{
	double reel,im;// reel est la partie réel  et im est la partie imaginaire d'un nombre complexe
};
int main(){
	Complexe *Z;
	Z=new Complexe[50];
	char *pc=new char[100];
	delete pc; //desalloue la zone de 100 caratères
	delete Z; //ne libère que le premier élément
	delete []Z;//ou delete [50]Z;
}
