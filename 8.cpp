/*************************************************************************
	> File Name: 8.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年03月12日 星期日 14时13分19秒
 ************************************************************************/

#include<iostream>
using namespace std;
inline double al(double);
int swap(int &,int &);
double cube(const double & );
int main()
{
    //int a=3,b=5;
    //swap(a,b);
    //cout<<"a:"<<a<<'\n';
    //cout<<"b:"<<b<<endl;



}
//const 引用mZdouble cube(const double &a)
{
    return a *=a*a;
}
//内联函数
double al(double d)
:{
    if (d<=0){
        return d;
    }else{
        return d+al(d-1);
    }
}
//引用
int swap(int &a,int &b)
{
    int tmp=a;
    a=b;
    b=tmp;
    return 0;
}
