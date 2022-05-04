#include <istream>
#include <ostream>
#include <iostream>
#include <math.h>
#include "Application.h"
using namespace std;
complex :: complex(double reel,double imag)//constructeur
	{
	this->re=reel;
	this->im=imag;
	}
	//complex manipulation
double complex ::  real()//retourne la partie reelle
   {
   	return re;
   }
double complex ::  imag()//retourne la partie imaginaire
 {
 	return im;
 }
complex complex :: conj(complex NC) //the complex conjugate
 {  complex res;
 	res.re = NC.re;
 	res.im = -NC.im;
 	return res;
 }
double complex :: norm(complex NC)//the square of the magnitude 
 {
   return sqrt((NC.re*NC.re)+(NC.im*NC.im));
 }
double complex :: arg(complex NC) // the angle in radians
{
 	const float PI =3.14;
 	if(NC.im==0)return 0;
 	else
 	if(NC.re==0)
 	 if(NC.im>0)
 	 return PI/2;
 	 else return -PI/2;
 	else 
 	return(atan(NC.im/NC.re));
 	
}
	//create a complex object givin polar coordinates
complex complex :: polar(double mag,double angle){
	complex res;
	res.re= mag * cos(angle);
	res.im = mag *sin(angle);
	return res;
}
complex complex :: operator+(complex NC){
	complex res;
	res.re=this->re+NC.re;
	res.im=this->im+NC.im;
	return res;
}
complex operator+(double d,complex NC){
	complex res;
	res.re=d+NC.re;
	res.im=NC.im;
	return res;	
}	//donnent une signification aux deus
complex operator+(complex NC,double d){
	complex res;
    res.re=NC.re+d;
	res.im=NC.im;
	return res;	
}
complex complex :: operator-(complex NC){
	complex res;
	res.re=this->re-NC.re;
	res.im=this->im-NC.im;
	return res;
}
complex operator-(double d,complex NC){
	complex res;
	res.re=d-NC.re;
	res.im=NC.im-d;
	return res;	
}
complex operator-(complex NC,double d){
	complex res;
	res.re=NC.re-d;
	res.im=NC.im;
	return res;	
}
complex complex :: operator*(complex NC){
	complex res;
	res.re=this->re*NC.re;
	res.im=this->im*NC.im;
	return res;
}
complex operator*(double d,complex NC){
	complex res;
	res.re=d*NC.re;
	res.im=d*NC.im;
	return res;	
}
complex operator*(complex NC,double d){
	complex res;
	res.re=NC.re*d;
	res.im=NC.im*d;
	return res;	
}
complex complex :: operator/(complex NC){
	complex res,num,denum;
	num=(*this).operator *(NC.conj(NC));
	denum=NC.operator *(NC.conj(NC));
	res.im=num.im/denum.re;
	res.re=num.re/denum.re;
	return res;
}
complex operator/(double d,complex NC){
	complex res;
	res.re=d/NC.re;
	res.im=d/NC.im;
	return res;	
}
complex operator/(complex NC,double d){
	complex res;
	if(d!=0){
	res.re=NC.re/d;
	res.im=NC.im/d;
	return res;	
	}
	return -1;
}
int complex :: operator==(complex NC){
	if(this->re == NC.re && this->im==NC.im)
	return 1;
	else 
	return 0;
}
int complex :: operator!=(complex NC){
	if(this->re != NC.re || this->im!=NC.im)
	return 1;
	else 
	return 0;
}
ostream& operator<<(ostream& printOut,complex& NC){
    printOut<<NC.real()<< "+" <<NC.imag()<<"i";
    return printOut;
}
istream& operator>>(istream& printIn, complex& c){
    printIn >> c.re >> c.im;
    return printIn;
}
int main(){
	complex i,s,C,p,sum,prod,sus,div;
	int choix;
	double d;
	cout<<"--------------------------------------------------------\n";
	cout<<"L'AFFICHAGE ET LA LECTEUR DES NOMBRES COMPLEXE : "<<endl;
	cout<<"--------------------------------------------------------\n";
	cout<<"\n Entrer un nombre complexe i est : "<<endl;
	operator>>(cin,i);
	cout<<" Le nombre complexe i est : "<<endl;
	operator<<(cout,i);
	cout<<"\n Entrer un nombre complexe S est : "<<endl;
	operator>>(cin,s);
	cout<<" Le nombre complexe S est : "<<endl;
	operator<<(cout,s);
	cout<<"\n--------------------------------------------------------\n";
	cout<<"LES OPERATIONS SUR LES NOMBRES COMPLEXE "<<endl;
	cout<<"--------------------------------------------------------\n";
	cout<<"                       Menu : " <<endl;
	cout<<" 1- LE CONJUGASON DU NOMBRE COMPLEXE "<<endl;
	cout<<" 2- LE MODULE DU NOMBRE COMPLEXE "<<endl;
	cout<<" 3- L'ARGUMENT DU NOMBRE COMPLEXE "<<endl;
	cout<<" 4- LE POLAR DU NOMBRE COMPLEXE "<<endl;
	cout<<" 5- LA SOMME "<<endl;
	cout<<" 6- LE PRODUIT "<<endl;
	cout<<" 7- LA SUSTRACTION "<<endl;
	cout<<" 8- LA DIVISION "<<endl;
	cout<<" 9- L'EGALITE DE DEUX NOMBRES COMPLEXES equal()"<<endl;
	cout<<" 10- L'EGALITE DE DEUX NOMBRES COMPLEXES  not equal()"<<endl;
	cout<<"--------------------------------------------------------\n";
	cout<<"Entrer votre choix : \n ";
	cin>>choix;
	switch(choix){
	case 1:
	C=s.conj(s);
	cout<<"\n Le conjugason de i est : "<<endl;
	operator<<(cout,C);
	C=i.conj(i);
	cout<<"\n Le conjugason de S est : "<<endl;
	operator<<(cout,C);
	break;
	case 2:
	cout<<"\n Le norm  de S est : "<<endl;
	cout<<s.norm(s)<<endl; 
	cout<<"\n Le norm  de i est : "<<endl;
	cout<<i.norm(i)<<endl; 
	break;
	case 3:
	cout<<" L'argument de S est : "<<endl;
	cout<<s.arg(s)<<endl;
	cout<<" L'argument de i est : "<<endl;
	cout<<i.arg(i)<<endl;
	break;
	case 4:
	cout<<" Le polar de S est : "<<endl;
	p=i.polar(2,10);
	operator<<(cout,p);
	cout<<" Le polar de S est : "<<endl;
	p=s.polar(2,10);
	operator<<(cout,p);
	break;
	case 5:
	cout<<"\n--------------------------------------------------------\n";
	cout<<"                   LA SOMME : "<<endl;
	cout<<"--------------------------------------------------------\n";
	cout<<"\n La somme de nombre complexe S et le nombre i est : "<<endl;
	sum=i.operator+(s);
	operator<<(cout,sum);
	cout<<"\nEntrer le nombre double : "<<endl;
	cin>>d;
	cout<<"\n La somme de nombre complexe i et le nombre double est : "<<endl;
	
	sum=operator+(i,d);
	operator<<(cout,sum);
	cout<<"\n La somme de nombre double et le nombre complexe i est : "<<endl;
	sum=operator+(d,i);
	operator<<(cout,sum);
	break;
	case 6 :
	cout<<"\n--------------------------------------------------------\n";
	cout<<"                   LE PRODUIT : "<<endl;
	cout<<"--------------------------------------------------------\n";
	cout<<"\n Le produit de nombre complexe S et le nombre i est : "<<endl;
	prod=i.operator*(s);
	operator<<(cout,prod);
	cout<<"\nEntrer le nombre double : "<<endl;
	cin>>d;
	cout<<"\n Le produit de nombre complexe i et le nombre double est : "<<endl;
	prod=operator*(i,d);
	operator<<(cout,prod);
	cout<<"\n Le produit de nombre double et le nombre complexe i est : "<<endl;
	prod=operator*(d,i);
	operator<<(cout,prod);
	break;
	case 7:
	cout<<"\n--------------------------------------------------------\n";
	cout<<"                   LA SUSTRACTION : "<<endl;
	cout<<"--------------------------------------------------------\n";
	cout<<"\n La sustraction de nombre complexe S et le nombre i est : "<<endl;
	sus=i.operator-(s);
	operator<<(cout,sus);
	cout<<"\nEntrer le nombre double : "<<endl;
	cin>>d;
	cout<<"\n La sustraction de nombre complexe i et le nombre double est : "<<endl;
	sus=operator-(i,d);
	operator<<(cout,sus);
	cout<<"\n La sustraction de nombre double et le nombre complexe i est : "<<endl;
	sus=operator-(d,i);
	operator<<(cout,sus);
	break;
	case 8:
	cout<<"\n--------------------------------------------------------\n";
	cout<<"                   LA DIVISION : "<<endl;
	cout<<"--------------------------------------------------------\n";
	cout<<"\n La division de nombre complexe S et le nombre i est : "<<endl;
	div=i.operator/(s);
	operator<<(cout,div);
	cout<<"\nEntrer le nombre double : "<<endl;
	cin>>d;
	cout<<"\n La division de nombre complexe i et le nombre double est : "<<endl;
	div=operator/(i,d);
	if(div==-1){cout<<"Impossible de diviser sur 0 "<<endl;	}
	else operator<<(cout,div);
	cout<<"\n La division de nombre double et le nombre complexe i est : "<<endl;
	div=operator/(d,i);
	operator<<(cout,div);
	break;
	case 9:
	cout<<"\n--------------------------------------------------------\n";
	cout<<"   L'egalite de nombre complexe S et le nombre i   : "<<endl;
	if(i.operator==(s))
	cout<<"\n Le nombre complexe S = Le nombre complexe i ";
	cout<<"--------------------------------------------------------\n";	
	break;
	case 10:
	cout<<"\n--------------------------------------------------------\n";
	cout<<"   L'egalite de nombre complexe S et le nombre i   : "<<endl;
	if(i.operator!=(s))
	cout<<"\n Le nombre complexe S != Le nombre complexe i ";
	break;
	}
}

