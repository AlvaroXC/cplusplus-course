//
//  main.cpp
//  comstr2
//
//  Created by Alvaro Xool Canul on 04/10/25.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    
    string word = "?mate";
    
    for (char ch = 'a'; word != "mate"; ch++)
    {
        cout << word << endl;
        word[0] = ch;
    }
    
    cout << "After loop ends, word is " << word << endl;
    
    return 0;
}
