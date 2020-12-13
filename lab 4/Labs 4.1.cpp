#include <iostream>
#include <vector>
#include <algorithm> // ���������� (����� ��� ���������� ������� n*log n)
using namespace std;
void main() {
	vector<double> nums; // ��� ����� �������
	nums.push_back(1);       // �� ������� ������, ������ = [1...n], ������ ������ ������� ������ 1
	int n = 0;
	cout << "Input count numbers.(Beginning is always == 1)" << endl;
	cin >> n; // ���������� ��������� ������� ����� 1
	cout << "Input numbers." << endl;
	for (int i = 0; i < n; i++)
	{
		try_again:
		double push = 0; // �� �������, ������ ���� ������ ���� �����
		cin >> push;
		if (push <= 0) // ������������ �����
		{
			cerr << "ERROR: you enter the wrong number. Try again." << endl;
			goto try_again;
		}
		nums.push_back(push); // ���������� �������
		
	}
	sort(nums.begin(), nums.end()); // ����������
	int counter = 0; // ������� ��������� �����
	for (int i = 0; i < n; i++)
	{
		if (nums[i] == nums[i + 1]){
			continue;
		}
		else {
			counter++;
		}
		if (i == n-1)
		{
			counter++;   // ��������� ������� ������ �� ������� ����, �� �����������, 
						 // ������ ������� ��������� � �������� 1
		}
	}
	cout << "Different numbers = " << counter << endl;
	system("pause");
 }