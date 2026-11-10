#include<iostream>
#include"quadratic.h"




void quadratic(double a, double b, double c) {
	int  choice;
	double su = 0, sum = 0;
	if (a == 0 && b != 0) { std::cout << "the  solve is :\n" << -c / b << std::endl;return; }
	if (a == 0 && b == 0) { std::cout << "no real solution exists for this quadratic equation   ! \n";return; }
	su = (b * b) - (4 * a * c);
	if (su > 0) {

		sum = (-b - sqrt(su)) / (2 * a);
		std::cout << "the first solve is :\n" << sum << std::endl;
		sum = (-b + sqrt(su)) / (2 * a);
		std::cout << "the second solve is :\n" << sum << std::endl;

	}

	else if (su == 0) {

		sum = -b / (2 * a);
		std::cout << "the  solve is :\n" << sum << std::endl;

	}
	else {
		std::cout << "no real solution exists for this quadratic equation   ! \ndo you eant the solution in terms of imaginary numbers ? \n";
		std::cout << "1.YES \n2.NO \n";
		std::cin >> choice;
		if (choice == 1) {



			std::cout << "the first imaginary solve is :\n" << -b / 2 * a << '+' << sqrt(abs(su)) / 2 * a << 'i' << std::endl;
			sum = (-b + sqrt(su)) / (2 * a);
			std::cout << "the second imaginary solve is :\n" << -b / 2 * a << -sqrt(abs(su)) / 2 * a << 'i' << std::endl;









		}
		else { return; }

	}

















}
