/*************************************************************************
	> File Name: 7.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年03月09日 星期四 10时33分37秒
 ************************************************************************/

#include<iostream>
#include<ctime>
int show_array(const int * ,int );
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
    char *str=identifying_code(4);
    cout<<str<<endl;
    delete [] str;
    return 0;
}
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
