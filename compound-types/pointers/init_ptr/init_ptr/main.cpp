//
//  main.cpp
//  init_ptr
//
//  Created by Alvaro Xool Canul on 20/09/25.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int higgens = 5;
    int * pt = &higgens;
    
    cout << "Value of higgens = " << higgens
    << "; Address of higgens = " << &higgens << endl;
    cout << "Value of *pt = " << *pt
    << "; Value of pt = " << pt << endl;
    
    return 0;
}
