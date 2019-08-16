/******************************************************************************
 ** Date: July 28, 2019
 ** Description: Person class specification file
 *****************************************************************************/
#include<string>
#ifndef Person_hpp
#define Person_hpp

using std::string;

class Person{
private:
    string name;
    double age;
public:
    Person(string, double);
    string getName();
    double getAge();
};

#endif
