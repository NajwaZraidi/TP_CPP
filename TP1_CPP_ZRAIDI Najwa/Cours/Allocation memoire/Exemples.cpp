#include<iostream>
using namespace std;

int main(){
	int *pi;//déclaration du pointeur
	pi=new int;//allcation de la mémoire
	/* ou aurait pu écrire :
	int *pi = new int; // Allocation de memoire en c est : pi=(int*)malloc(sizeof(int));
	*/
	int *ptr1,*ptr2,*ptr3; // declaration des poitures
	//Allocation dynamique d'un entier
	ptr1=new int;
	//Allocation d'un tableau de 10 entiers
	ptr2=new int[10];
	//Allocation d'un entier avec intialisation 
	ptr3=new int(10);
	// structure de date qui regroupe jour,mois et année
	struct date {int jour,mois,an;};
	date *ptr4,*ptr5,*ptr6,d={25,4,1952};
	//Allocation dynamique d'une structure
	ptr4=new date;
	//Allocation dynamique d'un tableau de structure
	ptr5=new date[10];
	//Allocation dynamique d'une structure avec intialisation
	ptr6=new date(d);
}
