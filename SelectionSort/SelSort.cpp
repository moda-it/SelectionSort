#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "Enter number of elements: \n";
	cin >> n;

	int a[100];

	cout << "Enter" << n << " elements: \n";
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}


	for (int i = n - 1; i > 0; i--) {
		int maxI = 0;
		for (int j = 1; j <= i; j++) {
			if (a[j] > a[maxI]) {
				maxI = j;
			}
		}
		int temp = a[i];
		a[i] = a[maxI];
		a[maxI] = temp;
	}
	cout << "Sorted array: \n";
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}