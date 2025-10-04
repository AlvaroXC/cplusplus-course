//
//  main.cpp
//  topfive
//
//  Created by Alvaro Xool Canul on 04/10/25.
//

#include <iostream>

using namespace std;
const int SIZE = 5;
void display(const string sa[], int n);

int main(int argc, const char * argv[]) {
    
    string list[SIZE]; // an array holding 5 string object
    cout << "Enter your " << SIZE << " favorite astronomical sights:\n";
    
    for (int i = 0; i < SIZE; i++)
    {
        cout << i + 1 << ": ";
        getline(cin,list[i]);
    }
    cout << "Your list:\n";
    display(list, SIZE);
    
    return 0;
}

void display(const string sa[], int n)
{
    for (int i = 0; i < n; i++)
        cout << i + 1 << ": " << sa[i] << endl;
}
