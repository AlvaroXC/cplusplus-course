//
//  main.cpp
//  cplusplus-problems
//
//  Created by Alvaro Xool Canul on 14/08/25.
//

#include <iostream>

using namespace std;

void printInputUser();
void printASCIIValue();
void swapNumbers();
void findSize();
void calculateCompountInteres(int principle, int rate, int years);
void checkEvenOrOdd(int number);
void findLargestNumber(int a, int b, int c);
void isLeapYear(int year);
bool isPrime(int number);
void checkPalindrome(int number);
void simpleCalculador();
void fizzBuzz();

void printReverArray(){
    int array[] = {1, 2,3, 4,5};
    
    for (int i = 4; i>= 0; i--) {
        cout << array[i] << '\n';
    }
    
}

void primerElementoRepetido(int array[]){
    int length = sizeof(array)/sizeof(short);
    
    for(int i= 0; i<length; i++ ){
        
    }
}


void incrementAndDecrement(){
    
    int firstNumber = 10;
    int secondNumber = 20;
    
    int copyOfFirstNumber = firstNumber++;
    cout << copyOfFirstNumber << " Post Increment" << '\n';
    cout << firstNumber << " Current Value" << '\n';
    int secondCopyOfFirstNumber = ++firstNumber;
    cout << secondCopyOfFirstNumber << " Pre Increment" << '\n';
    
    
    int copyOfSecondNumber = secondNumber--;
    cout << copyOfSecondNumber << " Post decrement" << '\n';
    cout << secondNumber << " Current Value" << '\n';
    int secondCopyOfSecondtNumber = --secondNumber;
    cout << secondCopyOfSecondtNumber << " Pre decrement" << '\n';
    
}


int main(int argc, const char * argv[]) {

    //printInputUser();
    //printASCIIValue();
    //swapNumbers();
    //findSize();
    int principle = 25000.0;
    int rate = 12.0;
    int years = 5;
    calculateCompountInteres(principle, rate, years);
    //checkEvenOrOdd(4);
    
    //findLargestNumber(1000, 6, 500);
    //isLeapYear(2004);
    
    /*
    isPrime(3) ? cout << "Is prime \n" : cout << "Is not prime \n";
     
    isPrime(9) ? cout << "Is prime \n" : cout << "Is not prime \n";
    isPrime(17) ? cout << "Is prime \n" : cout << "Is not prime \n";
    isPrime(35) ? cout << "Is prime \n" : cout << "Is not prime \n";
    isPrime(40) ? cout << "Is prime \n" : cout << "Is not prime \n";
    isPrime(61) ? cout << "Is prime \n" : cout << "Is not prime \n";
     */
    
    //checkPalindrome(1234);
    
    //simpleCalculador();
    
    //fizzBuzz();
    
    //incrementAndDecrement();
    
    //printReverArray();
    
    int contador=0;
    int myArray[4]={1, 0, 3, 4};
    
   for(int i=3;i>=0;i--){
       cout<<myArray[i]<<endl;
       
       if(myArray[i]== 0){
           contador+=1;
           cout<<endl<<"hay "<<contador<<" ceros en el arreglo"<<endl;
       }
       
   }
    
    return 0;
}

void fizzBuzz(){
    for (int i = 1; i<=100; i++) {
        if(i % 3 == 0 && i % 5 == 0){
            cout << i << " Fizz Buzz" << '\n';
        }else if (i % 3 == 0){
            cout << i << " fizz" << '\n';
        }else if (i % 5 == 0){
            cout << i << " buzz" << '\n';
        }else{
            cout << "El número " << i << " no es multiplo de 3 ni de 5 \n";
        }
    }
}

void simpleCalculador(){
    double numberOne;
    double numberTwo;
    char option;
    
    cout << "Ingresa dos números \n";
    cin >> numberOne;
    cin >> numberTwo;
    
    cout << "Enter a for addition, \n s for substraction, \n m for multiplication, \n d for division \n";
    cin >> option;
    
    switch (option) {
        case 'a':
            cout << numberOne + numberTwo << '\n';
            break;
        case 's':
            cout << numberOne - numberTwo << '\n';
            break;
        case 'm':
            cout << numberOne * numberTwo << '\n';
            break;
        case 'd':
            cout << numberOne / numberTwo << '\n';
            break;
        default:
            break;
    }
    
}

void checkPalindrome(int number){
    string numberInString = to_string(number);
    unsigned long stringLength = numberInString.size()- 1;
    unsigned long rigthToLeftIndex = stringLength;
    
    for(int i = 0; i <= stringLength; i++){
        
        cout << "i= " << i << '\n';
        cout << "d= " << rigthToLeftIndex << '\n';
        cout << "Izquierda a derecha " << numberInString[i] << '\n';
        cout << "Derecha a izquierda " << numberInString[rigthToLeftIndex] << '\n';

        
        if(numberInString[rigthToLeftIndex] != numberInString[i] ){
            cout << "Is not palindrome \n";
            return;
        }
        rigthToLeftIndex--;
    }
    
    cout << "Is palindrome \n";
    
    
    
}

bool isPrime(int number){
    bool isPrime = false;
    int numberOfDivisors = 0;
    
    if(number <= 1){
        return isPrime;
    }else{
        for(int i = 1; i<= number; i++){
            if(number % i == 0){
                numberOfDivisors++;
            }
        }
        
        if(numberOfDivisors == 2){
            isPrime = true;
        }
        return isPrime;
    }
    
}

void isLeapYear(int year){
    bool isLeapYear = false;
    if(year % 4 == 0) isLeapYear = true;
    cout << "The year " << year << " is " << isLeapYear << '\n';
}

void findLargestNumber(int a, int b, int c){
    if( a > b && a > c){
        cout << "The largest is " << a << '\n';
    } else if (b > a && b > c){
        cout << "The largest is " << b << '\n';
    }else{
        cout << "The largest is " << c << '\n';
    }
}

void checkEvenOrOdd(int number){
    bool isEven = false;
    
    if(number % 2 == 0){
        isEven = true;
    }
    
    cout << "Number " << number << " is " << isEven << "\n";
}

void calculateCompountInteres(int principle, int rate, int years){
    int gananciaTotal = 0, ganancia = 0;
    int percentage = rate/100;
    cout << "Percentage "<<percentage << '\n';

    for(int i= 1; i<= years; i++ ){
        ganancia = principle*percentage;
        gananciaTotal += ganancia;
        
        principle = principle + ganancia;
        cout << "Principle "<< principle << '\n';
    }
    
    cout << "Interes compuesto " << gananciaTotal << '\n';
}

void findSize(){
    int intNumber;
    char character;
    bool booleanValue;
    double doubleValue;
    float floatValue;
    
    cout << sizeof(intNumber) << '\n';
    cout << sizeof(character) << '\n';
    cout << sizeof(booleanValue) << '\n';
    cout << sizeof(doubleValue) << '\n';
    cout << sizeof(floatValue) << '\n';

    
}

void printASCIIValue(){
    cout << "Ingresa un número entero entre el 65 y el 90 o entre el 97 y el 122 \n";
    int inputNumber;
    cin >> inputNumber;
    cout << "Tu valor ASCII es: " << (char)inputNumber << '\n';
}

void printInputUser(){
    cout << "Ingresa un número entero \n";
    int inputNumber;
    cin >> inputNumber;
    cout << "Tu número ingresado es: " << inputNumber << '\n';
}

void swapNumbers(){
    int a = 10, b= 90;
    int temp = a;
    a = b;
    b = temp;
    cout << "Valor de a es: " << a << "\nEl valor de b es " << b << '\n';
}


