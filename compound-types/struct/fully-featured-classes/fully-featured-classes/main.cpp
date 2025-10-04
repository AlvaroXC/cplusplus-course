//
//  main.cpp
//  fully-featured-classes
//
//  Created by Alvaro Xool Canul on 03/10/25.
//

#include <iostream>

using namespace std;

//all the members are public by default
struct ClockOfTheLongNow {
    
    ClockOfTheLongNow(int new_year = 2019){
        year = new_year;
    }
        
    void add_year(){
        year++;
    }
    
    bool set_year(int new_year){
        if(new_year < 2019){
            return false;
        }
        
        year = new_year;
        return true;
        
    }
    
    int get_year(){
        return year;
    }
    
    private:
        int year;
    
};

int main(int argc, const char * argv[]) {
    
    ClockOfTheLongNow clock{2025};
    
    cout << clock.get_year() << endl;
    
    clock.set_year(2019);
    
    clock.add_year();
    
    cout << clock.get_year() << endl;
    
    
    ClockOfTheLongNow clock2;
    cout << clock2.get_year() << endl;
    
    return 0;
}
