#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
   char c='m',d=25.5,e;
   int i=42,j;
   float r=678.9,s;
   j=c;
   cout<<j<<"\n"; // j prend la valeur de m à encodage assci car j est un entier donc j=109 
   j=r;
   cout<<j<<"\n"; // j prend la valeur de r avec la conversion implicite alors j=678
   s=d;
   cout<<s<<"\n"; 
   /*s prend la valeur de i avec la conversion implicite d'ou s=25.5 mais !!!! d'après le compilateur 
   fait la conversation impilicite de char à un entier donc il affiche s=25 */
   e=i;
   cout<<e<<"\n";// e prend la valeur de i et convertir  à encodage assci car i est un entier donc e=*
   getch();
}
