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
	std::cout << "¬ведите первую сторону параллелограмма: "; std::cin >> a;
	std::cout << "¬ведите вторую сторону параллелограмма: "; std::cin >> b;
	std::cout << "¬ведите значение угла: "; std::cin >> angle;
}
void Parallelogram::print()
{
	std::cout << "ѕерва€ сторона параллелограмма - " << a << std::endl;
	std::cout << "¬тора€ сторона параллелограмма - " << b << std::endl;
	std::cout << "”гол между сторонами - " << angle << std::endl;
}
double Parallelogram::perimetr()
{
	return 2 * (a + b);
}

double Parallelogram::square()
{
	if (angle > 90)
		angle = 180 - angle;
	double r = angle * pi / 180;  //переводим градусы в радианы
	return a * b * sin(r);
}