//
//  main.cpp
//  delete
//
//  Created by Alvaro Xool Canul on 26/09/25.
//

#include <iostream>

using namespace std;

char * getName();

int main(int argc, const char * argv[]) {
  
    //storing string input
    char * name;
    
    name = getName(); //assign address of string to name
    
    cout << name << " at " << (int *) name << "\n";
    delete [] name; // memory freed
    name = getName(); // reuse freed memory
    cout << name << " at " << (int *) name << "\n";
    delete [] name; // memory freed again
    
    return 0;
}

//return pointer to new string
char * getName(){
    char temp[80]; // temporary storage
    
    cout << "Enter last name: ";
    cin >> temp;
    
    char * pn = new char[strlen(temp) + 1]; //create a chunk of memory sized to fit input string
    
    cout << "Value of * pn before copy method: " << *pn << endl;
    
    strcpy(pn, temp); // copy string into smaller space
    
    cout << "Value of * pn: " << pn << endl;
    
    return pn; // temp lost when function ends
}
