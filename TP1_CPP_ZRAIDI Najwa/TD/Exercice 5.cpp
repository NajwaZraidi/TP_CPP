#include<iostream>
#include<conio.h>
using namespace std;

void test(int n=0,float x=2.5){
	cout<<"Fonction N�1 :   ";
	cout<<"n= "<<n<<" x="<<x<"\n";
}
void test(float x=4.1,int n=2){
	cout<<"Fonction N�2 :   ";
	cout<<"n= "<<n<<" x="<<x<"\n";
}
int main(){
	int i=5;float r=3.2;
	test(i,r);//Fonction N�1
	test(r,i);//Fonction N�2
	test(i);//Fonction N�1
	test(r);//Fonction N�2
	/* les appels suivants , ambigues, sont rejet�s par le compilateur
	test();
	test(i,i);
	test(r,r);
	les initialisations par d�faut de x � la valeur 4.1
	et de n � 0 sont inutilisables
	*/
	getch();
}
