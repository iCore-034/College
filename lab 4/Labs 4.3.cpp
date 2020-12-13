#include <iostream>
#include <time.h>
#include <vector>
#include <algorithm>
#include <math.h>
#include <limits.h>
using namespace std;

vector<int> fill(int m, vector<int> mass_x_y) {
	vector<int> mass;
	for (int i = 0; i < m; i++)
	{
		int z = rand() % 10 + 1; // �������� ��������� ����� (����� �� 1 �� 10)
		mass.push_back(z);
	}
	sort(mass.begin(), mass.end());
	mass_x_y = mass;
	return mass_x_y;
}
void main(){

	srand(time(NULL)); // ��������� ��������� �����
	int x, y = 0;
	cout << "Enter number of items of X array and Y array:"<<endl;
	cin >> x >> y;
	vector<int> x_arr, y_arr;
	x_arr = fill(x, x_arr); // ���������� ������� � 1 � ������ � ��� ����������
	y_arr = fill(y, y_arr);
	cout << "Choose your number: ";
	int guess = 0;
	cin >> guess;
	int x1 = 0;
	int y1 = 0;

	// ����� ��������������� ����� ( �������� �� ���� ����� �������)
	for (int i = 0; i < x_arr.size(); i++)
	{
		cout << x_arr[i] << endl;
	}
	cout << endl;
	for (int i = 0; i < y_arr.size(); i++)
	{
		cout << y_arr[i] << endl;
	}
	// ������������� �������� ������� � ���� ��� ����� � �� �
	vector<vector<int>> xANDy;
	for (int i = 0; i < x_arr.size(); i++)
	{
		for (int j = 0; j < y_arr.size(); j++)
		{
				
				xANDy.push_back({ x_arr[i], y_arr[j] });
		}
	}
	// ����� ��� ����� ������ � �� � ( ������ ����������, ����� �� �������� ���������)
	for (int i = 0; i < xANDy.size(); i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cout << xANDy[i][j] << endl;
		}
		cout << endl;
	}
	// ������ ������� ����������� ����� � ������ ����� ��������
	vector<int> subtraction;
	for (int i = 0; i < xANDy.size(); i++)
	{
		int sub = abs(guess - (xANDy[i][0] + xANDy[i][1]));
		subtraction.push_back(sub);
	}
	// ������� ���������� ������� ����� ���������� ������ � ������ �������� ������� � ������� �������
	int less = INT_MAX; // ������ �������� int
	int position_of_smallest = 0; /* ���������� ���������� �������, � ������� ������� ����� guess � subtraction == ����������,
								   ����� ������� �� ������� ������� ���� �����, �������� ������� ���� ��������� ��� ������ ��������,
								   �������� guess */
	for (int i = 0; i < subtraction.size(); i++)
	{
		if (subtraction[i] < less)                
		{
			less = subtraction[i];
			position_of_smallest = subtraction[i];
		}
	}
	// ������� ��������������� ����
	for (int i = 0; i < subtraction.size(); i++)
	{
		if (position_of_smallest == subtraction[i])
		{
			cout << "The sum of numbers " << xANDy[i][0] << " and " << xANDy[i][1] << " which equal "
				<< xANDy[i][0] + xANDy[i][1] << " are nearest to your's choosen number." << endl;
			cout << "Diff == " << less << endl;
			exit(0);
		}
	}
	system("pause");
}