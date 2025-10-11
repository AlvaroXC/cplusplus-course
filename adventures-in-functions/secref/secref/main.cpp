//
//  main.cpp
//  secref
//
//  Created by Alvaro Xool Canul on 11/10/25.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    
    //you can't do this:
    /*
    int rats = 101;
    int & rodents;
    
    rodents = rats;
    */
    
    int rats = 101;
    int & rodents = rats; // rodents is a reference
    
    cout << "rats = " << rats;
    cout << ", rodents = " << rodents << endl;
    cout << "rats address = " << &rats;
    cout << ", rodents address = " << &rodents << endl;
    
    int bunnies = 50;
    rodents = bunnies; // can we change the reference?
    
    cout << "bunnies = " << bunnies;
    cout << ", rats = " << rats;
    cout << ", rodents = " << rodents << endl;
    cout << "bunnies address = " << &bunnies;
    cout << ", rodents address = " << &rodents << endl;
    
    return 0;
}
