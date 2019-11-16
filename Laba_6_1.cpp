#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int i, j, N, min, k, t;
	cout << "Введите размер массива: ";
	cin >> N;
	int* A = new int[N];
	cout << "Введите элементы массива: " << endl;
	for (i = 0; i < N; i++){
		cin >> A[i];
	}
	for (i = 0; i < N - 1; i++) {
		min = A[i];
		k = i;
		for (j = i + 1; j < N; j++) {
			if (A[j] < min) {
				min = A[j];
				k = j;
			};
		};
		t = A[i];
		A[i] = min;
		A[k] = t;
	};
	cout << "Массив после сортировки: " << endl;
	for (i = 0; i < N; i++) {
		cout << A[i] << endl;
	};
}