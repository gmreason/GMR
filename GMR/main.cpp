//
//  main.cpp
//  GMR
//
//  Created by gmr on 15/11/11.
//  Copyright © 2015年 gmr. All rights reserved.
//

#include <iostream>
using namespace std;
class Time
{
public:
    void set_time();
    void show_time();
private:                    //成员改为公用的
    int hour;
    int minute;
    int sec;
};
void Time::set_time()          //在main函数之前定义
{
    cin>>hour;
    cin>>minute;
    cin>>sec;
}   void Time::show_time()         //在main函数之前定义
{cout<<hour<<":"<<minute<<":"<<sec<<endl;}

int main()
{
    Time t1; t1.set_time();
    t1.show_time();
    return 0;
}