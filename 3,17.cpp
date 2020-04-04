#include <iostream>
#include <math.h>
using namespace std;
int main(){
	double exp = 0.0005;
	double S = 1, Ans = 1;
	int k = 1;
	cout << "Calculate approximately the value of an infinite sum with an accuracy of 0.0005:" 
		<< "S = 1+...+(-1)^k*(n/((k+1)*(k+2)*(k+3)))^2k +..." 
		<< endl << "Input n = ";
	int n;
	cin >> n;
	cout << "Value exp = 0.0005" << endl;
		while (abs(Ans>exp)){
		double K = (k + 1) * (k + 2) * (k + 3);
		Ans = pow(n / K, k * 2);
		if (k % 2 != 0){Ans = -1 * Ans;}
		S += Ans;
		k++;
	}
	cout << "Answer S: " << S << endl;
	return 0;
}