//
//  main.cpp
//  swaps
//
//  Created by Alvaro Xool Canul on 11/10/25.
//

#include <iostream>

void swapr (int &a, int &b);
void swapp (int *p, int * q);
void swapv (int a, int b);

using namespace std;

int main(int argc, const char * argv[]) {
    
    int wallet1 = 300;
    int wallet2 = 500;
    
    cout << "wallet1 = $" << wallet1;
    cout << " wallet2 = $" << wallet2 << endl;
    cout << "Using references to swap contents:\n";
    swapr(wallet1, wallet2); // pass variables
    cout << "wallet1 = $" << wallet1;
    cout << " wallet2 = $" << wallet2 << endl;
    cout << "Using pointers to swap contents again:\n";
    swapp(&wallet1, &wallet2); // pass addresses of variables
    cout << "wallet1 = $" << wallet1;
    cout << " wallet2 = $" << wallet2 << endl;
    cout << "Trying to use passing by value:\n";
    swapv(wallet1, wallet2); // pass values of variables
    cout << "wallet1 = $" << wallet1;
    cout << " wallet2 = $" << wallet2 << endl;
    
    return 0;
}

void swapr(int & a, int & b)
{
    int temp;
    temp = a; a = b;
    b = temp;
}

void swapp(int * p, int * q)
{
    
    int temp;
    temp = *p; *p = *q;
    *q = temp;
}


void swapv(int a, int b)
{
    // try using values
    int temp;
    temp = a; a = b;
    b = temp;
}
