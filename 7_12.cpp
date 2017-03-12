/*************************************************************************
	> File Name: 7_12.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年03月11日 星期六 18时31分41秒
 ************************************************************************/

#include<iostream>
using namespace std;
int set_array(int *,int length,char );
void dis_array(int *,int);
int set_array_bypoint(int *,int *,int);
double get_array_max(const double *,int);
int replace(char *,char ,char );
int main()
{
    //3
    //int s[5]{1,2,3,4,5};
    //dis_array(&s[0],5); 
    //set_array(s,5,2);
    //dis_array(s,5);

    //4
    //int *p_iarray=new int [5]{1,2,3,4,5};
    //set_array_bypoint(&p_iarray[0],&p_iarray[4],3);
    //dis_array(p_iarray,5);//传值弱类型
    //delete [] p_iarray;

    //5
    //double *p_darray=new double [5]{1.3,2.4,4,5.6,7};
    //int max=get_array_max(p_darray,5);
    //cout<<"max :"<<max<<endl;
    //delete [] p_darray;

    //8
    //char str[5]{"nini"};
    //int n=replace(str,'n','c');


    return 0;
}
//8
int replace(char * str,char c1,char c2)
{
    int i=0;
    while (*str!='\0'){
        if (*str==c1){
            *str=c2;
            i++;
        }
        str++;
    } 
    return i;
}
//5
double get_array_max(const double * d_array,int length){
    double max=0;
    while (--length){
        if (d_array[length]>max){
            max=d_array[length];
        } 
    }
    return max;
}
//3
int set_array(int * array ,int length,char ch)
{
    while(length--){
        array[length]=ch;
    }
    return 0;
}
//4
int set_array_bypoint(int *pl,int *ph,int i)
{
    while (pl<=ph){
        *pl=i;
        pl++;
    }
}
void dis_array(int *ch,int length)
{
    for (int i=0;i<length;i++)
    {
        cout<<ch[i]<<",";

    }
    cout<<endl;
}
