#include <iostream>
double Translate(double years)
{
	return 63240 * years;
}
int main()
{
	double astro;
	double years;
	std::cout << "Enter the number of light years: ";
	std::cin >> years;
	std::cout << std::endl;
	astro = Translate(years);
	std::cout << years << " light years = " << astro << " astronomical units." << std::endl;
	system("pause");
	return 0;
}