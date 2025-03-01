#ifndef MANAGEMENT_H
#define MANAGEMENT_H
#include<iostream>

using namespace std;

struct Books {
    string Book_Title;
    string Book_Author;
    int bookID;
};

struct Students {
    char student_name[50];
    int roll_no;
};

void display_data();
void add_book( Books newbook[], int &count );
void  display_book(Books newbook[], int &count );
void Add_students_data(Students s);
void displaying_count();
void display_student_data();

#endif //MANAGEMENT_H
