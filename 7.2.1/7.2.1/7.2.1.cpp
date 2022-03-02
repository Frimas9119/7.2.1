#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;
void Create(int** a, const int k, const int n, const int Low, const int High);
void Print(int** a, const int k, const int n);
bool SearchMinEven(int** a, const int n,  const int k, int& minEven);
int main()
{
	srand((unsigned)time(NULL));
	int Low = -10;
	int High = 10;
	int n;
	int k;
	cout << "n = "; cin >> n;
	cout << "k = "; cin >> k;
	int** a = new int* [k];
		for (int i = 0; i < k; i++)
			a[i] = new int[n];
	Create(a, k, n, Low, High);
	Print(a, k, n);
	int minEven;
	if (SearchMinEven(a, k, n, minEven))
		cout << "min even = " << minEven << endl;
	else
		cout << "there are no even elements" << endl;
	for (int i = 0; i < k; i++)
			delete[] a[i];
	delete[] a;
	return 0;
}
void Create(int** a, const int k, const int n, const int Low, const int High)
{
	for (int i = 0; i < k; i++)
		for (int j = 0; j < n; j++)
			a[i][j] = Low + rand() % (High - Low + 1);

}
void Print(int** a, const int k, const int n)
{
	cout << endl;
	for (int i = 0; i < k; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(4) << a[i][j];
		cout << endl;
	}
	cout << endl;
}
bool SearchMinEven(int** a, const int k, const int n, int& minEven)
{
	minEven = -10;
	int j = 0;
	for (int i = 0; i < n; i++)
	{
		if (minEven < a[j][i]) {
			minEven = a[j][i];
		}
	}
	if (j + 2 < k) {
		j + 2;
		for (int i = 0; i < n; i++)
		{
			if (minEven < a[j][i]) {
				minEven = a[j][i];
			}
		}
	}
	else {
		if (j + 2 < k) {
			j + 2;
			for (int i = 0; i < n; i++)
			{
				if (minEven < a[j][i]) {
					minEven = a[j][i];
				}
			}
		}
		else {
			if (j + 2 < k) {
				j + 2;
				for (int i = 0; i < n; i++)
				{
					if (minEven < a[j][i]) {
						minEven = a[j][i];
					}
				}
			}
			else {
				if (j + 2 < k) {
					j + 2;
					for (int i = 0; i < n; i++)
					{
						if (minEven < a[j][i]) {
							minEven = a[j][i];
						}
					}
				}
				else {

				}
			}
		}
	}
	
	return true;
}