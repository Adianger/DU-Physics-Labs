#include <bits/stdc++.h>

using namespace std;

int main()
{
    char message[100], ch;
    int i, key;
    cout << "Enter a message to encrypt: ";
    cin.getline(message, 100);      //what is message and size of message
    cout << "Enter key: ";
    cin >> key;
    for (i = 0; message[i] != '\0'; ++i)
    {
        ch = message[i];
        if (ch >= 'a' && ch <= 'z')   //for small casing
        {
            ch = ch + key;
            if (ch > 'z')
            {
                ch = ch - 'z' + 'a' - 1;
            }
            message[i] = ch;
        }
        else if (ch >= 'A' && ch <= 'Z') // for capitall casing
        {
            ch = ch + key;
            if (ch > 'Z')
            {
                ch = ch - 'Z' + 'A' - 1;
            }
            message[i] = ch;
        }
    }
    cout << "Encrypted message: " << message;
    return 0;
}