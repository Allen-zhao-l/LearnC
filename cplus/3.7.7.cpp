/*************************************************************************
> File Name: 2.cpp
> Author:allen 
> Mail: 
************************************************************************/
#include <iostream>
#include <unistd.h>
#include <ctime>
//using namespace std;
int main() {
    const double KM100_TO_MILES=62.14;
    const double LITERS_PER_GELLOW=3.875;
    using namespace std;
    double x;
    cin >>x;
    double mZ=1/(x*(1/LITERS_PER_GELLOW))*(KM100_TO_MILES);
    cout<<1<<":"<<mZ<<"mpg"<<endl;
    cout<<2<<":"<<(LITERS_PER_GELLOW*KM100_TO_MILES/x)<<"mpg"<<endl;
    return 0;
} 
