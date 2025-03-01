#include <iostream>
#include"Management.h"
using namespace std;

int main() {

        display_data();
        cout<<endl;

 
    cout << "--------------------------";
    Books newbook[10];
    int my_count_is = 0;
    int choice ;
     do {
        
           cout << endl;
           cout << "1. Add_book" << endl;
           cout << "2. display_books" << endl;
           cout << "3. exit" << endl;
           cin >> choice;

          switch(choice) {
              case 1:
                   if( my_count_is < 10) {
                       add_book( newbook , my_count_is);
                    } else {
                       cout << "no more books can add! " << endl;
                    }
                    break;
              case 2:
                   if( my_count_is < 10) {
                       display_book( newbook , my_count_is );
                    } else {
                       cout << "no more books can display! " << endl;
                    }
                    break;
              case 3:
                        cout << "Exit" << endl;
                    break;
              default:
                        cout << "Invalid choice" << endl;
                    break;
             }
        }while(choice!=3);

        cout << endl;
        cout << "------------------------------" << endl;
        Students newStudent;
        int your_favorite_number;
        do {

           cout << "Enter your choice : " << endl;
           cout << "1. Adding & Saving student's data " << endl;
           cout << "2. Displaying of total count of students " << endl;
           cout << "3. Displaying all student data " << endl;
           cout << "4. Exit " << endl;

           cin>>your_favorite_number;

         switch(your_favorite_number) {
             case 1:
                Add_students_data( newStudent );
             break;
             case 2:
                displaying_count();
             break;
             case 3:
                display_student_data();
             break;
             case 4:
                cout << " Exit " << endl;
             break;
             default:
                cout << " Invalid choice " << endl;
             break;
             }
          }while(your_favorite_number!=4);


    return 0;
}
