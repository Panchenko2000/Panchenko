#include<iostream>
#include<cmath>
using namespace std;
int main() {
	cout << "Form a one-dimensional array such ai = 1 / (bi - bi-1) i = 2,3,...,n" << endl << "a[1] = 1 / (b[1] - b[n])" << endl << "Input element 'n' in array B" << endl;
	int n;
	cin >> n;
	double * B, * A;
	B = new double[n];
	int i;
	for (i = 0; i < n; i++) {
		cout << "Input element " << i + 1 << " of array B = ";
		cin >> B[i];
	}
	A = new double[n];
	cout << "Answer A: " << endl;
	for (int i = 0; i < n; i++) {
		if (i == 0) {
			if ((B[i] - B[n - 1]) == 0) {
				cout << "Incorrect data!";
				A[i] = 0;
			}
			else {
				A[i] = 1 / (B[i] - B[n - 1]);
				cout << " " << A[i]; }
		}
		else {
			if ((B[i] - B[i - 1]) == 0){
				cout << "Incorrect data!";
				A[i] = 0;
			}
			else {
				A[i] = 1 / (B[i] - B[i - 1]);
				cout << " " << A[i]; }
		}
	}
	delete[] A;
	delete[] B;
	system("pause");
	return 0;
}