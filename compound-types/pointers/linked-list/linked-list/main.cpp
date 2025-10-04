//
//  main.cpp
//  linked-list
//
//  Created by Alvaro Xool Canul on 03/10/25.
//

#include <iostream>

using namespace std;

struct Element{
    Element * next;
    char prefix [2];
    int operating_number;
    
    
    void insert_after(Element * new_element){
        new_element->next = next;
        next = new_element;
        
        //this is implicit when access members
        //this->next = new_element;
    }
    
};

int main(int argc, const char * argv[]) {
    
    Element trooper1, trooper2, trooper3;
    trooper1.prefix[0] = 'T';
    trooper1.prefix[1] = 'K';
    trooper1.operating_number = 421;
    trooper1.insert_after(&trooper2);
    
    trooper2.prefix[0] = 'F';
    trooper2.prefix[1] = 'N';
    trooper2.operating_number = 2187;
    
    trooper2.insert_after(&trooper3);
    trooper3.prefix[0] = 'L';
    trooper3.prefix[1] = 'S';
    trooper3.operating_number = 005;
    
    //&trooper1 es el inicio de la lista
    //checamos que no sea nulo
    //al final de cada iteración cursor apuntará al siguiente elemento
    
    for (Element *cursor = &trooper1; cursor != nullptr; cursor = cursor->next) {
        cout << cursor->prefix[0]<< cursor->prefix[1] << "-" << cursor->operating_number << endl;
    }
    
    return 0;
}
