#include"student.h"
#include<iostream>
#include<string.h>
using namespace std;
Student::Student() {
	this->name = " ";
	this->cms = 0;
	this->next = NULL;
}
Student::Student(int cms,string name) {
	this->name = name;
	this->cms = cms;
	this->next = NULL;
}
void Student::set_cms(int cm) {
	this->cms = cm;
}
void Student::set_name(string nam) {
	this->name = nam;
}
void Student::set_next(Student* nex) {
	this->next = nex;
}
Student* Student::get_next() {
	return next;
}
int Student::get_cms() {
	return cms;
}
string Student::get_name(){
	return name;
}