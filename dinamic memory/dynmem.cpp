#include <iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

// ����� �������
template <typename T> void showarr(T arr[], int length) {
	cout << "[";
	for (int i = 0; i < length; i++)
		cout << arr[i] << ", ";
	cout << "\b\b]\n";
}
// ���������� ���������� �������
template <typename T> void fillarr(T arr[], int length, int min = 0, int max = 100) {
	for (int i = 0; i < length; i++)
		arr[i] = rand() % (max - min) + min;
}
// ����������� ������ �� �������� �����
template <typename T> T* addel(T arr[], unsigned int& length, unsigned int n) {
	if (n <= 0)
		return arr;
	T* tmp = new T[length];
	for (int i = 0; i < length; i++)
		tmp[i] = arr[i];
	delete[] arr;
	arr = new T[length + n];
	length += n;
	for (int i = 0; i < length - n; i++)
		arr[i] = tmp[i];
	delete[] tmp;
	return arr;
}
// ��������� ������ �� ��������� ��������
template <typename T> T* delel(T arr[], unsigned int& length, unsigned int n) {
	if (n <= 0)
		return arr;
	length -= n;
	T* tmp = new T[length];
	for (int i = 0; i < length; i++)
		tmp[i] = arr[i];
	delete[] arr;
	arr = new T[length];
	for (int i = 0; i < length; i++)
		arr[i] = tmp[i];
	delete[] tmp;
	return arr;
}

int main() {
	setlocale(LC_ALL, "ru");
	srand(time(NULL));







	// ������ 2
	cout << "������� ����� �������: ";
	unsigned int size2;
	cin >> size2;
	int* z2 = new int[size2];
	fillarr(z2, size2, 10, 20);
	showarr(z2, size2);
	z2 = delel(z2, size2, 3);
	showarr(z2, size2);

	// ������ 1
	/*unsigned int size;
	cout << "������� ����� �������: ";
	cin >> size;
	int* z1 = new int[size];
	fillarr(z1, size);
	showarr(z1, size);
	z1 = addel(z1, size, 5);
	cout << "�������� ������: ";
	showarr(z1, size);
	delete[] z1;*/

	/*int* pn = new int; // ������� ���������, ������� ��������� �� ����������� ������� ����������� ������
	*pn = 10;

	cout << pn << " - " << *pn << endl;

	pn = new int;

	delete pn; // ������� ������ � ������
	// 0, null, nullptr
	pn = nullptr;

	if (pn != nullptr)
		cout << pn << " - " << *pn << endl;*/

	// ������������ �������

	/*unsigned int n;
	const int l = 5;
	int arr[l];

	cout << "������� ����� �������: ";
	cin >> n;
	int* darr = new int[n];
	for (int i = 0; i < n; i++)
		darr[i] = i + 1;
	showarr(darr, n);

	delete darr; // ������� ������ ������� ������� �� ����������� ������
	
	delete[] darr; // ���� ������� ���, ������ ���������� ��������
	darr = nullptr;

	darr = new int[n + 1]; */

	return 0;
}