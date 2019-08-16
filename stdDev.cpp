/******************************************************************************
 ** Date: July 28, 2019
 ** Description: Function called stdDev that takes 2 parameters (array of
 ** Person objects and the size of the array as an int). The function
 ** returns the standard deviation of all the ages.
 *****************************************************************************/
#include "Person.hpp"
#include <math.h>

double stdDev(Person array[], int size){
    //initializes variables to 0 so there are no junk values
    double stdDev = 0.0, sumOfAges = 0.0, meanOfAges = 0.0, total = 0.0, meanOfSquaredDiff = 0.0, ageMinusMean = 0.0;
    int countFirstLoop = 0, countSecondLoop = 0;

    //loops through the array and adds all the ages together to get a total sum of ages
    for (countFirstLoop = 0; countFirstLoop < size; countFirstLoop++){
        sumOfAges += array[countFirstLoop].getAge();
    }

    //divides the total sum of ages by the size to get the mean
    meanOfAges = sumOfAges/size;

    //subtract the mean from each age and square the results and add them together for a new total
    for (countSecondLoop = 0; countSecondLoop < size; countSecondLoop++){
        ageMinusMean = (array[countSecondLoop].getAge() - meanOfAges);
        total += pow(ageMinusMean, 2);
    }

    //get the mean of the squared differences
    meanOfSquaredDiff = total/size;

    //get the standard deviation by taking the square root of the meanOfSquaredDiff
    stdDev = sqrt(meanOfSquaredDiff);

    return stdDev;
}
