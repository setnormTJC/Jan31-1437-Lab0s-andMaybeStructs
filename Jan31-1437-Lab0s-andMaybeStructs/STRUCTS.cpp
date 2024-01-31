#include <iostream>
#include <string>

#include<vector>


#include<iomanip>

using namespace std;


struct Time
{
    int hour; 
    int minute; 
    int second; 

};

struct Person
{
    string name;
    int age; 
    bool hasHair; 
    int numberOfBodiesInBackyard;
};

void printPersonDetails(Person& personObject)
{
    cout << left << setw(10) << personObject.name
        << setw(5) << personObject.age
        << setw(6) << personObject.hasHair
        << setw(5) << personObject.numberOfBodiesInBackyard << endl; 
}


//struct structName
//{
//    int integerName,
//        string stringName,
//        double doubleName,
//};

int main()
{
    //std::cout
    vector<int> nums = { 1, 2, 3, 4 };
    cout << std::boolalpha; 
   //Create a `Person` object (variable) 
    int a, b; //this variable (named 'a') is an (signed, 4 Byte) INTEGER type 

    Person me = { "NOT Seth", 39, true, 102 }; //"initializer list syntax" 
    Person them, thatOtherPerson; 


    //me.age = 35; 
    //me.hasHair = false; 
    //me.name = "Seth"; 
    //me.numberOfBodiesInBackyard = 5; 

    //cout << me.age << endl; 

    Person thee; 
    thee.name = "Anybody"; 
    thee.hasHair = true;
    thee.age = 20; 
    thee.numberOfBodiesInBackyard = -43; //Pet Semetary 

    cout << "name ---- age ---- hasHair----numberOfBodies" << endl; 
    printPersonDetails(me); 
    printPersonDetails(thee);


    return 0;
}
