#include "Parallelogram.h"

Parallelogram::Parallelogram()
{
	a = 0; b = 0; angle = 0;
}
Parallelogram::Parallelogram(double a, double b, double angle)
{
	this->a = a; this->b = b;
	this->angle = angle;
}

void Parallelogram::input()
{
	std::cout << "������� ������ ������� ���������������: "; std::cin >> a;
	std::cout << "������� ������ ������� ���������������: "; std::cin >> b;
	std::cout << "������� �������� ����: "; std::cin >> angle;
}
void Parallelogram::print()
{
	std::cout << "������ ������� ��������������� - " << a << std::endl;
	std::cout << "������ ������� ��������������� - " << b << std::endl;
	std::cout << "���� ����� ��������� - " << angle << std::endl;
}
double Parallelogram::perimetr()
{
	return 2 * (a + b);
}

double Parallelogram::square()
{
	if (angle > 90)
		angle = 180 - angle;
	double r = angle * pi / 180;  //��������� ������� � �������
	return a * b * sin(r);
}