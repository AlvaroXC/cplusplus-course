//
//  main.cpp
//  range-based
//
//  Created by Alvaro Xool Canul on 04/10/25.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    
    double prices[5] = {4.99, 10.99, 6.87, 7.99, 8.49};
    
    for (double x : prices)
        cout << x << std::endl;
    
    //modify array values
    for (double &x : prices)
        x = x * 0.80; //20% off sale
    
    for (int x : {3, 5, 2, 8, 6}){
        cout << x << " ";
        cout << '\n';
    }
        
    
    return 0;
}
