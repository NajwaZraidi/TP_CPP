#include <string.h>
#include<iostream>
#include<conio.h>
using namespace std;



class String
{
    private:
    char* string_ptr;   //Pointeur sur le texte.
    long size;          //Nombre de caractères du texte (sans compter le caractère final NULL.)
    public:          
	String();   
    String(const char* chaine); //Constructeur basé sur un argument de type chaine de caractère. 
    String(const String& chaine); //Constructeur de recopie d'une autre instance String.
    String operator+(char* chaine); //Operateur + pour la concaténation avec une chaine.
    String operator+(const String& chaine); //Operateur + pour la concaténation avec une instance String.
    friend String operator+(char* str,const String& chaine); //Operateur+ pour la concaténation entre une chaine et une instance String.
    String operator=(const char* chaine); //Operateur = pour l'attribution d'une chaine dans une instance String.
    String operator=(const String& chaine); //Operateur = pour la recopie d'une instance String.
    char* GetStringPtr(); //Permet de recuperer le pointeur texte.
    long GetStringLen();  //Permet de recuperer le nombre de caractères du texte.
    ~String();            //Destructeur permettant de libérer la place emplie par les instances destinées à être détruites.
};



String::String()
{
   string_ptr = NULL;
   size = 0;
}



String::String(const char* chaine)
{
   long Size = strlen(chaine);
   size = Size;
   char* ptr = new char[size+1];
   ptr[size]=0;
   strcpy(ptr,chaine);
   string_ptr = ptr;                
}


String::String(const String& chaine)
{
long Size = strlen(chaine.string_ptr);
size = Size;
char* ptr = new char[size+1];
ptr[size]=0;
strcpy(ptr,chaine.string_ptr);
string_ptr = ptr;                     
}


String String::operator+(char* chaine)
{
String Copie;
long NewLen = (this->size+strlen(chaine));
Copie.string_ptr = new char[NewLen+1];
Copie.size = NewLen;
Copie.string_ptr[NewLen]=0;
strcpy(Copie.string_ptr,this->string_ptr);
strcat(Copie.string_ptr,chaine);
return Copie;
}


String String::operator+(const String& chaine)
{
String Copie;
long NewLen = (this->size+chaine.size);
Copie.string_ptr = new char[NewLen+1];
Copie.size = NewLen;
Copie.string_ptr[NewLen]=0;
strcpy(Copie.string_ptr,this->string_ptr);
strcat(Copie.string_ptr,chaine.string_ptr);
return Copie;
}


String operator+(char* str,const String& chaine)
{
String Copie;
long NewLen = (strlen(str)+chaine.size);
Copie.string_ptr = new char[NewLen+1];
Copie.size = NewLen;
Copie.string_ptr[NewLen]=0;
strcpy(Copie.string_ptr,str);
strcat(Copie.string_ptr,chaine.string_ptr);
return Copie;
}



String String::operator=(const char* chaine)
{

this->size = strlen(chaine)+1;
char* ptr = new char[this->size];

strcpy(ptr,chaine);
delete[] this->string_ptr;
this->string_ptr = ptr; 
this->string_ptr[(this->size)-1]=0;
return *this;      
}



String String::operator=(const String& chaine)
{

this->size = strlen(chaine.string_ptr)+1;
char* ptr = new char[this->size];

strcpy(ptr,chaine.string_ptr);
delete[] this->string_ptr;
this->string_ptr = ptr; 
this->string_ptr[(this->size)-1]=0;
return *this;         
}        



char* String::GetStringPtr()
{
return string_ptr;
}


long String::GetStringLen()
{
return size;
}


String::~String()
{
delete []string_ptr;
string_ptr = NULL;
size = 0;
}



int main(int argc, char *argv[])
{
String A = "Hello";
String B = " World";
A=A+B;


printf("%s\n",A.GetStringPtr()); 
getchar();
}
