//
//  main.cpp
//  strings
//
//  Created by Alvaro Xool Canul on 23/08/25.
//

#include <iostream>
#include <cstring>

using namespace std;

int main(int argc, const char * argv[]) {

    char dog[8] = { 'b', 'e', 'a', 'u', 'x', ' ', 'I', 'I'}; // not a string!
    char cat[8] = {'f', 'a', 't', 'e', 's', 's', 'a', '\0'}; // a string!
    
    //work by processing a string character-by-character until they reach the null character.
    cout << dog << '\n';
    cout << cat << '\n';
    
    
    //char bird[11] = "Mr. Cheeps"; // the \0 is understood
    //char fish[] = "Bubbles"; // let the compiler count
    
    //char shirt_size = "S"; //Not allowed
    char shirt_size = 'S';
    
    //CONCATENING STRING LITERALS
    cout << "I'd give my right arm to be" " a great violinist.\n";
    cout << "I'd give my right arm to be a great violinist.\n";
    cout << "I'd give my right ar"
    "m to be a great violinist.\n";
    
    //USING STRINGS IN A ARRAY
    const int SIZE = 15;
    char name1[SIZE]; // empty array
    char name2[SIZE] = "C++owboy"; // initialized array
    
    cout << "Howdy! I'm " << name2;
    cout << "! What's your name?\n";
    cin >> name1;
    cout << "Well, " << name1 << ", your name has ";
    //strlen return the size of the string storage in the array not the size of the array
    //strlen just count the visible characters and not the null character
    cout << strlen(name1) << " letters and is stored\n";
    //give the size of the array
    cout << "in an array of " << sizeof(name1) << " bytes.\n";
    cout << "Your initial is " << name1[0] << ".\n";
    name2[3] = '\0'; // set to null character
    cout << "Here are the first 3 characters of my name: ";
    cout << name2 << endl;
    
    //ADVENTURES IN STRING INPUT
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];
    cout << "Enter your name:\n";
    cin >> name;
    cout << "Enter your favorite dessert:\n";
    cin >> dessert;
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";
    
    const int ARR_SIZE = 20;
    char name[ARR_SIZE];
    char dessert[ARR_SIZE];
    cout << "Enter your name:\n";
    cin.getline(name, ARR_SIZE); // reads through newline
    cout << "Enter your favorite dessert:\n";
    cin.getline(dessert, ARR_SIZE);
    cout << "I have some delicious " << dessert;
    cout << "for you, " << name << ".\n";
    
    
    
    char charr1[20]; // create an empty array
    char charr2[20] = "jaguar"; // create an initialized array
    string str1; // create an empty string object
    string str2 = "panther"; // create an initialized string
    
    cout << "Enter a kind of feline: ";
    cin >> charr1;
    
    cout << "Enter another kind of feline: ";
    cin >> str1; // use cin for input
    
    cout << "Here are some felines:\n";
    cout << charr1 << " " << charr2 << " "
         << str1 << " " << str2 // use cout for output
         << endl;
    
    cout << "The third letter in " << charr2 << " is "
         << charr2[2] << endl;
    
    cout << "The third letter in " << str2 << " is "
         << str2[2] << endl; // use array notation
    
    
    char first_date[] = {"Le Chapon Dodu"};
    char second_date[] {"The Elegant Plate"};
    string third_date = {"The Bread Bowl"};
    string fourth_date {"Hank's Fine Eats"};
    

    //ASSIGNAMENT, CONCATENATION AND APPENDING
    
    char charr1[20]; // create an empty array
    char charr2[20] = "jaguar"; // create an initialized array
    string str1; // create an empty string object
    string str2 = "panther"; // create an initialized string
    charr1 = charr2; // INVALID, no array assignment
    str1 = str2; // VALID, object assignment ok
    
    
    
    string str3;
    str3 = str1 + str2;// assign str3 the joined strings
    str1 += str2; // add str2 to the end of str1
    
    
    
    string s1 = "penguin";
    string s2, s3;
    cout << "You can assign one string object to another: s2 = s1\n";
    s2 = s1;
    cout << "s1: " << s1 << ", s2: " << s2 << endl;
    cout << "You can assign a C-style string to a string object.\n";
    cout << "s2 = \"buzzard\"\n";
    s2 = "buzzard";
    cout << "s2: " << s2 << endl;
    cout << "You can concatenate strings: s3 = s1 + s2\n";
    s3 = s1 + s2;
    cout << "s3: " << s3 << endl;
    cout << "You can append strings.\n";
    s1 += s2;
    cout <<"s1 += s2 yields s1 = " << s1 << endl;
    s2 += " for a day";
    cout <<"s2 += \" for a day\" yields s2 = " << s2 << endl;
    
    
    //MORE STRING CLASS OPERATION
    strcpy(charr1, charr2); // copy charr2 to charr1
    strcat(charr1, charr2); // append contents of charr2 to char
    
    
    
    char charr1[20];
    char charr2[20] = "jaguar";
    string str1;
    string str2 = "panther";
    
    // assignment for string objects and character arrays
    str1 = str2; // copy str2 to str1
    strcpy(charr1, charr2); // copy charr2 to charr1
    
    // appending for string objects and character arrays
    str1 += " paste"; // add paste to end of str1
    strcat(charr1, " juice"); // add juice to end of charr1
    
    // finding the length of a string object and a C-style string
    int len1 = str1.size(); // obtain length of str1
    int len2 = strlen(charr1); // obtain length of charr1
    
    cout << "The string " << str1 << " contains "
    << len1 << " characters.\n";
    
    cout << "The string " << charr1 << " contains "
    << len2 << " characters.\n";
    
    return 0;
}
