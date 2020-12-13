#include <iostream>
using namespace std;
const int MAX = 20;

typedef struct QUQUE {
	int data[MAX];
	size_t size;
};
void push(QUQUE* arr, int value) {
	if (arr->size >= MAX) {
		exit(0);
	}
	arr->data[arr->size] = value;
	arr->size++;
}
int pop(QUQUE* arr) {
	if (arr->size == 0) {
		exit(0);
	}
	for (int i = 0; i < arr->size; i++)
		arr->data[i] = arr->data[i + 1];

	arr->size--;
}
void peek(const QUQUE* arr) {
	if (arr->size <= 0) {
		exit(0);
	}
	cout << arr->data[arr->size - 1] << '\n';
}
void printQUQUEValue(int value) {
	cout << " " <<  value;
}
void printQUQUE(const QUQUE* arr) {
	int i;
	int len = arr->size - 1;
	cout << "������� ", arr->size;
	for (i = 0; i < len; i++) {
		printQUQUEValue(arr->data[i]);
		cout << " | ";
	}
	if (arr->size != 0) {
		printQUQUEValue(arr->data[i]);
	}
	cout << "\n";
}
inline void asking() {
	cout << "�������� �������� ��� ��������\n";
	cout << "1. �������� ������� � �������\n";
	cout << "2. ������ ������� �� �������\n";
	cout << "3. ���������� �� ������� �������\n";
	cout << "4. �����\n\n";
}
int main() {
	setlocale(0, "");
	QUQUE arr;
	arr.size = 0;
	while (true)
	{
		asking();
		int j = 0;
		cin >> j;
		cout << ("\n");
		int n = 0;
		switch (j)
		{
		case 1:
			cout << "������� ��������\n";
			cin >> n;
			push(&arr, n);
			printQUQUE(&arr);
			break;

		case 2:
			cout << "\n", pop(&arr);
			printQUQUE(&arr);
			break;

		case 3:
			cout << "������� �������: \n", peek(&arr);
			cout << "\n";
			break;

		case 4:
			exit(0);
		default:
			cout << ("������ �������� ���!\n");
		}
	}
	return 0;
}
