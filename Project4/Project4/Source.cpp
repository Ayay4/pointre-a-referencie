#include <iostream>
using namespace std;

/*Pointre a Referencie
	*/
void swap(int* a, int* b) {
	int c = *a;
	*a = *b;
	*b = c;
}

void napln_pole(int pole[], int dlzka) {

	for (int i = 0; i < dlzka; i++)
	{
		pole[i] = i + 1; 
	}
}

int main() {
	
	//1. referencie
	int a;
	a = 56;
	cout << "premenna a ma hodnotu: " << a << " a je v pameti ulozena na adrese " << &a << endl;

	//2.
	int b = 99;
	int* p_b = &b;  // Uloží do p_a adresu premennej 
	*p_b = 15;
	
		cout << " ukazovatel p_b ma hodnotu " << p_b << " a ukazuje na hodnotu "<< *p_b << endl;
	cout << "hodnota ulozena v b je " << b << endl;	

	//3. swap funkcie - parametre pomocou referencii

	int c1 = 10;
	int c2 = 20;
	swap(c1, c2);
	cout << " v cisle 1 je cislo " << c1 << " a v cisle 2 je cislo " << c2 << endl;

	//4. predavanie poli

	int cisla[10];
	napln_pole(cisla, 10);
	cout << cisla[5] << endl; //vypise cislo 6

	int pole[10];
	int* p_pole = pole;
	cout << &pole;
	cout << p_pole;

	//5. null + recap

	*p_pole = NULL;
	*pole = NULL;



	int* cislo = new int;	
	double* desatinne_cislo = new double;

	delete cislo;
	cislo = NULL;
	delete desatinne_cislo;
	desatinne_cislo = NULL;


	/*
	vytvorte si premenne roznych typov (5-int,  bool, float...)
	a vypiste ich adresu a hodnotu+ pre kazdu premennu vypiste pointer p_x
	a jeho adresu a hodnotu. podobne ako v priklade 2!
	return 0;
}







