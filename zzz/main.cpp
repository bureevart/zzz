#include <string>
#include <iostream>
#include <regex>
using namespace std;

int main()
{
    const int N = 5;
    string str[N] = {
        "C227HA777",
        "KY22777",
        "T22B7477",
        "M227K19Y9",
        " C227HA777"
    };
    regex Private("\\w\\d{3}\\w{2}\\d{3}");
    regex Taxi("\\w{2}\\d{5}");
    smatch ResultRegex; //храним результат сравнения успешные

    for (int i =0;i < N;i++)
    {
        if(regex_match(str[i], ResultRegex, Private))
        {
            cout << "Private" << endl;
        }
        else if (regex_match(str[i], ResultRegex, Taxi))
        {
            cout << "Taxi" << endl;
        }
        else
        {
            cout << "Fail" << endl;
        }

    }
}