#include "Header.h"


void Student::Print() {
	if (this->on_lesson == 0) {
		cout << "������� " << this->surname << " " << this->name << " " << this->midname << " � �������� " << this->age << " ��� ����������� �� �����." << endl;
	}
	if (this->on_lesson == 1) {
		cout << "������� " << this->surname << " " << this->name << " " << this->midname << " � �������� " << this->age << " ��� ������������ �� �����." << endl;
	}
}

void Boss::Print() {
	cout << "��������� " << this->surname << " " << this->name << " " << this->midname << " � �������� " << this->age << " ��� ����� � ������������ "<< this->namber_of_workes<<" ����������(-a)" << endl;
}

