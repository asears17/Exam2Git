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
Runner::Runner(string Name)
{
    
    Name=Name;
    
    
    string filename = "Times.txt.rtf";
    ifstream runner(filename);
    string line;
    if (!runner.fail()){
        while (!runner.eof()) {
            getline(runner, line);
            
            size_t first_comma = line.find(',');
            size_t second_comma = line.find(',', first_comma + 1);
            
            if (first_comma != string::npos && second_comma != string::npos) {
                string firstname = line.substr(0, first_comma);
                string lastname = line.substr(first_comma + 2, second_comma - first_comma - 2);
                string pace = line.substr(second_comma + 2);

            
            
        }
    }
        runner.close();
    
}

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
