#include <iostream>
#include <vector>
#include <time.h>
#include <limits.h>
using namespace std;

void main() {
	cout << "Input count on units: ";
	int units = 0;
	cin >> units;

	srand(time(NULL));
	vector<int> mass;
	//mass.push_back(1);     // �� ������� ������, ������ ���������� � 1
	cout << "Do you want to write the sequence by yourselfe or computer will white it automatically?( y / a)" << endl;
	char y_a;
	try_again:  // ��� �������� ����� ����� ��������� �������� � ��� �����
	cin >> y_a;
	if (y_a == 'y') // ���� ������������������ ����� ������� � ����������
	{
		cout << "Input " << units << " numbers." << endl;
		for (int i = 0; i < units; i++)
		{
			int z = 0;
			cin >> z;
			mass.push_back(z);
		}
	}
	else if (y_a == 'a') // �������������� ���� - ���������� �� 1 �� 10
	{
		for (int i = 0; i < units; i++)
		{
			int z = rand() % 10 + 1;
			mass.push_back(z);
		}
	}
	else // ��� �������� ����� ����� (love you, linux)
	{
		cout << "You choosed wrong way. Try again." << endl;
		cout << " Yourselfe / automatically? ( y / a) " << endl;
		goto try_again;
	}
	
	vector<int> sequence; // � ���� ������� ��������� ����� ������������ ����������������������
	int count_seq = 1;
	for (int i = 0; i < mass.size(); i++)
	{
		if (i < mass.size()-1)
		{
			if (mass[i] < mass[i+1] )
			{
				count_seq++;
			}
			else
			{
				sequence.push_back(count_seq);
				count_seq = 1;
			}
		}
	}
	int compare = 0; // ����� ����������� �������� ���������������������
	for (int i = 0; i < sequence.size(); i++)
	{
		if (sequence[i] > compare)
		{
			compare = sequence[i];
		}
	}
	cout << "Maximum length of an ascending sequence is " << compare << endl;
	// ����������� �������� ��� ������ �������������� ��������� ������������������
	if (y_a == 'a')
	{
		cout << "Below is a check." << endl;
		for (int i = 0; i < mass.size(); i++)
		{
			cout << mass[i] << " ";
		}
	}
	
	system("pause");
}