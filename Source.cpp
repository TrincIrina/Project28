#include<iostream>
#include<Windows.h>
#include"Rectangl.h"
#include"Parallelogram.h"
using namespace std;

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	//���������� ������ �������������
	Rectangl C;
	C.Input();  //������������ ������ ������
	//���������� ��������� � ������� ��������� ��������������
	cout << "P = " << C.Perimetr() << endl;
	cout << "S = " << C.Square() << endl << endl;
	//������ �������������, ����� ����� �������
	Rectangl rec(12.45, 26.38);
	rec.Print();
	//��������� ���� ������
	rec.W() += 1.5;
	rec.L() += 1.5;
	cout << "a = " << rec.W() << ", b = " << rec.L() << endl << endl;
	//���������� ������ �������������
	//������ ������ � ��������� ��������� � ����� ����� ����
	Parallelogram K(12, 25, 85);
	K.print(); //�����
	//���������� ��������� � ������� ���������������
	cout << "P = " << K.perimetr() << endl;
	cout << "S = " << K.square() << endl << endl;
	//������ ������
	Parallelogram P;
	P.input(); //������������ ������ ������
	cout << "P = " << P.perimetr() << endl;
	cout << "S = " << P.square() << endl;
}