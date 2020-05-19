//
//  main.cpp
//  cpptest
//
//  Created by Sam Pritchard on 17/05/2020.
//  Copyright © 2020 Sam Pritchard. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

int cubeIt(int num1) {
    return num1 * num1 * num1;
}


int main() {
    int inputNum;
    cout << "Gimme a number to cube... " << endl;
    cin >> inputNum;
    
    cout << cubeIt(inputNum) << endl;
}




