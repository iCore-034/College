#include <iostream>
#include <math.h>
using namespace std;
// ��������� ��� ����������� � �������� ������� � �����������, 
// ����� �� ��������� ������ ��� �����
struct DIV {
	int a;         //
	int b;         //   ������� 
	int quotient;  //	���������
	int residual;  //
};
DIV smth; //���������� 1
DIV oper(DIV smth_2) {   //smth_2 - ���������� ���������� ������� (�� ���������, ��� ������� ����� ���������)
	if (smth_2.a >=0)    // ���� ��������� ������ 0
	{
		int a2 = smth_2.a;  //���������� ���������� ��� ������ � ������� ������� ���������, ����� �� �������� ����������� �������
		for (int i = 0; a2 >= 0; i++)
		{
			a2 = a2 - smth_2.b;
			if (a2 >= 0)
			{
				smth_2.quotient++;  // �������
			}
			else {
				smth_2.residual = a2 + smth_2.b; //�������
			}
		}
	}
	else //���� ��������� ������ 0
	{
		int a2 = smth_2.a;
		for (int i = 0; a2 <= 0; i++)
		{
			a2 = a2 + smth_2.b;
			if (a2 <= 0)
			{
				smth_2.quotient--; // �������
			}
			else {
				smth_2.residual = a2 - smth_2.b; //�������
			}
		}
	}
	smth = smth_2;  
	return smth_2;
}
void main() {
	
	cout << "Input numerator: ";  // ���������
		smth.a = 0;
		cin >> smth.a;
	cout << "Input denominator: ";  // �����������
		smth.b = 0;
		cin >> smth.b;
		if (smth.b < 0)   //���������� ��������� ��� ����� 0, ��� �����������
		{
			cerr << "Error: denominator is less or equal 0";
			exit(0);
		}
		oper(smth);  //������� �������� � �������
		cout << "The quotient = " << smth.quotient << endl;
		cout << "The residual = " << smth.residual << endl;
		system("pause");
}