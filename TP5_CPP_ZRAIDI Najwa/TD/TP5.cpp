#include <iostream>
#include <string>
#include <conio.h>
#include "TP5.hpp"
using namespace std;
// 1ere partie :
forme :: forme(short c){this->couleur=c;}
forme :: forme(forme &f){this->couleur=f.couleur;}
void forme :: affiche(){cout<<"la couleur de la forme est :  "<<couleur<<endl;}
forme forme :: operator =(forme &f){ this->couleur=f.couleur;}
// 2eme partie :
cercle :: cercle(int x,int y,short c,short r) : coordonne(x,y),forme(c)
{
	this->rayon=r;
}
cercle :: cercle(cercle &C) : coordonne(C.x,C.y),forme(C.couleur)
{
	this->rayon=C.rayon;
}
cercle cercle :: operator =(cercle &c)
{
	this->x=c.x;
	this->y=c.y;
	this->couleur=c.couleur;
	this->rayon=c.rayon;	
}
void cercle :: affiche(){
	cout<<"les informations sur le cercle sont : \n les coordonnes : \n x =  "<<x<<"  y = "<<y<<"\nla couleur : \n c = "<<couleur<<"\n le rayon : \n R = "<<rayon<<endl;
}
void cercle :: deplace(int a,int b){	x+=a;	y+=b;	}
float cercle :: surface(){
	float PI =3.14,s;
	s = PI * rayon*rayon;
	 return s;
}
float cercle :: perimetre(){
	float PI =3.14,P;
	P = PI * rayon;
	 return P;
}
// 3eme partie :
triangle :: triangle(int x1,int y1,int x2,int y2,int x3,int y3,short coul) :forme(coul)
{
	a=coordonne(x1,y1);
	b=coordonne(x2,y2);
	c=coordonne(x3,y3);
}
triangle :: triangle(triangle &T) : forme(T.couleur)
{
	a=T.a;
	b=T.b;
	c=T.c;
}
triangle triangle ::  operator =(triangle &T){
	a=T.a;
	b=T.b;
	c=T.c;
	couleur=T.couleur;
}
void triangle::deplace(int x, int y){
	a.deplace(x,y);
	b.deplace(x,y);
	c.deplace(x,y);
}
float triangle:: surface(){
	float s=a.GetX()*(b.GetY()-c.GetY())+b.GetX()*(c.GetY()-a.GetY())+c.GetX()*(a.GetY()-b.GetY());
	if(s<-1) s=-s;
	return (1/2)*(s);//(1/2) |x 1 (y 2 - y 3 ) + x 2 (y 3 - y 1 ) + x 3 (y 1 - y 2 )|
}
float triangle:: perimtre(){
	return 20;// formule de perimetre d'un triangle
}
void triangle::affiche(){
	cout << "\n Affichage d'un Triangle" << endl;
	forme::affiche();
	a.affiche() ;
	b.affiche() ;
	c.affiche() ;
}
// 4eme partie :
rectangle :: rectangle(int x1,int y1,int x2,int y2,short coul) :forme(coul)
{
	a=coordonne(x1,y1);
	b=coordonne(x2,y2);
}
rectangle :: rectangle(rectangle &T) : forme(T.couleur)
{
	a=T.a;
	b=T.b;
}
rectangle rectangle ::  operator =(rectangle &T){
	a=T.a;
	b=T.b;
	couleur=T.couleur;
}
void rectangle::deplace(int x, int y){
	a.deplace(x,y);
	b.deplace(x,y);
}
float rectangle:: surface(){
	return (a.GetX()+a.GetY())*(b.GetX()+b.GetY());
}
float rectangle:: perimtre(){
	return  2 * ((a.GetX()+b.GetX())+(a.GetY() +b.GetY()));// formule de perimetre d'un rectangle
}
void rectangle::affiche(){
	cout << "\n Affichage d'un rectangle " << endl;
	forme::affiche();
	a.affiche() ;
	b.affiche() ;
}
// 5eme partie :
carre :: carre(int x,int y,short cote,short c) : coordonne(x,y),forme(c)
{
	this->cote=cote;
}
carre :: carre(carre &C) : coordonne(C.x,C.y),forme(C.couleur)
{
	this->cote=C.cote;
}
carre carre :: operator =(carre &c)
{
	this->x=c.x;
	this->y=c.y;
	this->couleur=c.couleur;
	this->cote=c.cote;	
}
void carre :: affiche(){
	cout<<"\n les informations sur le carre sont : \n les coordonnes : \n x = "<<x<<" y = "<<y<<"\nla couleur : \n c = "<<couleur<<" \nle cote : \n R = "<<cote<<endl;
}
void carre :: deplace(int a,int b){	x+=a;	y+=b;	}
float carre :: surface(){
	 return cote*cote;
}
float carre :: perimtre(){
	return 4*cote;
}
// Inplementation des differentes formes
int main(){
	cercle c1(10,20,5,12);
	c1.deplace(5,4);
	c1.affiche();
	getch();
	triangle T(10,20,30,40,50,50,1);
	T.affiche();
	T.deplace(5,4);
	T.affiche();
	getch();
	cout<<endl;
	rectangle R(10,20,30,40,50);
	R.affiche();
	R.deplace(5,4);
	R.affiche();
	getch();
	cout<<endl;
	carre c(10,20,5,10);
	c.affiche();
	c.deplace(5,4);
	c.affiche();
    getch();
}
