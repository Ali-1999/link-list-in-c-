#include"student.h"
#include<conio.h>
#include"course.h"
#include<iostream>
#include<string>
using namespace std;
void main() {
	string cour, stud;
	int c, csd, cms,tr;
	cout << "\nenter course name : ";
	getline(cin, cour);
	cout << "\ncourse id  : ";
	cin >> csd;
	course cr(csd,cour);
	

	do {
		cout << "\n|1|\t<---------------ADD at top------> ";
		cout << "\n|2|\t<---------------ADD at last----->";
		cout << "\n|3|\t<---------------ADD at anywhere->";
		cout << "\n|4|\t<---------------Delete student--->";
		cout << "\n|5|\t<---------------Print the list----> ";
		cin >> c;
		switch (c)
		{
			case 1:
				cin.ignore();
				cout << "\n Student name : ";
				getline(cin, stud);
				cout << "\nenter cms : ";
				cin >> cms;
				cr.add_head(cms, stud);
				cout << "\n<-----------added successfullu---------->\n";
			break;
			case 2:
				cin.ignore();
				cout << "\n Student name : ";
				getline(cin, stud);
				cout << "\nenter cms : ";
				cin >> cms;
				cr.add_tail(cms, stud);
				cout << "\n<-----------added successfullu---------->\n";
				break;
			case 3:
				
				cout << "\n enter previous cms : ";
				cin >> tr;
				cin.ignore();
				cout << "\n Student name : ";
				getline(cin, stud);
				cout << "\nenter cms : ";
				cin >> cms;
				cr.add_target(tr,cms, stud);
				cout << "\n<-----------added successfullu---------->\n";
				break;
			case 4:
				cout << "\n enter student cms : ";
				cin >> tr;
				cr.delete_node(tr);
				cout << "\n<-----------deleted successfullu---------->\n";
				break;
			case 5:
				cr.print();
				break;
		}
	} while (c < 6);















}