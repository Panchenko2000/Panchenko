#include <iostream>
#include <stdlib.h>
using namespace std;
long double fact(int k){
	if (k == 0)
		return 1;
	else
		return k * fact(k - 1);
}
void task_1(double Subject, double Const1, double Const2, double Const3){
	double dResult = Const1 * pow(Subject, 2) + Const2 * Subject + Const3;
	cout << dResult << endl;
}
void task_2(double Subject, double* ArrConst){
	double AllResult = 0;
	for (int i = 0; i < 7; i++){
		double Result = ArrConst[i] * pow(Subject, i);
		AllResult += Result;
	}
	cout << AllResult << endl;
};
void task_3(double Subject){
	double Result = 0;
	for (int k = 0; k < 11; k++){
		double Element = pow(Subject, k) / fact(k);
		Result += Element;
	}
	cout << Result << endl;
}
int main(){
	char Key = 'Y';
	while (Key == 'Y' || Key == 'y'){
		cout << "What dou you want to do?" << endl;
		cout << "a) f(x) = a*x^2 + b*x + c" << endl;
		cout << "b) f(x) = a6*x^6 + a5*x^5 + ... + a1*x^1 + a0" << endl;
		cout << "c) f(x) = Sum with upper limit 10 and lower limit k=0 for (x^k) / (k!)" << endl;
		cout << "Input number tasks:" << endl;
		char chTakeNumber;
		cin >> chTakeNumber;
		cout << "Input x: ";
		double Subject;
		cin >> Subject;
		int ChoseNumber = atoi(&chTakeNumber);
		if (ChoseNumber == 1)		{
			cout << "For result of equation f(x) = a*x^2 + b*x + c = " << endl;
			cout << "Input a = ";
			double Const1;
			cin >> Const1;
			cout << "Input b = ";
			double Const2;
			cin >> Const2;
			cout << "Input c = ";
			double Const3;
			cin >> Const3;
			cout << "f(x) = ";
			task_1(Subject, Const1, Const2, Const3);
		}
		if (ChoseNumber == 2){
			cout << "For result of equation f(x) = a6*x^6 + a5*x^5 +...+ a1*x^1 + a0  = " << endl;
			double ArrConst[6];
			for (int i = 6; i >= 0; i--){
				cout << "Input a" << i << " = ";
				cin >> ArrConst[i];

			}
			cout << "f(x) = ";
			task_2(Subject, ArrConst);
		}
		if (ChoseNumber == 3){
			cout << "f(x) = Sum with upper limit 10 and lower limit k=0 for (x^k) / (k!) = ";
			task_3(Subject);
		}
		cout << "Do you want to make some equation?(Input Y - Yes) ";
		cin >> Key;
		system("cls");
	}
	system("pause");
	return 0;
}
//Написать подпрограмму (процедуру или функцию) для вычисления суммы f(x), когда вид функции f(x) заранее не известен. 
//Для этого имя функции f(x) передать подпрограмме в виде параметра процедурного типа. 
//В головной программе вызвать подпрограмму для следующих функций f(x): ..., где коэффициенты определить в самой функции посредством типизированных констант.