#include<iostream>
using namespace std;


void swap(int* a, int* b) {
	int c = *a;
	*a = *b;
	*b = c;
}


int main() {
	int a = 1000;
	cout << "Premenna a ma hodnotu: " << a << " a je v pameti ulozena na adrese " << &a << endl;
	int* p_a = &a;
	*p_a = 15;
	cout << "Ukazovatel p_a ma hodnotu " << p_a << " a ukazuje na hodnotu " << *p_a << endl;
	cout << "Hodnota ulozena v a je " << a << endl;

	cout << endl;

	double b = 100.10;
	cout << "Premenna b ma hodnotu: " << b << " a je v pameti ulozena na adrese " << &b << endl;
	double* p_b = &b;
	*p_b = 30.6;
	cout << "Ukazovatel p_b ma hodnotu " << p_b << " a ukazuje na hodnotu " << *p_b << endl;
	cout << "Hodnota ulozena v b je " << b << endl;

	cout << endl;

	float c = 573.98;
	cout << "Premenna c ma hodnotu: " << c << " a je v pameti ulozena na adrese " << &c << endl;
	float* p_c = &c;
	*p_c = 1.12;
	cout << "Ukazovatel p_c ma hodnotu " << p_c << " a ukazuje na hodnotu " << *p_c << endl;
	cout << "Hodnota ulozena v c je " << c << endl;

	cout << endl;

	bool d = true;
	cout << "Premenna d ma hodnotu: " << d << " a je v pameti ulozena na adrese " << &d << endl;
	bool* p_d = &d;
	*p_d = false;
	cout << "Ukazovatel p_d ma hodnotu " << p_d << " a ukazuje na hodnotu " << *p_d << endl;
	cout << "Hodnota ulozena v d je " << d << endl;

	cout << endl;

	short e = -89;
	cout << "Premenna e ma hodnotu: " << e << " a je v pameti ulozena na adrese " << &e << endl;
	short* p_e = &e;
	*p_e = -42;
	cout << "Ukazovatel p_e ma hodnotu " << p_e << " a ukazuje na hodnotu " << *p_e << endl;
	cout << "Hodnota ulozena v e je " << e << endl;

	return 0;
}