#include "pch.h"
#include <iostream>

int main()
{
	const int laenge = 20;
	int fibonacci[laenge];
	
	std::cout << "Fibonacci-Folge:\n"; 

	fibonacci[0] = 1;
	fibonacci[1] = 1;

	for (int i = 2; i < laenge; i++) {
		fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
	}
	
	for (int i = 0; i < laenge; i++) {
		std::cout << fibonacci[i] << " ";
	}

	char stop = getchar();

	return 0;
}