#include<iostream>
using namespace std;

void f1(int n=3){//par d�faut le param�tre n vaut 3
	//traitement
}
void f2(int n,float x=2.35){
	//traitement
}
void f3(char c,int n=3,float x=2.35){
    //traitement
}
int main(){
	char a=0; int i=2; float r=5.6;
	f1(i);//l'arguemt n vaut 2, l'initialisation par d�faut est ignor�e
	f1();// L'argument n prend la valeur par d�faut : 3
	f2(i,r); // les intialisations par defaut sont ignor�es
	f2(i); //le second pram�tre prend la valeur par d�faut !!! f2(); interdit car Dans la fonction a des arguments 
	f3(a,i,r); // les initialisations par defaut sont ignor�es 
	f3(a,i); //Le troisi�me param�tre prend la valeur par defaut
	f3(a); // le deuxi�me et la troisi�me param�tres prennent les valeurs par defaut

}
