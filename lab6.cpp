#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
struct statement{
	string  Nickname;
	int Math;
	int Literature;
	int Physics;
	double Mean;
};
void sort(statement** Enrollee, int NumbersEnrollee){
	for (int i = 0; i < NumbersEnrollee; i++){
		for (int j = 0; j < NumbersEnrollee - i- 1; j++){
			if (Enrollee[j]->Mean < Enrollee[j + 1]->Mean){
				statement* temp = Enrollee[j];
				Enrollee[j] = Enrollee[j + 1];
				Enrollee[j+ 1] = temp;
			}
		}
	}
}
int main(){
	int Numbersenrollee = 6;
	double AllMean = 0;
	statement* Enrollee = new statement[Numbersenrollee];
	Enrollee[0] = { "Kostenko", 5,4,3 };
	Enrollee[1] = { "Plav", 5,5,3 };
	Enrollee[2] = { "Michajlichenko", 5,5,5 };
	Enrollee[3] = { "Morozov", 5,5,4 };
	Enrollee[4] = { "Panchenko", 4,4,3 };
	Enrollee[5] = { "Shevchenko", 4,3,3 };
	for (int i = 0; i < Numbersenrollee; i++) {
		Enrollee[i].Mean = (double)(Enrollee[i].Math + Enrollee[i].Literature + Enrollee[i].Physics) /3;
		AllMean += Enrollee[i].Mean;
	}
	statement** Allenrollee = new statement * [Numbersenrollee];
	for (int i = 0; i < Numbersenrollee; i++) {
		Allenrollee[i] = &Enrollee[i];
	}
	sort(Allenrollee, Numbersenrollee);
	AllMean = AllMean / Numbersenrollee;
	cout << "Applicants who have a good grade: " << endl;
	for (int i = 0; i < Numbersenrollee; i++) {
		if (Allenrollee[i]->Mean > AllMean) {
			cout << Allenrollee[i]->Nickname << ": " << Allenrollee[i]->Mean << endl;
		}
	}
	system("pause");
	return 0;
}
//ƒана ведомость абитуриентов, сдавших вступительные экзамены в институт. 
//¬ каждой строке данной ведомости записана фамили€ абитуриента и полученные им оценки по отдельным дисциплинам (например, физике, математике, литературе). 
//Ќеобходимо определить средний балл по институту и распечатать список абитуриентов, средний балл которых выше среднего балла по институту. 
//ѕервыми в списке должны идти студенты, сдавшие все экзамены на 5.