//
//  main.cpp
//  enumerations
//
//  Created by Alvaro Xool Canul on 13/09/25.
//

#include <iostream>

int main(int argc, const char * argv[]) {
  
    
    enum spectrum {
        red,
        orange,
        yellow,
        green,
        blue,
        vilet,
        indigo,
        ultraviolet
    };
    
    spectrum band;
    band = blue;
    band = 200;
    
    band = orange; //valid
    ++band;
    band = orange + red; //not valid, but a little tricky
    
    int color = blue; //valid, spectrum type promoted to int
    band = 3; //invalid, int not converted to spectrum
    color = 3 + red; //valid, red converted to int
    
    enum bits {
        one = 1,
        two = 2,
        four = 4,
        eight = 8
    };
    
    enum bigstep {
        first,
        second = 100,
        third
    };
    
    enum {
        zero,
        null = 0,
        numero_uno = 1
    };
    
    
    
    return 0;
}
