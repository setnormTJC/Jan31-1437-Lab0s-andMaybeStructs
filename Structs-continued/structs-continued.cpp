#include <iostream>

#include<vector> 

using namespace std;

struct VAERS_Record
{
    int VAERS_ID = 9999; 
    vector<string> symptoms= 
    { "I sneezed a lot",
        "and I had OTHER problems!" 
    };
};

int main()
{
    cout << "Hello World";

    return 0;
}