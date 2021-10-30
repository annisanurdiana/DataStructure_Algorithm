/*
>> Group Assignment Week 2 - Linked List <<

+---+------------------+--------------+
|No | Members          | Student ID   |
+---+------------------+--------------+
| 1 | Akira            | 001202000113 |
| 2 | Annisa Nurdiana  | 001202000067 |
| 3 | Reinald Chenarta | 001202000070 |
+---+------------------+--------------+

Problem:
    "Write code to get student data sorted based on score using linked list"

Solution:
    ...

*/

#include <iostream>
using namespace std;

struct student {
    string ID;
    string Name;
    string Smstr;
    string Subject;
    string Score;
    student* next;
};

int size = 0;
char y;

void PrintData(student* head) {
    cout << "~~~Display the student data after sort by score~~~\n";
    while (head != NULL) {
        cout << "(" << head->ID ;
        cout << ", " << head->Name ;
        cout << ", " << head->Smstr ;
        cout << ", " << head->Subject ;
        cout << ", " << head->Score << ") --> ";
        head = head->next;
    }
}

void insert(student** head, string ID, string Name, string Smstr, string Subject, string Score)
{
	student* temp = new student;
	student* previous = new student;
	student* cur;
	temp->ID = ID;
	temp->Name = Name;
	temp->Smstr = Smstr;
	temp->Subject = Subject;
	temp->Score = Score;
	temp->next = NULL;

	if (*head == NULL){
		*head = temp;
	}
	else {
		cur = *head;
		previous = NULL;

		while(cur){
			if(cur->Score <= temp->Score){
				break;
			}
			previous = cur;
			cur = cur->next;
		}

		temp->next = cur;
		if(previous){
			previous->next = temp;
		}
		else{
			*head = temp;
		}
	}
}

student *arrayToList(student** s, string arr[])
{
	student *head = *s;
	insert(&head, arr[0], arr[1], arr[2], arr[3], arr[4]);
	return head;
}

string* GetData() {
	string* arr = new string[5];
	cout << "\tGet the ID: ";
	getline(cin, arr[0]);
	cout << "\tGet the Name: ";
	getline(cin, arr[1]);
	cout << "\tGet the Semester: ";
	cin >> arr[2];
	cin.ignore();
	cout << "\tGet the Subject: ";
	getline(cin, arr[3]);
	cout << "\tGet the Score: ";
	cin >> arr[4];
	cin.ignore();
	cout << endl;
   	return arr;
}

int main() {

    cout << "Student Data" << endl;
    student* head = NULL;
	do{
		string* arr= GetData();
		head = arrayToList(&head,arr);
		PrintData(head);
		cout << "\n\nContinue? ('Y' to proceed): ";
    	cin >> y;
    	cin.ignore();
    	y = toupper(y);
	}while(y=='Y');

    return 0;
}
