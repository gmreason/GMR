//
//  main.cpp
//  GMR
//
//  Created by gmr on 15/11/11.
//  Copyright © 2015年 gmr. All rights reserved.
//

#include<iostream> 
using namespace std;
class Student
{
    public:
    void get_value()
    {cin>>num>>name>>sex;}
    void display()
    {
        cout<<"num: "<<num<<endl;
        cout<<"name: "<<name<<endl;
        cout<<"sex: "<<sex<<endl;}
    private:
    int num;
    char name[10];
    char sex;
};
class Student1:
public Student
{
    public:
    void get_value_1()
    {
        get_value();
        cin>>age>>addr;
    }
    void display_1()
    {
        cout<<"age:"<<age<<endl;          //引用派生类的私有成员
        cout<<"address:"<<addr<<endl;     //引用派生类的私有成员
    }
    private:
    int age;
    char addr[30];
};
int main()
{
    Student1 stud1;
    stud1.get_value_1();
    stud1.display();
    stud1.display_1();
    return 0;
}