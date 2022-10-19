#include <stdio.h>
#include <algorithm>
#include <iostream>
#include <vector>
#include <list>
using namespace std;

int encoder()
{
    string phrase;
    cout << "Phrase a encoder: ";
    cin >> phrase;

    string alpha1 = "abcdefghijklmnopqrstuvwxyz";

    int sch = 0;
    for (int i = 0; i < phrase.length(); i++)
    {
        int index = alpha1.find(phrase[i]);

        sch = -index - i;
        
        if (i % 2 == 0) {
            sch = -sch + 1;
            cout << alpha1[sch];
        } else {
            sch = -sch - i * 2;
            cout << alpha1[sch - 1];
        }

    }

    return 0;
}

int decoder()
{
    string phrase;
    cout << "Phrase a encoder: ";
    cin >> phrase;

    string alpha1 = "zyxwvutsrqponmlkjihgfedcba";

    int sch = 0;
    for (int i = 0; i < phrase.length(); i++)
    {
        int index = alpha1.find(phrase[i]);

        sch = -index - i;
        
        if (i % 2 == 0) {
            sch = -sch + 1;
            cout << alpha1[sch];
        } else {
            sch = -sch - i * 2;
            cout << alpha1[sch - 1];
        }

    }

    return 0;
}

int choice()
{
    int c;
    cout << "1 -> Encode\n2 -> Decode\n3 -> Quit\n";
    cin >> c;

    if (c == 1) {
        return encoder();
    } else if (c == 2) {
        return decoder();
    } else {
        return 0;
    }
}

int main()
{
    choice();
    return 0;
}
