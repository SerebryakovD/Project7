#include<iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "");
	//������������ ������ ������� ����� �� ��� (12 �������).
	// ���������� ����������
	//  - �����, � ������� ������� ���� �����������
	//  - �����, � ������� ������� ���� ����������
	int arr[12];
	int maxIndex = 1;
	int minIndex = 1;

	// ��������� ������.
	for (int i = 0; i < 12; i++) {
		cout << "a[" << i << "] = ";
		cin >> arr[i];
	}

	int min = arr[0];
	int max = arr[0];

	for (int i = 0; i < 12; i++) {
		if (arr[i] > max) {
			maxIndex = i + 1;
			max = arr[i];
		}

		if (arr[i] < min) {
			minIndex = i + 1;
			min = arr[i];
		}
	}

	cout << "min month = " << minIndex << endl;
	cout << "max month = " << maxIndex << endl;

	cout << "min month = " << min << endl;
	cout << "max month = " << max << endl;

	return 0;
}
