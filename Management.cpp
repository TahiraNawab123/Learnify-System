#include <iostream>
#include"Management.h"
#include<fstream>

using namespace std;

void display_data() {
    static int count = 0;
    for(int i = 0; i < 3; i++) {
        count++; 
        cout  << count << " Hello, world! "  << endl;
    }
    cout << " The total number of counts are : " << count << endl;
}

int book_ID() {
    static int MYBOOKID= 0;
    MYBOOKID++;
    return MYBOOKID;
}

void add_book(Books newbook[], int &count) {

    cout << " Please enter the book title: " ; 
    cin.ignore();
    getline(cin , newbook[ count ].Book_Title);
    cout << " Please enter the bookAuthor : " ;
    getline(cin, newbook[count].Book_Author);
    
    newbook[count].bookID = book_ID(); 
    cout << " The book with ID : " << newbook[count].bookID << " has been added! " << endl;
    count++; 
}

void  display_book( Books newbook[], int& count ) {

  if(count==0) {
      cout << " There is no book to display! " << endl;
      return;
  }
        for(int i = 0; i < count; i++) {  
            cout << newbook[i].bookID << endl;
            cout << newbook[i].Book_Title << endl;
            cout << newbook[i].Book_Author << endl;
        }
}


void Add_students_data(Students s) {

    cout << " Please enter name: " ;
    cin>>s.student_name;   

    cout << "Please enter your roll number : " ;
    cin >> s.roll_no;  

    ofstream myFile;
    myFile.open("students.txt", ios::app);   
    if(myFile.is_open()) { 

        myFile << s.student_name << endl;    
        myFile << s.roll_no << endl;   
        myFile.close();    
        cout << " The students have been added! " << endl;
    }
     else {  
        cout << " Unable to open file! " << endl;
    }
}


void displaying_count() {

    static int student_count = 0;

    cout << " The total number of count of student is : " << student_count << endl;
    student_count++;  

}


void display_student_data() {
    Students s;
    ifstream student_file("students.txt"); 

    if(student_file.is_open()) {
        while(student_file >> s.student_name >> s.roll_no) { 
            cout << "Name : " << s.student_name << endl;
            cout << "Roll number : " << s.roll_no << endl;
        }
        student_file.close(); 
    } else {
        cout << "Unable to open file!" << endl;
    }
}
