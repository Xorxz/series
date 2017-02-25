#include <iostream>

class Series
{
public:
	//Atributos
	int n;
	//Constructor
	Series(int n);
	//Metodos
	int fibonacciIt();
	int fibonacciRec(int n);
	long double factorialIt();
	long double factorialRec(int n);
};