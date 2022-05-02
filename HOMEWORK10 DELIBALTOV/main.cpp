#include "Header.h"

int main() {
	setlocale(LC_ALL, "RUS");
	cout << "Задайте характеристику студента: surname, name, mindname, age, on lesson? (если да - 1, если нет - 0):"<<endl;
	string name_1, surname_1, midname_1;
	int age_1;
	bool on_less;
	cin >> surname_1 >> name_1 >> midname_1 >> age_1 >> on_less;
	cout << "\n";
	if ((!cin) || (on_less < 0 || on_less > 1)) {
		cout<<"Error!"<<endl;
		return 0;
	}
	Student student(surname_1, name_1, midname_1, age_1, on_less);
	student.Print();
	cout << "\n";

	cout << "Задайте характеристику начальника: surname, name, mindname, age, namber of workes:" << endl;
	string name_2, surname_2, midname_2;
	int age_2;
	int namber_of_workes;
	cin >> surname_2 >> name_2 >> midname_2 >> age_2 >> namber_of_workes;
	cout << "\n";
	if (!cin) {
		cout << "Error!" << endl;
		return 0;
	}
	Boss boss(surname_2, name_2, midname_2, age_2, namber_of_workes);
	boss.Print();
	return 0;
}