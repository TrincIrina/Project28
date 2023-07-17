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
	std::cout << "������� ������ ��������������: "; std::cin >> width;
	std::cout << "������� ����� ��������������: "; std::cin >> length;
}

void Rectangl::Print()
{
	std::cout << "������ �������������� - " << width << std::endl;
	std::cout << "����� �������������� - " << length << std::endl << std::endl;
}

double Rectangl::Perimetr()
{
	return 2 * (width + length);
}
double Rectangl::Square()
{
	return width * length;
}