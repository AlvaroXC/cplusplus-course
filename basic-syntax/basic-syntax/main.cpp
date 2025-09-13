//
//  main.cpp
//  cplusplus-course
//
//  Created by Alvaro Xool Canul on 11/08/25.
//

/*
 <iostream> is a standard library header file that contains definitions of the input and output streams
 The standard I/O streams provide ways for programs to get input from output to and external system - usually using the terminal
 
*/
#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

//function prototype
void variablesAndDataTypes();
void constantes();
void arithmeticOperators();
void logicalOperators();
void loops();

//you must specify the return type, and the argument list variable type, but the name of the arguments are not required
void foo(int);

int main(int argc, const char * argv[]) {
    
    //using standard output stream object
    cout << "Hello world!";
    
    //
    
    
    return 0; //this 0 is exit code, is interpreted as success by  a system that executes a program
}

void variablesAndDataTypes(){
    
    int age = 21;
    int year = 2024;
    int days = 7;
    
    std::cout << days;
    
    //double
    double price = 10.99;
    double gpa = 2.5;
    double temperature = 25.1;
    
    //char, single character
    char grade = 'A';
    char initial = 'B';
    
    //Every character is represented by an integer number in the character set. Thats why you can assign both numeric literals and character literals to char varible
    
    char c = 97; //letter 'a' in ASCII table
    
    
    //boolean
    bool student = true;
    
    //string (object that represents a sequence of text)
    //std::string name = "Alvaro"; (if not using namespace)
    
    //std::cout << "Hello " << name << '\n';
}


void constantes() {
    //constant
    //can't modify the value of a const variable
    //read-only
    const double PI = 3.1416;
    const int LIGTH_SPEED = 89;
    
    double radius = 7;
    
    double circumference = PI * radius * 2;
    
    std::cout << circumference << " cm" << '\n';
}

void arithmeticOperators(){
    int a = 1;
    int b = 3;
    int sum = a+ b;
    
    int difference = a -b;
    
    int product = a * b;
    
    int division = b / a;
    
    //use only with int values
    int modulus = b % a;
    
    //increment
    
    int x = 5;
    int y = ++x; // x = 6, y = 6
    int z = x++; // x = 7, z = 6
    
    //decrement
    x = 5;
    int prefixDecrement = --x ; // x = 4, y = 4
    int suffixDecrement= x--; //x = 3, z = 4
}

void logicalOperators(){
    //AND operator
    int a = 5, b = 10;
    if (a > 0 && b > 0) {
        std::cout << "Both values are positive.\n";
    }
    
    //OR operator
    a = 5;
    b = -10;
    if (a > 0 || b > 0) {
        std::cout << "At least one value is positive.\n";
    }
    
    //NOT operator
    a = 5;
    if (!(a < 0)) {
        std::cout << "The value is not negative.\n";
    }
}


void loops(){
    for (int i = 0; i < 5; i++) {
            std::cout << "Iteration: " << i << '\n';
    }
    
    int i = 0;
    while (i < 5) {
        std::cout << "Iteration: " << i << '\n';
        i++;
    }
    
    
    i = 0;
    do {
        std::cout << "Iteration: " << i << '\n';
        i++;
    } while (i < 5);
    
    
    
}

void entradaDeDatos(){
    string name;
    int age;
    
    cout << "Ingresa tu nombre"; //salida de datos
    cin >> name; //cin read the text until a blank space
    getline(cin, name); //using getline we read all text
    
    cout << "Ingresa tu edad";
    cin >> age;
    
    cout << "Hola " << name << ", tienes " << age << " años" << endl;
    
}

void stringMethods(){
    string greeting = "Hello";
    
    //concatenation
    string firstName = "firstName";
    string lastName = "lastName";
    
    string fullName = firstName + lastName;
    
    cout << fullName;
    
    string appendFullName = firstName.append(lastName);
    
    cout << appendFullName;
    
    //Adding numbers
    int x = 10;
    int y = 1;
    int z = x + y;
    
    //Adding strings
    
    string a = "10";
    string b = "1";
    
    string c = a + b;
    
    //error
    string d = "10";
    int e = 1;
    //string f = d + e;
    
    //length
    string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "Text length: " << txt.length();
    cout << "Using text size" << txt.size();
}
