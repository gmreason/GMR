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
    Student(int n,float s):num(n),score(s){}
    void change(int n,float s) {num=n,score=s;}
    void display()const {cout<<num<<""<<score<<endl;}
private:
    int num;
    float score;
};

int main()
{
    Student stu(101,78.5);
    void fun(Student&);
    fun(stu);
    return 0;
}
void fun(Student &stu)
{
    stu.display();
    stu.change(101,80.5);
    stu.display();
}
