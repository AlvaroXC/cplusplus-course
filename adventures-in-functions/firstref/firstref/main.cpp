//
//  main.cpp
//  firstref
//
//  Created by Alvaro Xool Canul on 11/10/25.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int rats = 101;
    
    int & rodents = rats; //& it's not the address operator, it's a referencia to an int variable
    
    cout << "rats: " <<rats << endl;
    cout << "rodents: "<< rodents << endl;
    
    rodents++;
    cout << "rats: " <<rats << endl;
    cout << "rodents: "<< rodents << endl;
    
    cout << "rats address: " <<&rats << endl; //& it's the address operator 
    cout << "rodents address: "<< &rodents << endl;
    return 0;
}
