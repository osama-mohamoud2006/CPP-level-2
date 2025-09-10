#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    string str = "Hello";

    cout << str.length() << endl; // return the number of chars in string

    cout << str.size() << endl; // return the number of chars in string

    cout << str.at(0) << endl; // return the char at specific index

    str.append("World"); // add string to str
    cout << str << endl; // string after appending

    cout << "before using insert() to add space betwenn 2 strings: " << str << endl;

    str.insert(5, " ");
    cout << "after using insert() to add space betwenn 2 strings: " << str << endl;

    str = str.substr(0, 5); // cut string from index 0 and cut 5 chars
    cout << "After substr(): " << str << endl;

    str.push_back('!'); // add single char
    cout << str << endl;

    str.pop_back(); // remove the last char
    cout << str << endl;

    cout << str.find("e") << endl; // return the index of first occurence of substr

    if (str.find("j") == string::npos)
        cout << "isn't exist" << endl;

    cout << char(toupper('h')) << endl;

    cout << char(tolower('H')) << endl;

    char c = 'u';
    if (isupper(c))
        cout << "Uppercase\n"; // Uppercase

    if (islower(c))
        cout << "Not Uppercase\n"; // Uppercase

    if (isdigit('6'))
        cout << "Digit!" << endl;
    else
        cout << "NOT DIGIT! " << endl;

        if(ispunct('^')) cout<<"yapp"<<endl;
        else cout<<"NOt"<<endl;

}