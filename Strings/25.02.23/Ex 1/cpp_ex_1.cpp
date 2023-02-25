#include "lib.h"

int main()
{
    char str1[50] = "Greetings";
    char str2[50] = "World";
    char str3[50] = "Good";
    char str4[50] = "Morning";
    char str5[50] = "ing";

    cout << "Length of string str1: " << mystrlen(str1) << endl;

    mystrcpy(str3, str1);
    cout << "String str3 after copying str1: " << str3 << endl;

    mystrcat(str1, str2);
    cout << "String str1 after concatenating with str2: " << str1 << endl;

    char* ptr = mystrchr(str4, 'r');
    if (ptr)
    {
        cout << "Character 'r' found at position: " << ptr - str4 << endl;
    }

    else
    {
        cout << "Character not found." << endl;
    }

    char* sub_ptr = mystrstr(str1, str5);
    if (sub_ptr)
    {
        cout << "Substring found at position: " << sub_ptr - str1 << endl;
    }

    else
    {
        cout << "Substring not found." << endl;
    }

    return 0;
}