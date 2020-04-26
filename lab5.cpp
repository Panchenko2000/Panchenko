#include<iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{ //Задан одномерный массив, каждым элементом которого является строка символов, состоящая из одних цифр. 
  //Упорядочить элементы массива по возрастанию их числовых значений и вывести на экран. 
  //От максимального элемента отнять значение минимального и вывести разность на экран. Подсчитать среднее значение всех элементов.
	string M; //array
	double Mean = 0;//среднее
	cout << "Input numbers in elements of array M" << endl;
	cout << "Input amount elements of array M: ";
	int Number;//Количество элементов
	cin >> Number;
	double* MMean = new double[Number];
	for (int i = 0; i < Number; i++)
	{
		cout << "Input " << i + 1 << " elemet of array M: ";
		cin >> M;
		double Ans = stof(M);
		Mean += Ans;
		MMean[i] = Ans;
	}
	sort(MMean, MMean + Number);
	cout << "Array M in incrising order: ";
	for (int i = 0; i < Number; i++)
	{
		cout << MMean[i] << " ";
	}
	double Maxmin = MMean[Number - 1] - MMean[0];
	cout << endl << "max - min = " << Maxmin << endl;
	cout << "Mean array M: " << Mean / Number << endl;
	delete[] MMean;
	system("pause");
	return 0;
}