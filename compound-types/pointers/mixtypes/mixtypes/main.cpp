//
//  main.cpp
//  mixtypes
//
//  Created by Alvaro Xool Canul on 27/09/25.
//

#include <iostream>

using namespace std;

struct antarctica_years_end{
    int year;
    //some really interesting data, etc
};

int main(int argc, const char * argv[]) {
    
    //we can create variables of this type
    antarctica_years_end s01, s02, s03;
    
    //we can access members using the membership operator
    s01.year = 1998;
    
    //we can create a pointer to a such structure
    antarctica_years_end * pa = &s02;
    
    //we can use the indirect membership operator to access members
    pa->year = 1999;
    
    //we can create arrays of structures
    antarctica_years_end trio[3]; // array of 3 structures
    
    //we can use the membership operator to access members of an element
    trio[0].year = 2003;
    
    //array name is a pointer, we can also use the indirect membership operator
    cout << trio->year << std::endl;
    
    //we can create an array of pointers
    const antarctica_years_end * arp[3] = {&s01, &s02, &s03};
    
    //arp[1] is a pointer and we can use indirect membership operator
    cout << arp[1]->year << std::endl;
    
    //we can create a pointer to such an array
    const antarctica_years_end ** ppa = arp;
    
    auto ppb = arp; // C++11 automatic type deduction
    // or else use const antarctica_years_end ** ppb = arp;
    
    //ppa points to the first member of arp[0]
    cout << (*ppa)->year << std::endl;
    
    //points to the next element arp[1]
    cout << (*(ppb+1))->year << std::endl;
    
    
    return 0;
}
