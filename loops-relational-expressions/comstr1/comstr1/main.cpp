//
//  main.cpp
//  comstr1
//
//  Created by Alvaro Xool Canul on 04/10/25.
//

#include <iostream>
#include <cstring>

using namespace std;

int main(int argc, const char * argv[]) {
    
    
    char word[5] = "?ate";
    
    //strcmp take two address as arguments
    for(char ch = 'a'; strcmp(word, "mate"); ch++ ){
        cout << word << endl;
        word[0] = ch;
    }
    
    cout << "after loops ends word is: " << word << endl;
    
    
    return 0;
}
