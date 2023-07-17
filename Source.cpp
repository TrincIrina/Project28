#include<iostream>
#include<Windows.h>
#include"Rectangl.h"
#include"Parallelogram.h"
using namespace std;

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	//Применение класса Прямоугольник
	Rectangl C;
	C.Input();  //Пользователь вводит данные
	//Нахождение периметра и площади заданного прямоугольника
	cout << "P = " << C.Perimetr() << endl;
	cout << "S = " << C.Square() << endl << endl;
	//Второй прямоугольник, сразу задаём стороны
	Rectangl rec(12.45, 26.38);
	rec.Print();
	//изменение длин сторон
	rec.W() += 1.5;
	rec.L() += 1.5;
	cout << "a = " << rec.W() << ", b = " << rec.L() << endl << endl;
	//Применение класса Параллелограм
	//Первая фигура с заданными сторонами и углом между ними
	Parallelogram K(12, 25, 85);
	K.print(); //Вывод
	//Нахождение периметра и площади параллелограмма
	cout << "P = " << K.perimetr() << endl;
	cout << "S = " << K.square() << endl << endl;
	//Вторая фигура
	Parallelogram P;
	P.input(); //Пользователь вводит данные
	cout << "P = " << P.perimetr() << endl;
	cout << "S = " << P.square() << endl;
}