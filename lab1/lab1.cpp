/*
ID = 22011375
Name = Adam Mustaqim bin Rosli
*/

#include <iostream>
using namespace std;
#include <string>

struct Student{
    int id;
    string name;
    string contact;
    string email;
     };

int main() {
    
    Student student[5];
    for (int i=0;i<5;i++){
        cout<<"\nStudent "<<i+1<<endl;
        cout<<"Enter student "<<i+1<<" id : ";cin>>student[i].id;
        cout<<"Enter student "<<i+1<<" name : ";cin>>student[i].name;
        cout<<"Enter student "<<i+1<<" contact : ";cin>>student[i].contact;
        cout<<"Enter student "<<i+1<<" email : ";cin>>student[i].email;

    }
    for (int i=0;i<5;i++){
        cout<<"\nStudent "<<i+1<<endl;
        cout<<"id : "<<student[i].id<<endl;
        cout<<"name : "<<student[i].name<<endl;
        cout<<"contact : "<<student[i].contact<<endl;
        cout<<"email : "<<student[i].email<<endl;
    }
 

    return 0;
}
