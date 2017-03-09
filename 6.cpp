/*************************************************************************
	> File Name: 6.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年03月08日 星期三 12时38分33秒
 ************************************************************************/

#include<iostream>
#include<cctype>
#include<fstream>
#include<cstring>
using namespace std;
int main()
{
    //char ch;
    //int ct1,ct2{0};
    //
    //while ((ch=cin.get())!='$'){
    //    cout<<ch;
    //    ct1++;
    //    if (ch='$'){
    //        ct2++;
    //    }
    //    cout<<ch;
    //}
    //cout<<"ct1="<<ct1<<",ct2="<<ct2<<"\n";

    //string str1="Hello Word";
    //int len=str1.length();
    //char *str2=new char[len+1];
    //str1.copy(str2,len,0);
    //cout<<"length: "<<len<<endl;
    //cout<<"Str2 "<<str2<<endl;
    //string *str3=new string;
    //*str3=str2;
    //cout<<"str3:"<<*str3;
    //delete str3;
    //delete [] str2;

    //ofstream file_out;
    //file_out.open("out.md");
    //if (file_out.is_open()){
    //    cout<<"open file success."<<endl;
    //}else{
    //    cout<<"open fail!"<<endl;
    //    exit(EXIT_FAILURE);
    //}

    //6.10
    //4
    //int weight=3;
    //cout<<weight<<","<<!!weight<<endl;

    //6
    //int x;
    //cin>>x;
    //x=x>=0?x:-x;
    //cout<<x;

    //7
    //switch(ch){
    //    case 'A':a_grade++;
    //        break;
    //    case 'B':b_grade++;
    //        break;
    //    case 'C':c_grade++;
    //        break;
    //    case 'D':d_grade++;
    //        break;
    //    default:
    //        f_grade++;
    //}

    //9
    //int line=0;
    //char ch;
    //while ((ch=cin.get())!='Q'){
    //    if (ch=='\n')
    //        line++;
    //}
    //cout<<line<<endl;

    //6.11
    //char ch;
    //while ((ch=cin.get())!='@'){
    //    if (isdigit(ch))
    //        continue; 
    //    //else if (islower(ch)){
    //    //    cout<<(char)toupper(ch);
    //    //}else if (isupper(ch)){
    //    //    cout<<(char)tolower(ch);
    //    //}else{
    //    //    cout<<ch;
    //    //}
    //    else if(isalpha(ch)){
    //        cout<<(char)(islower(ch)?toupper(ch):ch);
    //    }
    //}

    //2
    //int sum=0,count=0,donation=0;
    //int i=0;
    //double d_array[10]{0};
    //while (isdigit(d_array[i]) && i<10){
    //    cin>>d_array[i];
    //    sum+=d_array[i];
    //    i++;
    //}
    //cout<<"sum:"<<sum;

    //test
    char  one ,two;
    cout <<"enter the two number(q to quit):";
    while (cin >>one>>two ){
        cout<<"one :"<<one<<'\n';
        cout<<"two :"<<two<<'\n';
    }
    cout<<"Done!";
    return 0;
}
