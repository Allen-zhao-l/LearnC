/*************************************************************************
	> File Name: /tmp/test_time.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年03月07日 星期二 10时12分21秒
 ************************************************************************/

#include<iostream>
#include<ctime>
void delay(const float &);
using namespace std;
int main()
{
    using namespace std;
    int sec;
    cout<<"enter delay time:";
    cin>>sec;
    delay(sec);
    return 0;
}
void delay(const float &time)
{
    clock_t start=clock();
    clock_t delay_time=time * CLOCKS_PER_SEC;
    while (clock()-start<delay_time)
        ;
}


