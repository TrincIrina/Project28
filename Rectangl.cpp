#include "Rectangl.h"

Rectangl::Rectangl()
{
	width = 0;
	length = 0;
}
Rectangl::Rectangl(double width, double length)
{
	this->width = width;
	this->length = length;
}

void Rectangl::Input()
{
	std::cout << "Введите ширину прямоугольника: "; std::cin >> width;
	std::cout << "Введите длину прямоугольника: "; std::cin >> length;
}

void Rectangl::Print()
{
	std::cout << "Ширина прямоугольника - " << width << std::endl;
	std::cout << "Длина прямоугольника - " << length << std::endl << std::endl;
}

double Rectangl::Perimetr()
{
	return 2 * (width + length);
}
double Rectangl::Square()
{
	return width * length;
}