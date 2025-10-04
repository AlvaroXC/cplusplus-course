//
//  main.cpp
//  nested
//
//  Created by Alvaro Xool Canul on 04/10/25.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    
    const int CITIES = 5;
    const int YEARS = 4;
    
//    const char * cities[CITIES] = {
//        "Gribble City",
//        "Gribbletown",
//        "New Gribble",
//        "San Gribble",
//        "Gribble Vista"
//    };
    const string cities[CITIES] = // array of 5 strings
    {
        "Gribble City",
        "Gribbletown",
        "New Gribble",
        "San Gribble",
        "Gribble Vista"
    };
    
    int max_temps[YEARS][CITIES] = {
        {96, 100, 87, 101, 105},
        {96, 98, 91, 107, 104},
        {97, 101, 93, 108, 107},
        {98, 103, 95, 109, 108}
    };
    
    cout << "Maximum temperatures for 2008 - 2011\n\n";
    
    for (int city = 0; city < CITIES; ++city)
    {
        cout << cities[city] << ":\t";
        for (int year = 0; year < YEARS; ++year)
            cout << max_temps[year][city] << "\t";
        cout << endl;
    }
    
    return 0;
}
