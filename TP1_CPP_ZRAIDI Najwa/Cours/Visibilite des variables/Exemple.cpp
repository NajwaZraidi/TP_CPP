#include<iostream>
using namespace std;
int i=11; // declaration d'un variable global
int main()
{
    int i=34;
    {
    	int i=23; // declaration d'un variable local dans le bloc
    	:: i= :: i+1;
    cout<< :: i <<" "<<i<<endl;
	}
  cout<< :: i <<" "<<i<<endl;
  
}
