#include <iostream>
#include <vector>
#include<iomanip>


using namespace std;

struct Time
{
    int hour; 
    int minute;
    int second; //these 3 things are all "member variables" 
                //(because they are members of this struct)

};


/// <summary>
/// 
/// </summary>
/// <returns>A `Time` object! Hooray! </returns>
Time makeTime() 
{
    cout << "Enter hours, minutes, seconds: " << endl; 
    Time theTimeMade; 
    //getline() (returns a string, so maybe don't use here)
    cin >> theTimeMade.hour >> theTimeMade.minute >> theTimeMade.second; 

    return theTimeMade; 
}

void printListOfTimes(vector<Time> listOfTimes)
{
    cout << left << setw(10) << "Hours"
        << setw(10) << "Minutes"
        << setw(10) << "Seconds"
        << endl; 

    cout << "--------------------------" << endl; 

    for (Time& timeObject : listOfTimes)
    {
        cout << left << setw(10) << timeObject.hour << ":"
            << setw(10) << timeObject.minute << " : "
            << setw(10) << timeObject.second << endl;
    }
}

int main()
{
    Time then; 
    then.hour = 2; //pm (post meridian) 
    then.minute = 58; 
    then.second = 42; 

    vector<Time> listOfTimes; //vectors in C++ are "dynamic" (their size can change) 
    listOfTimes.push_back(then); 

    Time theTimeMade = makeTime(); 

    listOfTimes.push_back(theTimeMade);

    printListOfTimes(listOfTimes); 







    return 0;
}