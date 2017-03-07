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
    using namespace std;
    long s=0;
    cout<<"please input s:"<<endl;
    cin>>s;
    auto one_day=24*60*60;
    auto one_hour=60*60;
    int day=s/one_day;
    int hour=s%one_day/one_hour;
    int min=s%one_day%one_hour/60;
    int sen=s%one_day%one_hour%60;
    cout<<sen<<" senconds ";
    cout<<" = ";
    cout<<day<<" days ";
    cout<<hour<<" hours ";
    cout<<min<<" minutes ";
    cout<<sen<<" seconds "<<endl;
    return 0;
} 
