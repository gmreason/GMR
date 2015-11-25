//
//  main.cpp
//  GMR
//
//  Created by gmr on 15/11/11.
//  Copyright © 2015年 gmr. All rights reserved.
//

#include<iostream>
using namespace std;
class Complex                                                        //定义Complex类
{
public:  Complex();                                                  //默认构造函数
    friend Complex operator+(Complex &,Complex &);                   //重载运算符“+”
    void input();                                                    //输入数据函数
    void display();                                                  //输出数据函数
private:
    int com[2][3];
};
Complex::Complex()                                                   //定义构造函数
{
    for(int i=0;i<2;i++)
        for(int j=0;j<3;j++)
            com[i][j]=0;
}
Complex operator+(Complex &a,Complex &b)                             //定义重载运算符“+”函数
{
    Complex c;
    for(int i=0;i<2;i++)
        for(int j=0;j<3;j++)
        {c.com[i][j]=a.com[i][j]+b.com[i][j];}
    return c;
}
void Complex::input()                                                //定义输入数据函数
{
    cout<<"input value of Complex:"<<endl;
    for(int i=0;i<2;i++)
        for(int j=0;j<3;j++)
            cin>>com[i][j];
}
void Complex::display()                                              //定义输出数据函数
{
    for (int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {cout<<com[i][j]<<" ";}
        cout<<endl;
    }
}   int main()
{
    Complex a,b,c;
    a.input();
    b.input();
    cout<<endl<<"Complex a:"<<endl;
    a.display();
    cout<<endl<<"Complex b:"<<endl;
    b.display();
    c=a+b;                                                           //用重载运算符“+”实现两个矩阵相加
    cout<<endl<<"Complex c = Complex a + Complex b :"<<endl;
    c.display();
    return 0;
}