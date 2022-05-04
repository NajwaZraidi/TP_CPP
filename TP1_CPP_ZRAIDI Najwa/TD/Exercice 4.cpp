#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
float puissance(float x,int n){
	float resultat=1;
	for(int i=1;i<=n;i++)
	resultat=resultat*x;
	return resultat;
}
float puissance1(float x,int n=4){ // declaration + definition de la fonction puissance devra fournir x^4
	float resultat=1;
	for(int i=1;i<=n;i++)
	resultat=resultat*x;
	return resultat;
}
int main(){
	float x1,x2,r;
	int n;
	cout<<"**** La fonction puissance : ****"<<endl;
	cout<<" Entrer le nombre : ";
	cin>>x1;
	cout<<" Entrer la puissance : ";
	cin>>n;
	r=puissance(x1,n);
	cout<<"Resultat de puissance est : "<<r<<endl;
	cout<<"**** La fonction puissance qui existe dans la bibiothèque de match.h : ****"<<endl;
	cout<<"Resultat de puissance est : "<<pow(x1,n)<<endl;
	cout<<"**** La fonction puissance devra fournie x^4 : ****"<<endl;
	cout<<" Entrer le nombre : ";
	cin>>x2;
	r=puissance1(x2);
	cout<<"Resultat de puissance est : "<<r<<endl;
	getch();
}
