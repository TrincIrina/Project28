#pragma once
#include<iostream>
//����� ����������� �������������
class Rectangl
{
private:
	double width; //������ ��������������
	double length; //����� ��������������
public:
	//������������
	Rectangl();
	Rectangl(double width, double length);
	//setters & getters
	double& W() { return width; }
	double& L() { return length; }
	//������ ����� � ������
	void Input();
	void Print();
	//����� ���������� ��������� ��������������
	double Perimetr();
	//����� ���������� ������� ��������������
	double Square();
};