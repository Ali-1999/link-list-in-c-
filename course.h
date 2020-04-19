#pragma once
#include<iostream>
#include"student.h"
#include<string.h>
using namespace std;
class course{
private:
	int id;
	string name;
	Student* head;
	Student* tail;
public:
	course();
	course(int, string);
	void add_target(int, int, string);
	void delete_node(int arget);
	void add_head(int, string);
	void add_tail(int, string);
	void print();
	bool isempty();
};