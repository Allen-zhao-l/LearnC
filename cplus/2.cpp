/*************************************************************************
> File Name: 2.cpp
> Author:allen 
> Mail: 
************************************************************************/
#include <iostream>
int main() {
    using namespace std;
    char ch=65,*p_ch=&ch;
    int *P=(int *)&ch;
    cout<<*p_ch<<","<<*P<<endl;
    return 0;
    } 
