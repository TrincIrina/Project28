#pragma once
#include<iostream>

//����� "��������������"
class Parallelogram
{
private:
	//������� 
	double a;
	double b;
	double angle; //����
	const double pi = 3.141592; //����� ��
public:
	//������������
	Parallelogram();
	Parallelogram(double a, double b, double angle);
	//������� � �������
	double& A() { return a; }
	double& B() { return b; }
	void set_angle(double angle) { this->angle = angle; }
	double get_angle() { return angle; }
	void input();  //����� �����
	void print();  //����� ������
	double perimetr(); //����� ���������� ���������
	double square();  //����� ���������� �������
};