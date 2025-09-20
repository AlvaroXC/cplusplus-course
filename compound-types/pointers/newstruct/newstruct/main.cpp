//
//  main.cpp
//  newstruct
//
//  Created by Alvaro Xool Canul on 20/09/25.
//

#include <iostream>

using namespace std;

struct inflatable // structure definition
{
    char name[20];
    float volume;
    double price;
};

int main(int argc, const char * argv[]) {
    
    inflatable * ps = new inflatable; // allot memory for structure
    cout << "Enter name of inflatable item: ";
    cin.get(ps->name, 20); // method 1 for member access
    
    cout << "Enter volume in cubic feet: ";
    cin >> (*ps).volume; // method 2 for member access
    cout << "Enter price: $";
    cin >> ps->price;
    cout << "Name: " << (*ps).name << endl; //method 2
    cout << "Volume: " << ps->volume << " cubic feet\n"; // method 1
    cout << "Price: $" << ps->price << endl; // method 1
    delete ps;
    
    return 0;
}
 
