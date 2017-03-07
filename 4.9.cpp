/*************************************************************************
	> File Name: 4.9.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年02月09日 星期四 18时51分25秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<stdlib.h>
#include<vector>
#include<array>
using namespace std;
int main(){
    //struct struct1{
    //    int year;
    //};
    //struct1 array[3];
    //(array+1)->year=65;
    //cout<<array[1].year<<endl;
    //const struct1 *arp[3]={array,(array+1),(array+2)};
    //cout<<arp[1]->year<<endl;
    //const struct1 ** ppa=arp;
    //cout<<(*(ppa+1))->year<<endl;
    //cout<<"the ppa length:"<<sizeof(ppa)<<endl;
    //cout<<ppa[1]<<endl;
    //
    //模板类vector 
    //vector<int> vi;
    //int n;
    //cin>>n;
    //vector<double> vd(n);
    //cout<<vd[1]<<endl;

    //模板类array
    //array<int,3> ai{1,2,3};
    //int b=8;
    //cout<<"&b at:"<<&b<<endl;
    //cout<<ai[1]<<"\n";
    //array<double,3> ad{1.2,1.3,1.4};
    //cout<<ad[0]<<endl;
    //cout<<"size array: "<<sizeof(ai)<<endl;
    //cout<<"ai[0] "<<ai[0]<<" at "<<&ai[0]<<endl;
    //cout<<"ai[4]"<<ai[4]<<" at "<<&ai[4]<<endl;
    //cout<<"ai begin:"<<ai.begin()<<endl;
    //cout<<"ai end: "<<ai.end()<<endl;

    //练习
    //1
    char actor[30];
    short betsie[100];
    float chuck[13];
    long double dipsea[64];
    //2
    array<char,30> aactor;
    array<short,100> a_betise;
    array<float,13> a_chuck;
    array<long double,64> a_dipsea;
    //3
    int j5[5]{1,3,5,7,9};
    //4
    int even=j5[0]+j5[4];
    //5
    cout<<"5.the chuck[5] is: "<<chuck[4]<<endl;
    //6
    char ch_array[]{"cheeseburger"};
    //7
    string *str=new string {"WaldorfSalad"};
    delete str;
    //8
    struct finsh{
        int heavy;
        float length;
        string variety; 
    };
    //9
    finsh *f1=new finsh{100,60,"mm"};
    delete f1;
    //10
    enum Response{Yes=1,No=0,Maybe=2};
    //11
    double ted=1;
    double *p_ted=&ted;
    cout<<*p_ted<<endl;
    //12
    float (*p_treacle)=new float [10]{};
    cout<<"the array[0] is:"<<p_treacle[0]<<endl;
    cout<<"the array[10] is:"<<p_treacle[9]<<endl;
    delete [] p_treacle;
    //13
    //int n;
    //cout<<"enter a num (must >0):";
    //cin>>n;
    //int *P_i=new int[n];
    //delete []P_i;
    //vector<int> vi(n);
    //14
    cout<<(int *)"home of "<<endl;
    //15
    finsh *f2=new finsh;
    cout<<f2->heavy<<endl;
    delete f2;
    //17
    const vector<string> v_str_array(10);
    const array<string,10> a_str_array;
    //13.1

    return 0;
}
