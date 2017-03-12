/*************************************************************************
	> File Name: 7.10.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年03月10日 星期五 15时42分35秒
 ************************************************************************/

#include<iostream>
double pow(int );
double once(const double x);
double twice(const double x);
double threeth(const double x);
double calcul(double (*)(int),int);
using namespace std;
class People
{
    public:
    int operator >> (int a)
    {
        cout<<a<<endl;
    };
    void operator () (void)
    {
        cout<<"I'm People"<<endl;
    };
};
class Student:public People
{
    public:
    void operator ()(void)
    {
        cout<<"I'm Student"<<endl;
    };
    private:
    char name[10];
};
int main()
{
    double (* sum[3])(const double)={once,twice,threeth};
    for (double (*pf)(const double):sum){
        cout<<pf(5)<<endl;
    }
    People p1;
    p1();
    p1>>9;
    cout<<"sizeof People:"<<sizeof p1<<endl;
    Student s1;
    s1();
    s1>>8;
    cout<<"sizeof Student:"<<sizeof s1<<endl;
    return 0;
}
double pow(int x)
{
    return x*x;
}
double calcul(double (*pf)(int),int x)
{
    //double tmp=(*pf)(x);
    double tmp=pf(x);
    return tmp;
}
double once(const double x)
{
    return x;
}
double twice(const double x)
{
    return x*x;
}
double threeth(const double x)
{
    return x*x*x;
}
