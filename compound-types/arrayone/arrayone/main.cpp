//
//  main.cpp
//  arrayone
//
//  Created by Alvaro Xool Canul on 23/08/25.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {


    
    
    int yams[3]; //array with three elements
    yams[0] = 7; //assign value to the first element
    yams[1] = 8;
    yams[2] = 6;
    
    cout << yams[0]; //get the first element of the array
    cout << yams[1]; //get the second element of the array
    
    int yamcosts[3] = {20, 30, 5}; //create an initilize array
    
    cout << "Total yams = ";
    cout << yams[0] + yams[1] + yams[2] << endl;
    
    cout << "The package with " << yams[1] << " yams costs ";
    cout << yamcosts[1] << " cents per yam.\n";
    
    int total = yams[0] * yamcosts[0] + yams[1] * yamcosts[1];
    total = total + yams[2] * yamcosts[2];
    
    cout << "The total yam expense is " << total << " cents.\n";
    cout << "\nSize of yams array = " << sizeof yams;
    cout << " bytes.\n";
    cout << "Size of one element = " << sizeof yams[0];
    cout << " bytes.\n";
    
    
    //INITIALIZATION RULES
    
    int cards[4] = {3,6,8,10}; //okay
    int hand[4]; //okay
    //hand[4]= {5,6,7,8}; //not allowed
    //hand = cards; //not allowed
    
    float hotelTrips[5] = {5.0, 2.5}; //{5.0, 2.5, 0, 0, 0}
    long totals[500] = {0};
    long totals2[500]= {1}; //{1, 0, 0, 0, 0, .....}
    short things[] = {1, 2, 45, 5}; //the compiler counts the elements for you
    
    //knows how long is an array
    int num_elements = sizeof(things) / sizeof(short);
    cout << "Number of elements: " << num_elements << '\n';

    
    double earnings[4]{1.2e4, 1.6e4, 1.1e4, 1.7e4};
    
    unsigned int counts[10] = {}; // all elements set to 0
    float balances[100] {}; // all elements set to 0
    
    //long plifs[] = {25, 92, 3.0}; // not allowed
    //char slifs[4] {'h', 'i', 1122011, '\0'}; // not allowed
    //char tlifs[4] {'h', 'i', 112, '\0'}; // allowed
    
        
    return 0;
}
