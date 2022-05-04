#include<iostream>
using namespace std;

void ma_fonction1(){// Prototype de fontion ma_fonction1(){ // la definition de la fonction ma_fonction1 apres l'appele
	cout<<"Hello world !! \n";
}
float ma_fonction2(int,float);//Prototype de fontion ma_fonction2()
int main()
{
   
   ma_fonction1();
}

float ma_fonction2(int n,float f){ // la definition de la fonction ma_fonction2
{
	return n+f;
}
