//
//  main.cpp
//  Exam2
//
//  Created by Drew Sears on 6/17/14.
//  Copyright (c) 2014 Drew Sears. All rights reserved.
//

#include <iostream>
#include <vector>
#include <fstream>
#include "Runner.h"
using namespace std;
int indexOf(const vector<string>& v, string& name)
{
    for (unsigned i = 0; i < v.size(); i++)
        if (v[i] == name)
            return i;
    
    return -1;
}

int main()
{
    
    ifstream input("Times.txt");
    if (input.fail())
    {
        cout << "File does not exist" << endl;
        cout << "Exit program" << endl;
        return 0;
    }
    
    cout << "enter time" << endl;


    
}

