#include<iostream>
using namespace std;
int main()
{
  double d=3.145;
  int i;
  i=d; // ce type de conversation appell� "conversation implicite"
  cout << "La valeur de d : "<<i<<endl;
  i =(int) d;// ce type de conversation appell� "conversation explicite"
  cout << "La valeur de d : "<<i;
  
}
