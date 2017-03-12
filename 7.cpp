/*************************************************************************
	> File Name: 7.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年03月09日 星期四 10时33分37秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<ctime>
struct traval_time
{
    int hours;
    int mintinues;
};
struct rect
{
    double x;
    double y;
};
struct polar
{
    double distance;
    double angle;
};
traval_time time_sum(const traval_time &,const traval_time &);
void show_time(const traval_time &);
void dis_array(const char *,const char *);
int show_array(const int * ,int );
void subdivide(char [],int,int,int);
char * identifying_code(int);
char * build_str(char,int);
void i_cout(const char *,int);
double sum_array(const int *,int);

using namespace std;
int main()
{
    //int * array=new int[5]{1,2,3,4,5};
    //cout<<"sum:"<<sum_array(array,5)<<endl;
    //show_array(array,5);
    //``delete [] array;
    
    //int age=20;
    //int * pd=&age;
    //const int *pt=pd;
    //const int ** ppa=&pt;

    //const int months[12]{31,28,31,30,31,30,31,31,30,31,30,31};
    //show_array(months,12);

    //int data[3][4]{
    //    {1,2,3,4},
    //    {2,3,4,5},
    //    {3,4,5,6},
    //};
    //int da[3]{1,2,3};
    //cout<<data[1][1]<<endl;
    //cout<<sizeof *data<<endl;
    //cout<<*(*(data+1)+1)<<endl;
    //int *p=&data[0][0];

    //char str[10]{"nihao"};
    //cout<<"str size: "<<sizeof str<<endl;
    //char * c=&str[0];
    //cout<<++c<<endl;//char type until '\0';
    //i_cout(str,10);

    //char * str=build_str('c',5);
    //char *str=identifying_code(4);
    //cout<<str<<endl;
    //delete [] str;

    //traval_time t1{5,45};
    //traval_time t2{4,55};
    //show_time(time_sum(t1,t2));


//    const int Len=66;
//    const int Divs=6;
//
//    char ruler[66];
//    int i;
//    for (i=1;i<Len-2;i++){
//        ruler[i]=' ';
//    }
//    ruler[Len-1]='\0';
//    int max=Len-2;
//    int min=0;
//    ruler[min]=ruler[max]='|';
//    cout<<ruler<<endl;
//    
//    for(i=1;i<=Divs;i++){
//        subdivide(ruler,min,max,i);
//        cout<<ruler<<endl;
//        for (int j=1;j<Len;j++){
//            ruler[j]=' ';
//        }
//    }
    char *str=new char[5];
    strcpy(str,"nihao");
    dis_array(str,&str[5]);
    delete [] str;
    return 0;
}
void dis_array(const char*pl,const char *ph)
{
    if (ph-pl<0)
        return;
    int lenght=(ph-pl)/(sizeof (char));
    for (int i=0;i<lenght;i++)
    {
        cout<<pl[i];
    }
    cout<<endl;
}

void subdivide(char ar[],int low,int high,int level)
{
    if (level==0){
        return;
    }
    int mid=(low+high)/2;
    ar[mid]='|';
    subdivide(ar,low,mid,level-1);
    subdivide(ar,mid,high,level-1);
}
traval_time time_sum(const traval_time & t1,const traval_time &t2)
{
    traval_time tmp{t1.hours+t2.hours,t1.mintinues+t2.mintinues};
    return tmp;
}
void show_time(const traval_time &time)
{
    int hours=time.hours+time.mintinues/60;
    int min=time.mintinues%60;
    cout<<"Struct traval_time :"<<hours<<"h"<<min<<"m"<<endl;

}
//随机验证码
char * identifying_code(int lenght)//rand code buid
{
    srand((int)time(0));
    char *code=new char [lenght+1];
    int ch,count=0;
    
    code[lenght]='\0';
    while (count<lenght){
        ch =rand()%58+65;
        if (ch>90 && ch <97){
            continue; 
        } 
        code[count++]=ch; 
    }
    return code;
}
//返回特定长度字符串
char * build_str(char c,int lenght)
{
    char * str=new char [lenght+1];
    str[lenght]='\0';
    while (lenght--){
        str[lenght]=c;
    }
    return str;
}
void i_cout(const char * str,int lenght)
{
    cout<<str<<endl;
}
double sum_array(const int* array,int lenght)
{
    double sum=0;
    while (lenght--){
        sum+=array[lenght];
    }
    return sum;
}
int show_array(const int * array,int lenght)
{
    int i=0;
    while (i<lenght){
        cout<<array[i];
        i++;
    }
    return 0;
}
