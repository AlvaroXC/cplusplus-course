//
//  main.cpp
//  consts
//
//  Created by Alvaro Xool Canul on 03/10/25.
//

#include <iostream>


using namespace std;

void petruchio(const char * shrew){
    cout << shrew << endl;
    //shrew[0] = 'K'; //compiler error
}

struct ClockOfTheLongNow{

    ClockOfTheLongNow(int year){
        this->year = year;
    }
    //you promise not to modify the current object's state within the const method
    
    int get_year() const{
        return year;
    }
    
private:
    int year;
    
};


//holders of const references and pointers cannot invoke methods that are not const, cause
//methods that are not const might modify an object's state
bool is_leap_year(const ClockOfTheLongNow& clock) {
    if (clock.get_year() % 4 > 0) return false;
    if (clock.get_year() % 100 > 0) return true;
    if (clock.get_year() % 400 > 0) return false;
    return true;
}


struct Avout{
    
    //Member initializer list are the primary mechanism for initializing class members
    //allow you to set the value of a const field at runtime
    Avout(const char* name, int year_of_apert):
    name {name}, appert {year_of_apert} {
        
    }
    
    
    //const members can not modify after initialization
    const char * name = "Erasmas";
    ClockOfTheLongNow appert;
};

int main(int argc, const char * argv[]) {

    Avout raz{ "Erasmas", 3010 };
    Avout jad{ "Jad", 4000 };
    
    return 0;
}
