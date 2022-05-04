#ifndef COMPLEX_H
#define COMPLEX_H
#include <istream>
#include <ostream>
using namespace std;
class complex 
{
	double re,im;
	public :
	// partie reelle et imaginaire du nombre complexe
	complex(double reel=0,double imag = 0); //constructeur
	//complex manipulation
	double real(); //retourne la partie reelle
	double imag();//retourne la partie imaginaire
	complex conj(complex); //the complex conjugate
	double norm(complex); //the square of the magnitude 
	double arg(complex); // the angle in radians
	//create a complex object givin polar coordinates
	complex polar(double mag,double angle=0);
	//Binary Opertor functions
	complex operator+(complex);
	friend complex operator+(double,complex);
	//donnent une signification aux deus
	friend complex operator+(complex,double);
	//la notion de fonction amie sera etudiee lors du prochain chapitre
	complex operator -(complex);
	friend complex operator-(double,complex);
	friend complex operator-(complex,double);
	complex operator *(complex);
	friend complex operator*(double,complex);
	friend complex operator*(complex,double);
	complex operator /(complex);
	friend complex operator/(double,complex);
	friend complex operator/(complex,double);
	int operator==(complex);
	int operator!=(complex);
	complex operator-();
	friend ostream& operator<<(ostream& ,const complex& );//permet d'utiliser cout avec un complex
    friend istream& operator>>(istream& , complex& );//permet d'utiliser cin avec un complex 
};

#endif
