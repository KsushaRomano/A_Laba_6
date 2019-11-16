#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int i, j, N, k;
	cout << "Введите размер квадратного массива: ";
	cin >> N;
	int** A = new int* [N];
	cout << "Введите элементы массива: " << endl;
	for (i = 0; i < N; i++) {
		A[i] = new int[N];
		for (j = 0; j < N; j++) {
			cin >> A[i][j];
		};
	};
	for (i = 0; i < N - 1; i++) {
		for (j = 0; j < N - 1; j++) {
			if (A[j][j] > A[j + 1][j + 1]) {
				k = A[j][j];
				A[j][j] = A[j + 1][j + 1];
				A[j + 1][j + 1] = k;
			};
		};
	};
	cout << "Массив после сортировки: " << endl;
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			cout << A[i][j] << "\t";
		};
		cout << endl;
	};
}