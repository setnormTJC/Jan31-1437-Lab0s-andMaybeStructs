#include <iostream>
#include <string>

#include<vector>


#include<iomanip>

using namespace std;


struct Time //struct is short for "structure" 
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


    bool operator == (Person otherPerson)
    {
        //if same attributes 
        return true; 
    }


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

/// <summary>
/// The usual way
/// </summary>
/// <param name="p1"></param>
/// <param name="p2"></param>
/// <returns></returns>
Person makePerson(Person& p1, Person& p2)
{
    Person p3; 
    return p3; 
}


/// <summary>
/// CLONING 
/// </summary>
/// <param name="p1"></param>
/// <returns></returns>
Person makePerson(Person& p1)
{
    Person clonedPerson; 
    return clonedPerson; 
}

Person makePerson()
{
    Person godsPerson; 

    return godsPerson; 
}




int main()
{
    //vector
 /*   makePerson()*/
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

    cout << "The length of thee's name: " << endl; //thee is Olde Englishe for "you"
    cout << thee.name.length() << endl; 

    Person cloneOfThee = thee; 
    cout << "\n\nClone of thee attributes: " << endl; 
    printPersonDetails(cloneOfThee); 


    Person twoPeople[2]; 
    //twoPeople[0] = me; 
    twoPeople[1] = thee; 

    //twoPeople[0].


    //cout << std::boolalpha; 
    //cout << (me == thee) << endl; 


    cout << "name ---- age ---- hasHair----numberOfBodies" << endl; 
    printPersonDetails(me); 
    printPersonDetails(thee);

    

    return 0;
}
