#include<iostream>
#include<string>
#include "Person.hpp"

using std::cout;
using std::endl;
using std::string;

double stdDev(Person array[], int size);

int main(){

    Person p1 = Person("Jess", 29);
    Person p2 = Person("Wolf", 33);
    Person p3 = Person("Jeff", 67);
    Person p4 = Person("Tom", 55);
    Person p5 = Person("Alice", 4);

    Person pArray[]={p1, p2, p3, p4, p5};

    double sD = 0.0;
    sD = stdDev(pArray, 5);

    cout << "Standard Dev1 is: " << sD << endl;

    Person p6 = Person("A", 46);
    Person p7 = Person("B", 13);
    Person p8 = Person("C", 88);
    Person p9 = Person("D", 25);


    Person pArray2[]={p6, p7, p8, p9};
    double sD2 = 0.0;
    sD2 = stdDev(pArray2, 4);
    cout << "Standard Dev2 is: " << sD2 << endl;


    return 0;
}
