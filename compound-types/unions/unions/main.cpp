//
//  main.cpp
//  unions
//
//  Created by Alvaro Xool Canul on 13/09/25.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    union one4all {
        int int_val;
        long long_val;
        double double_val;
    };
    
    one4all pail;
    pail.int_val = 15;
    cout << pail.int_val;
    pail.double_val = 1.38;
    cout << pail.double_val;
    
    /*
    struct widget
    {
        char brand[20];
        int type;
        union id {
            // format depends on widget type
            long id_num; // type 1 widgets
            char id_char[20]; // other widgets
        } id_val;
    };

    widget prize;

    if (prize.type == 1)
        cin >> prize.id_val.id_num;
    // use member name to indicate mode
    else
        cin >> prize.id_val.id_char;
    */
    
    struct widget
    {
        char brand[20];
        int type;
        union {
            // format depends on widget type
            long id_num; // type 1 widgets
            char id_char[20]; // other widgets
        };
    };

    widget prize;

    if (prize.type == 1)
        cin >> prize.id_num;
    // use member name to indicate mode
    else
        cin >> prize.id_char;
    
    return 0;
}
