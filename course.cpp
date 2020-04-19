#include"course.h"
#include<iostream>
#include<string.h>
using namespace std;
course::course() {
	this->id = 0;
	this->name = " ";
	this->head = NULL;
	this->tail = NULL;
}
course::course(int id,string name) {
	this->id = id;
	this->name =name;
	this->head = NULL;
	this->tail = NULL;
}

bool course::isempty() {
	if (head == NULL) {
		return  true;
	}
	else {
		return false;
	}
}
void course::add_tail(int id, string nam) {
	if (isempty()) {
		Student* temp = new Student(id, nam);
		head = temp;
		tail = temp;
	}
	else {
		Student* temp = new Student(id, nam);
		tail->set_next(temp);
		tail=temp;
	}
}
void course::add_head(int id, string nam) {
	if (isempty()) {
		add_tail(id, nam);
	}
	else {
		Student* temp = new Student(id, nam);
		temp->set_next(head);
		head=temp;
	}
}
void course::add_target(int target, int cms, string name1) {
	Student* temp = head;
	while (temp != NULL) {
		if (temp->get_cms() == target) {
			break;
		}
		else
		{
			temp = temp->get_next();
		}
	}
	if (temp == NULL) {
		return;
	}
	else
	{
		Student* std = new Student(cms, name1);
		if (temp == tail) {
			add_tail(cms, name1);
		}
		else
		{
			std->set_next(temp->get_next());
			temp->set_next(std);
			
		}
		
	}
}
void course::delete_node(int target) {
	Student* temp = head;
	Student* prev = head;
	while (temp != NULL) {
		if (temp->get_cms() == target) {
			temp->set_name(" ");
			temp->set_cms(NULL);
			break;
		}
		else
		{
			prev = temp;
			temp = temp->get_next();
		}

	}
	if (temp ==NULL) {
		return;
	}
	else {
		if (temp == head) {
			head = temp->get_next();
		}
		else {
			prev->set_next(temp->get_next());
			prev=temp->get_next();
		}
	}
	

	
}
void course::print() {
	cout << "course id :    " << id << "  course name  : " << name<<endl;
	Student* temp = head;
	while (temp != NULL) {
		cout << "\n student name  : " << temp->get_name();
		cout<< "  student cms : " << temp->get_cms() << endl;
		temp = temp->get_next();
	}

}