#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char *str = new char[100];
    char *otherStr = new char[100];
    
    cout << "Type some string: ";
    cin >> str;
    
    cout << "Length of the string: " << strlen(str) << endl;

    cout << "Type another string: ";
    cin >> otherStr;

    strcat(str, otherStr);
    cout << "Concatenated string: " << str << endl;
    
    strcpy(otherStr, str);
    cout << "Copied string: " << otherStr << endl;

    if(strcmp(str, otherStr) == 0)
    {
        cout << "Copy success" << endl;
    }
    else
    {
        cout << "Copy failed" << endl;
    }
}
