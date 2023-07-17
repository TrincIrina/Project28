#pragma once
#include<iostream>
//Класс описывающий прямоугольник
class Rectangl
{
private:
	double width; //ширина прямоугольника
	double length; //длина прямоугольника
public:
	//Конструкторы
	Rectangl();
	Rectangl(double width, double length);
	//setters & getters
	double& W() { return width; }
	double& L() { return length; }
	//Методы ввода и вывода
	void Input();
	void Print();
	//Метод нахождения периметра прямоугольника
	double Perimetr();
	//Метод нахождения площади прямоугольника
	double Square();
};