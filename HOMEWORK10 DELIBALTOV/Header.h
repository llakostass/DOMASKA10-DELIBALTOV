#ifndef PR_AB
#define PR_AB
#include<iostream>
#include<string>
using namespace std;


class Human {
protected:
	string surname;
	string name;
	string midname;
	int age;
public:
	Human() {
		surname = "";
		name = "";
		midname = "";
		age = 0;
	}
	Human(string temp_surname, string temp_name, string temp_midname, int temp_age){
		surname = temp_surname;
		name = temp_name;
		midname = temp_midname;
		age = temp_age;
	}
	virtual void Print() = 0;
	~Human(){}
};


class Student : public Human{
private:
	bool on_lesson;
public:
	Student() : Human() {
		on_lesson = false;
	}
	Student(string temp_surname, string temp_name, string temp_midname, int temp_age, bool temp_on_lesson):
	Human(temp_surname, temp_name, temp_midname, temp_age) {
		on_lesson = temp_on_lesson;
	}
	void Print();
	~Student(){}
};


class Boss : public Human {
private:
	int namber_of_workes;
public:
	Boss() : Human() {
		namber_of_workes = 0;
	}
	Boss(string temp_surname, string temp_name, string temp_midname, int temp_age, int temp_namber_of_workes) :
		Human(temp_surname, temp_name, temp_midname, temp_age) {
		namber_of_workes = temp_namber_of_workes;
	}
	void Print();
	~Boss() {}
};
#endif