//
//  main.cpp
//  employ-references
//
//  Created by Alvaro Xool Canul on 03/10/25.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {

    int original = 100;
    int& original_ref = original; //otro nombre para un objeto que ya existe
    
    cout << original << endl;
    cout << original_ref << endl;
    
    int new_value = 200;
    //original = new_value;
    original_ref = new_value;
    
    cout << original << endl;
    cout << new_value << endl;
    cout << original_ref << endl;
    
    
    return 0;
}
