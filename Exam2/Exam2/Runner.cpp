//
//  Runner.cpp
//  Exam2
//
//  Created by Drew Sears on 6/17/14.
//  Copyright (c) 2014 Drew Sears. All rights reserved.
//

#include "Runner.h"
#include <string>
#include <fstream>
Runner::Runner(string FirstName, string LastName, int Pace)
{
    firstname= FirstName;
    lastname= LastName;
    pace= Pace;
}

string Runner:: find_firstname()
{
    ifstream runner(firstname);
    string line;
  
  
}
    
}

string Runner:: find_lastname()
{
    
}
int Runner:: find_pace()
{
    
}


string Runner:: get_firstname()
{
    return firstname;
    
}
string Runner:: get_lastname()
{
    return lastname;
    
}
int Runner:: get_pace()
{
    return pace;
    
}
