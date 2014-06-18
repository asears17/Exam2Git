//
//  Runner.h
//  Exam2
//
//  Created by Drew Sears on 6/17/14.
//  Copyright (c) 2014 Drew Sears. All rights reserved.
//

#ifndef __Exam2__Runner__
#define __Exam2__Runner__

#include <iostream>
#include <vector>
using namespace std;
class Runner{
private:
    string firstname;
    string lastname;
    int pace;
    vector<Runner>entries;
    
public:
    Runner(string FirstName, string LastName, int Pace);
    
    string find_firstname();//finds the names and pace
    string find_lastname();
    int find_pace();
    
    
    string get_firstname();//places the names and pace in the files
    string get_lastname();
    int get_pace();
};

#endif /* defined(__Exam2__Runner__) */
