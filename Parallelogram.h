#pragma once
#include<iostream>

//Класс "Параллелограмм"
class Parallelogram
{
private:
	//стороны 
	double a;
	double b;
	double angle; //угол
	const double pi = 3.141592; //число пи
public:
	//Конструкторы
	Parallelogram();
	Parallelogram(double a, double b, double angle);
	//геттеры и сеттеры
	double& A() { return a; }
	double& B() { return b; }
	void set_angle(double angle) { this->angle = angle; }
	double get_angle() { return angle; }
	void input();  //метод ввода
	void print();  //метод вывода
	double perimetr(); //метод нахождения периметра
	double square();  //метод нахождения площади
};