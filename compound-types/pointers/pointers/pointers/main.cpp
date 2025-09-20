//
//  main.cpp
//  pointers
//
//  Created by Alvaro Xool Canul on 19/09/25.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    
    int updates = 6; //declare a variable
    int * p_updates; //declare a pointer to int
    
    p_updates = &updates; //assign the addres of int to pointer
    
    cout << "Values: update = " << updates;
    cout << ", *p_updates = " << *p_updates << endl;
    
    // express address two ways
    cout << "Addresses: &updates = " << &updates;
    cout << ", p_updates = " << p_updates << endl;
    
    // use pointer to change value
    *p_updates = *p_updates + 1;
    //*p_updates+=1;
    cout << "Now updates = " << updates << endl;
    cout <<"p_updates: "<< p_updates << endl;
    
    
    return 0;
}


