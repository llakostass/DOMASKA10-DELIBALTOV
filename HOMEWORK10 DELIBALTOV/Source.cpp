#include "Header.h"


void Student::Print() {
	if (this->on_lesson == 0) {
		cout << "—тудент " << this->surname << " " << this->name << " " << this->midname << " в возрасте " << this->age << " лет отсутствует на уроке." << endl;
	}
	if (this->on_lesson == 1) {
		cout << "—тудент " << this->surname << " " << this->name << " " << this->midname << " в возрасте " << this->age << " лет присутствует на уроке." << endl;
	}
}

void Boss::Print() {
	cout << "Ќачальник " << this->surname << " " << this->name << " " << this->midname << " в возрасте " << this->age << " лет имеет в распор€жении "<< this->namber_of_workes<<" работников(-a)" << endl;
}

