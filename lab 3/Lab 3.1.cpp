//#include <iostream>
//#include <vector>
//using namespace std;
//void equal(int inter, vector<int> vec) {         // ��������, ��������� �� ����� � �������� ������� �����
//	for (int i = 0; i < vec.size(); i++)         // ���� �� - ���������� ���������
//	{
//		if (inter == vec[i])
//		{
//			cout << "Your number is simple. Congratulations!" << endl;
//			exit(0);
//		}
//	}
//}
//void main() {
//	//2 147 483 647
//	vector<int> simple = { 2,3,5 };               // ������ ������� �����
//	int numbers = 0;
//	for (int i = 6; numbers < 20000; i++)       // ����� �������� ����������� �������� ����������� ����� (������ �������� �� 20k)
//	{
//		if (i % 2 != 0 && i % 3 != 0 && i % 5 != 0)
//		{
//			numbers = i;
//			simple.push_back(numbers);  // ���������� ������� ������� �����
//		}
//	}
//	int interpret = 0;     //�������� ������������� �����
//	cin >> interpret;
//	int false_counter = 0;
//	equal(interpret, simple);   //������� �������� ���������� � �������� �������
//	for (int i = 0; i < simple.size(); i++)
//	{
//		if (interpret % simple[i] == 0)// ���� ����� ������� �� ����� �� �������, ����� ������ ���� - FALSE, �����
//		{
//			false_counter++; //���� ������� ���� ������ ����, �� ��� ������������ 
//		}					 //�������� � ������� ������/������ � �� ������� ��������� � ������������.
//	}
//	if (false_counter > 0) //������ ������� ����))
//	{
//		cout << "Your number isn't simple." << endl;
//	}
//	system("pause");
//}