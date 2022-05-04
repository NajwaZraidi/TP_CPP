#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
class hasard{
	int nbval;
	int *val;
	public:
		hasard(int,int);
		~hasard();
		void affiche();};
hasard :: hasard(int nb,int max){
	int i;
	val=new int[nbval=nb];
	for(i=0;i<nb;i++){
		val[i]=double(rand())/RAND_MAX*max;}}
hasard :: ~ hasard(){
	delete val;
	cout<<"valeur vient de se detruire ...";
}
void hasard :: affiche(){
	int i;
	for(i=0;i<10;i++){
		cout<<val[i]<<" ";
		cout<<"\n";
	}
}
int main(){
	hasard suite1(15,5);
	suite1.affiche();
	getch();
}
