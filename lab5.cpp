#include<iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{ //����� ���������� ������, ������ ��������� �������� �������� ������ ��������, ��������� �� ����� ����. 
  //����������� �������� ������� �� ����������� �� �������� �������� � ������� �� �����. 
  //�� ������������� �������� ������ �������� ������������ � ������� �������� �� �����. ���������� ������� �������� ���� ���������.
	string M; //array
	double Mean = 0;//�������
	cout << "Input numbers in elements of array M" << endl;
	cout << "Input amount elements of array M: ";
	int Number;//���������� ���������
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