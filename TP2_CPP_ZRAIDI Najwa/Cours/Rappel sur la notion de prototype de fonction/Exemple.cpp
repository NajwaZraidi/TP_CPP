#include<iostream>
using namespace std;

void ma_fonction1();// Prototype de fontion ma_fonction1()

void ma_fonction2(int,float);//Prototype de fontion ma_fonction2()
void ma_fonction2(int n,float f){ // la definition de la fonction ma_fonction2
	cout<<"La fonction affiche un entier n = "<<n<<" et un reel f = "<<f<<endl;
}
/* OU
Prototype + la definition de fontion ma_fonction2() 
void ma_fonction2(int n,float f) // la definition de la fonction ma_fonction2
{
	cout<<"La fonction affiche un entier n = "<<n<<" et un réel f = "<<f;
}
*/

int main(){
	
    ma_fonction2(3,1.2); // la definition de la fonction ma_fonction2
    ma_fonction1();
    return 0;

}
void ma_fonction1(){ // la definition de la fonction ma_fonction1 apres l'appele
	cout<<"Hello world !! \n";
}

