#pragma once
#include<iostream>
#include<string.h>
using namespace std;
class Student {
private:
	int cms;
	string name;
	Student* next;
public:
	Student();
	Student(int,string);
	int get_cms();
	string get_name();
	Student* get_next();
	void set_cms(int);
	void set_name(string);
	void set_next(Student*);
};