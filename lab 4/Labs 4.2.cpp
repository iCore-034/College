#include <iostream>
#include <vector>
#include <time.h>
#include <math.h>
#include <algorithm>
using namespace std;
int nerd(int err) {  // ������ ���������� ����� ������� �������
	if (err <= 0)
	{
		cerr << "Okey, smart ass." << endl;
	}
	err = abs(err);
	return err;
}
class arraysXY {  // ��������� � ��������-�������� � ������� ������
public:
	vector <int> nums;
	void fills(int weight) {  // ����� ������ ��������� ������ ���������� �������
		nums.push_back(1);
		for (int i = 0; i < weight; i++)
		{
			int fill_variable = rand() % 10+1;     // ����� ����� �������� ������ ������������ ���������
			nums.push_back(fill_variable);         // %10+1 ��������� �� ��������� 0, �.�. �� ������� ������� ���������� � 1
		}

	}
};
void main() {
	srand(time(NULL));      // ��� ���������� ��������� �����
	// ���������� ���� ���������� � ������� � ��������
	arraysXY x_arr;
	arraysXY y_arr;
	
	cout << "Enter the number of items of array 1" << endl;
	int x, y = 0;
	cin >> x;
	x = nerd(x);   // ��������� �����
	x_arr.fills(x); // ���������� ������� ����������
	
	cout << "Enter the number of items of array 2" << endl;
	cin >> y;
	y = nerd(y);    // ��������� �����
	y_arr.fills(y);   // ���������� ������� ����������

	
	sort(x_arr.nums.begin(), x_arr.nums.end());
	sort(y_arr.nums.begin(), y_arr.nums.end());
	//----------------------------------------����� ��������-------------------------------------------------
	printf(" ARRAY FIRST \n");
	for (int i = 0; i < x_arr.nums.size(); i++)
	{
		cout << x_arr.nums[i] << endl;
	}
	cout << endl;
	printf(" ARRAY SECOND\n");
	for (int i = 0; i < y_arr.nums.size(); i++)
	{
		cout << y_arr.nums[i] << endl;
	}
	cout << endl;
	//--------------------------------------------------------------------------------------------------------
	int x1 = 0;
	int y1 = 0;
	int counter = 0;
	while (x1 != x && y1 != y)
	{
		if (x_arr.nums[x1] < y_arr.nums[y1])
		{
			x1++;
		}
		else if (x_arr.nums[x1] > y_arr.nums[y1])
		{
			y1++;
		}
		else
		{
			x1++;
			y1++;
			counter++;
		}
	}
	cout << "The same elements = " << counter << endl; // ������ ������ ��� ����� 1, �.�. �� ������� ������� ���������� � 1
	system("pause");
}
