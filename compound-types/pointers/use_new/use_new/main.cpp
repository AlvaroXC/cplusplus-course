//
//  main.cpp
//  use_new
//
//  Created by Alvaro Xool Canul on 20/09/25.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
   
    int nights = 1001;
    int * pt = new int; // allocate space for an int
    *pt = 1001; // store a value there
    
    cout << "nights value = " << nights << ": location " << &nights << endl;
    cout << "int pointer " << "value = " << *pt << ": location = " << pt << endl;
    
    
    double * pd = new double; // allocate space for a double
    *pd = 10000001.0; // store a double there
    cout << "double " << "value = " << *pd << ": location = " << pd << endl;
    cout << "location of pointer pd: " << &pd << endl;
    
    cout << "size of pt = " << sizeof(pt) << ": size of *pt = " << sizeof(*pt) << endl;
    cout << "size of pd = " << sizeof pd << ": size of *pd = " << sizeof(*pd) << endl;
    
    return 0;
}
