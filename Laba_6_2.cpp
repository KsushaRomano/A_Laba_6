#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int i, j, N, k;
	cout << "Введите размер массива: ";
	cin >> N;
	int* A = new int[N];
	cout << "Введите элементы массива: " << endl;
	for (i = 0; i < N; i++) {
		cin >> A[i];
	}
	for (i = 0; i < N - 1; i++) {
		for (j = 0; j < N - 1; j++) {
			if (A[j] < A[j + 1]) {
				k = A[j];
				A[j] = A[j + 1];
				A[j + 1] = k;
			};
		};
	};
	cout << "Массив после сортировки: " << endl;
	for (i = 0; i < N; i++) {
		cout << A[i] << endl;
	};
}