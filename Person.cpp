/******************************************************************************
 ** Date: July 24, 2019
 ** Description: Person class that has two data members (string name and double
 ** age). It has a contructor that takes two values and initializes the data
 ** members. Has getName method and getAge method.
 *****************************************************************************/

#include "Person.hpp"
#include<string>

/******************************************************************************
 **                     Person::Person(string, double)
 ** Constructor that takes the values and initializes the data members name and
 ** age.
 *****************************************************************************/
Person::Person(string n, double a){
    name = n;
    age = a;
}

/******************************************************************************
 **                         Person::getName()
 ** Returns the string name held in the class object
 *****************************************************************************/
string Person::getName(){
    return name;
}

/******************************************************************************
 **                         Person::getAge()
 ** Returns the double age held in the class object
 *****************************************************************************/
double Person::getAge(){
    return age;
}
