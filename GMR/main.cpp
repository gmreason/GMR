//
//  main.cpp
//  GMR
//
//  Created by gmr on 15/11/11.
//  Copyright © 2015年 gmr. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    //std::cout << "Hello, World!\n";
    int a[3];
    int *p;
    a[0]=11;
    a[1]=22;
    a[2]=33;
    p=a;
    printf("&a[0]=%x &a[1]=%x &a[2]=%x a=%x *p=%x",&a[0],&a[1],&a[2],a,*p);
    return 0;
}
