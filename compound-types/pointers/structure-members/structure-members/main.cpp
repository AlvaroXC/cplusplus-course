//
//  main.cpp
//  structure-members
//
//  Created by Alvaro Xool Canul on 26/09/25.
//

#include <iostream>

using namespace std;

struct things{
    int good;
    int bad;
};

int main(int argc, const char * argv[]) {

    things grubnose {
        3,
        453
    };
    
    things * ts = &grubnose;
    
    //use the dot operator
    cout << grubnose.bad << endl;
    
    //use membership operator, pointer to struct
    cout << ts->bad << endl; 
    
    return 0;
}
