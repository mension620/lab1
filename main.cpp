//
//  main.cpp
//  lab1
//
//  Created by 陳建維 on 2015/3/15.
//  Copyright (c) 2015年 陳建維. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    
    int num1;
    cout << "Please enter the first number: ";
    cin >> num1;
    cout << num1 << " ";
    
    while (num1 != 1) {
        if (num1 % 2 != 0) {
            num1 = num1 * 3 + 1;
            cout << num1 << " ";
        }
        if (num1 % 2 == 0) {
            num1 = num1 / 2;
            cout << num1 << " ";
        }
    }
    
    return 0;
    
}