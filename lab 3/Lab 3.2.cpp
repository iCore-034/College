////���� ����������� ����� n > 1 .���������� ����� ������� ���������� ������ ����� 1 / n
//#include<iostream>
//#include <vector>
//using namespace std;
//typedef int I; // �������� ��������� �������( �� �����������, ������ ������ ��� ��������)
//void main() {
//
//	cout << "Enter a number: ";
//	double num = 0;
//	cin >> num;
//	double result = 1 / num;
//	cout << endl << "Resulting number: " << result << endl;
//	double multiple = 1; // ������������ ��� ��������� ���������� �����
//	
//	
//	//vector<int> ending;
//	I integer = 0; // ����� ��� �������� ���� DOUBLE
//	I chisla = 0; // ������������� �����
//	vector<I> after_dot; // ������ � �������������� �������
//	for (I i = 0; chisla >= 0; i++)
//	{
//		multiple *= 10;
//		double integer_fractional = result * multiple;
//		I integer = integer_fractional;
//		chisla = integer % 10;
//		after_dot.push_back(chisla);
//	}
//	after_dot.pop_back(); // ������� -8 � �����
//	
//	for (I i = 0; i < 9; i++)
//	{
//		if (after_dot.back()==0)
//		{
//			after_dot.pop_back();
//		}
//		
//	}
//	I counter = 0; //������� ����� ������� �����
//	for (int i = 0; i < after_dot.size(); i++)
//	{
//		cout << after_dot[i] << " ";
//		counter++;
//	}
//	cout << endl << " The length of the decimal limited by data type writing period of the fraction  1 / n = " << counter << ".\n";
//
//	system("pause");
//}