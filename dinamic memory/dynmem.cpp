#include <iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

// Вывод массива
template <typename T> void showarr(T arr[], int length) {
	cout << "[";
	for (int i = 0; i < length; i++)
		cout << arr[i] << ", ";
	cout << "\b\b]\n";
}
// Заполнение случайными числами
template <typename T> void fillarr(T arr[], int length, int min = 0, int max = 100) {
	for (int i = 0; i < length; i++)
		arr[i] = rand() % (max - min) + min;
}
// Увеличивает массив на заданную длину
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
// Уменьшает массив на преданное значение
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







	// Задача 2
	cout << "Введите длину массива: ";
	unsigned int size2;
	cin >> size2;
	int* z2 = new int[size2];
	fillarr(z2, size2, 10, 20);
	showarr(z2, size2);
	z2 = delel(z2, size2, 3);
	showarr(z2, size2);

	// Задача 1
	/*unsigned int size;
	cout << "Введите длину массива: ";
	cin >> size;
	int* z1 = new int[size];
	fillarr(z1, size);
	showarr(z1, size);
	z1 = addel(z1, size, 5);
	cout << "Итоговый массив: ";
	showarr(z1, size);
	delete[] z1;*/

	/*int* pn = new int; // создали указатель, который указывает на определённую область оперативной памяти
	*pn = 10;

	cout << pn << " - " << *pn << endl;

	pn = new int;

	delete pn; // удалили данные в ячейке
	// 0, null, nullptr
	pn = nullptr;

	if (pn != nullptr)
		cout << pn << " - " << *pn << endl;*/

	// Динамические массивы

	/*unsigned int n;
	const int l = 5;
	int arr[l];

	cout << "Введите длину массива: ";
	cin >> n;
	int* darr = new int[n];
	for (int i = 0; i < n; i++)
		darr[i] = i + 1;
	showarr(darr, n);

	delete darr; // удалили первый элемент массива из оперативной памяти
	
	delete[] darr; // чтбы удалить все, ставим квадратные скобочки
	darr = nullptr;

	darr = new int[n + 1]; */

	return 0;
}