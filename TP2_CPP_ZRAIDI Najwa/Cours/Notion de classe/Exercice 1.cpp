#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

class SuiteAr{
	int nbval,*val;
	public :
		SuiteAr(int,int);//contructeur
		~SuiteAr();//decontructeur
		void affiche();
};
SuiteAr :: SuiteAr(int nb,int mul)//constructeur
{
	int i;
	nbval=nb;
	val=new int[nbval];//reserve de la place
	for(i=0;i<nbval;i++)
	val[i]=i*mul;
}
SuiteAr :: ~SuiteAr(){
	delete val;
	//abandon de la place reservee
}
void SuiteAr :: affiche (){
	int i;
	for(i=0;i<nbval;i++)
	cout<<val[i]<<" ";
	cout<<"\n";
}
int main(){
	SuiteAr suite1(10,4);//calcul les 10 premiers termes de la suite arthmetique de raison 4
	suite1.affiche();
	SuiteAr suite2(6,8);//calcul les 6 premiers termes de la suite arthmetique de raison 8
	suite2.affiche();
	getch();
}
