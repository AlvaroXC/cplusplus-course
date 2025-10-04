//
//  main.cpp
//  jumps.cpp
//
//  Created by Alvaro Xool Canul on 03/10/25.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    
    char test [] {"Let's do lunch today. You can pay!"};
    
    const int ARR_SIZE {80};
    
    char line[ARR_SIZE];
    
    int spaces = 0;
    
    cout << "Enter a line of text" << "\n";

    cin.get(line, ARR_SIZE);
    
    cout << "Complete line:\n" << line << endl;
    
    cout << "Line through first period:\n";
    
    for (int i = 0; line[i] != '\0'; i++)
    {
        cout << line[i]; // display character
        
        if (line[i] == '.') // quit if it's a period
            break;
        
        if (line[i] != ' ') // skip rest of loop
            continue;
        spaces++;
    }
    cout << "\n" << spaces << " spaces\n";
    cout << "Done.\n";
    
    return 0;
}
