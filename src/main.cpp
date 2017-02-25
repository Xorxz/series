#include <iostream>
#include "Series.h"

int main()
{
	std::cout<<"\n\nPrograma que calcula la serie de Fibonacci y el factorial"<<std::endl;
	
	std::cout<<"\nIngresa el valor que quieres calcular: "<<std::endl;
	int n;
	std::cin >> n;

	Series s(n);
	std::cout<<"\n\nSerie de Fibonacci Iterativa"<<std::endl;
	std::cout<<s.fibonacciIt()<<std::endl;
	std::cout<<"\n\nSerie de Fibonacci Recursiva"<<std::endl;
	std::cout<<s.fibonacciRec(n)<<std::endl;
	std::cout<<"\n\nFactorial Iterativo"<<std::endl;
	std::cout<<s.factorialIt()<<std::endl;
	std::cout<<"\n\nFactorial Recursivo"<<std::endl;
	std::cout<<s.factorialRec(n)<<std::endl;

	return 0;
}