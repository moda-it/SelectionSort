#include <iostream>
using namespace std;

int main() {
	int a[5] = { 64, 25, 12, 22, 11 };
	int n = 5;

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