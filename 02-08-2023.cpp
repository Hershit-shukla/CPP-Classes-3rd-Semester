// Different data types
/*
Integer:

int data type is used to store whole numbers. It takes 4 bytes of memory.
The range of an int is from -2,147,483,648 to 2,147,483,647.
Character:

The char data type is used to store a single character and takes 1 byte of memory.
It has a range of -128 to 127, and it can represent characters like 'A' (ASCII value 65) and 'b' (ASCII value 98).
Float:

The float data type is used to store decimal numbers and takes 4 bytes of memory.
It can provide accurate results up to 7 decimal places.
Example: float x = 10.67;
Double:

The double data type takes 8 bytes of memory and is used to store larger decimal numbers.
It can provide accurate results up to 15 decimal places.
Boolean:

The bool data type is used to store Boolean values, representing true or false.
It also takes 1 byte of memory, with 1 representing true and 0 representing false.
Void:

The void data type represents a valueless entity and is often used for functions that do not return a value.
Wide Character:

The wchar_t data type is used to store characters, similar to char, but with a larger size.
It typically takes 2 to 4 bytes of memory, depending on the implementation.
*/

#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    float b = 5.5;
    char c = 'A';
    bool d = true;
    cout << "The value of a is " << a << endl;
    cout << "The value of b is " << b << endl;
    cout << "The value of c is " << c << endl;
    cout << "The value of d is " << d << endl;
    return 0;
}