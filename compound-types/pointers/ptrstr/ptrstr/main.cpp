//
//  main.cpp
//  ptrstr
//
//  Created by Alvaro Xool Canul on 26/09/25.
//

#include <iostream>
#include <cstring>

using namespace std;

int main(int argc, const char * argv[]) {
    
    char animal [20] = "bear";
    const char * bird = "wren"; //bird holds the addres of string, assign the addres of wren to bird pointer
    char * ps; //uninitialized
    
    //this means you can use the pointer bird as you would use string "wren"
    cout << "A concerned " << bird << " speaks\n";
    
    //you can use both equivalent, both are addresses to strings
    cout << animal << "and";
    cout << bird << "\n";
//    cout << ps << "\n"; //display garbage, may cause a crash
    
    cout << "Enter a kind of animal: ";
    cin >> animal; // ok if input < 20 chars
    
    // cin >> ps; Too horrible a blunder to try; ps doesn't
    // point to allocated space
    
    ps = animal; // set ps to point to string
    
    
    //if you give cout a pointer, it prints the address, but if the pointer is type char *, cout
    //display the pointed string
    cout << ps << "!\n"; // ok, same as using animal
    cout << "Before using strcpy():\n";
    cout << animal << " at " << (int *) animal << endl;
    cout << ps << " at " << (int *) ps << endl;
    
    ps = new char[strlen(animal) + 1]; //get new storage
    strcpy(ps, animal);
    
    cout << "After using strcp \n";
    cout << animal << " at " << (int *) animal << endl;
    cout << ps << " at " << (int *) ps << endl;
    
    delete [] ps;
    
    
    return 0;
}
