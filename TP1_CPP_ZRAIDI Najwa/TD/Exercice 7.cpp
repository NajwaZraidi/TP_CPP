#include<iostream>
#include<conio.h>
using namespace std;

void affiche(float x,int n=0){ //Cette fonction affiche  X^n (Avec en particulier x^0=1 et donc, 0^0=1)
	float R=1;
	if (n==0 || x==0 )cout<<"Resultat de puissance est : 1 "<<endl ;
	else{
	for(int i=1;i<=n;i++)
	R=R*x;
	cout<<"Resultat de puissance est : "<<R<<endl;	}		
}
void affiche(int n,float x=0){ //Cette fonction affiche  X^n (Avec en particulier 0^n=0 et donc, 0^0=0)
	float R=1;
	if (x==0 && n==0)
		cout<<"Resultat de puissance est : 0 \n" ;
	else
	if(x!=0 && n!=0){
	for(int i=1;i<=n;i++)
	R=R*x;
	cout<<"Resultat de puissance est : "<<R<<endl;	}
	else cout<<"Resultat de puissance est : 0 \n" ;	  	
}
int main(){
	float x;
	int n;
	cout<<"**** La fonction puissance : ****"<<endl;
	cout<<" Entrer le nombre : ";
	cin>>x;
	cout<<" Entrer la puissance : ";
	cin>>n;
	cout<<" Question 1 : "<<endl;
	affiche(x,n); 
	 cout<<" Question 2 : "<<endl;
	affiche(n,x);}
