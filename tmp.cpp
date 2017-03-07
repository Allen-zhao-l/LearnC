#include<iostream>
#include<assert.h>
#include<stdlib.h>
//#include<cunistd>
#include<cstring>
char * getname(void);
//#define 
int main(){
    using namespace std;
    /* get控制换行符 读取一行*/
    //const int arsize=10;
    //char name[arsize];
    //char dessert[arsize];

    //cout<<"Enter your name."<<endl;
    //cin.get(name,arsize).get();
    //cout<<"Enter your favorite dessert:"<<endl;
    //cin.clear();
    //cin.get();
    //cin.get(dessert,arsize).get();
    //cout<<"Hello,"<<name<<" I know you favorite dessert is:"<<dessert<<endl;

    /*混合输入数字和字符串*/
    //cout<<"what year was your house builr??"<<endl;
    //int year;
    //(cin>>year).get();
    //cout<<"what is its street address??"<<endl;
    //char address[80];
    //cin.getline(address,80);
    //cout<<"your built:"<<year<<endl;
    //cout<<"Address:"<<address<<endl;
    //cout<<"Done!"<<endl;

    /*string 类型*/
    // string str1,str2;
    // char str3[10]="o",str4[10]="d";
    // str1="word";
    // //strcpy(str3,str4);//讲一个字符串常量添加到另一个字符串后边
    // strcat(str3,"n");//将字符复制到字符串中
    // cout<<str3<<endl;
    // strcpy(str3,str4);
    // cout<<str3<<endl;
    // cout<<str4<<endl;
    // cout<<str1.size()<<endl;
    // getline(cin,str1);
    // cin>>str1;
    // cout<<"str1 is:"<<str1<<endl;
    
    /*other c11特性*/
    //wchar_t title[]=L"Chief Astrogator";
    //char16_t name[50]=u"CCCCC";
    //char32_t car[50];
    //string str=u8"你好";
    //string str1=R"+(Jim's Father is "()"\Dad and //dad)+";//raw原始字符串.
    //cout<<str1<<endl;
    //cout<<str<<endl;
    //cout<<title<<endl;
    //cout<<sizeof(wchar_t)<<endl;
    
    /*结构体由于存储变量时地址对齐的要求，编译器在编译程序时会遵循两条原则：
    * 一、结构体变量中成员的偏移量必须是成员大小的整数倍（0被认为是任何数的整数倍）
    * 二、结构体大小必须是所有成员大小的整数倍。*/
    //struct People{
    //    int age;//偏移量 0
    //    float high; //偏移量 4
    //    bool sex; //偏移量 8       
    //    char name[20];//偏移量 12
    //    string meg;//偏移量 32
    //};//大小64
    ////People p2 {"nihao","hello",18,180.0,true};
    ////cin.getline(p2.name,20);
    ////strcpy(p2.name,"allen");//put ‘allen’ to p2,name.
    ////p2.meg=R"+(hahahahaha)+";//raw 原始字符串.
    ////cout<<p2.name<<endl;
    ////cout<<"p2.sex:"<<(char)p2.sex<<endl;
    ////cout<<p2.meg<<endl;
    ////cout<<strlen(p2.name)<<endl;
    ////p1=p2;
    ////cout<<p1.name<<p1.sex<<endl;
    //People P[10];
    //cout<<sizeof(P[1])<<endl;
    //cout<<"char:"<<sizeof(char)<<"\n"<<"string:"<<sizeof(string)<<"\n"<<"int:"<<sizeof(int)<<"\n"<<"float"<<sizeof(float)<<"\n"<<"bool:"<<sizeof(bool)<<endl;

    /*公用体*/
    //union one4all{
    //    int val_int;
    //    long long_val;
    //    double double_val;
    //};
    //one4all union1{60};
    //union1.long_val=23.5;
    //cout<<"size:"<<sizeof(union1)<<endl;
    //cout<<union1.val_int<<endl;
    //cout<<union1.long_val<<endl;
    //cout<<union1.double_val<<endl;
    //return 0;
    //共用体匿名 节省内存 长度为其最大值(保存两种类型的值，同时只能使用一种)
    //strcpy(w2.name,"w2");struct widget{
    //    char name[20];
    //    union {
    //        int id_int;
    //        char id_char[20];
    //    };mZ
    //widget w1,w2;
    //strcpy(w2.name,"w2");
    //strcpy(w2.id_char,"id_char");
    //cout<<"The w2 size is:"<<sizeof(w2)<<endl;
    //strcpy(w1.name,"w1");
    //w1.id_int=34;mZ    //cout<<"The w1 size is:"<<sizeof(w1)<<endl;
    /*枚举*/
    //enum color {red,orange,yellow=100,green,blue,violet,indjgo};//== enum mZ{red=0,orange=1,yellow=2r,green=2(多个枚举量值相同)...}显示定义枚举量的值,
    //int c1=blue;
    //cout<<c1<<endl;
    //color band;
    //band=indjgo;
    //cout<<band<<endl;
    //cout<<sizeof(band)<<endl;
    //band=color(yellow+green);//把整形强制转化为枚举类型 +算数表达式中 枚举符号常量被转化为int类型的值。
    //cout<<band<<endl;
    //band=color(345);
    //cout<<band<<endl;
    

    /*指针*/
    // int *p,a;
    // char *p_char;
    // string *p_string,str="你好d";
    // p_string=&str;
    // p=&a;
    // cout<<a<<endl;
    // *p=3;
    // cout<<a<<endl;
    // cout<<*p_string<<endl;
    // cout<<sizeof(p)<<endl;
    // cout<<sizeof(p_char)<<endl;
    // cout<<sizeof(p_string)<<endl;
    // cout<<p_string<<endl;
    // *p=66;
    // p_char=(char *)p;//强制转化位char类型的指针
    // cout<<*p_char<<endl;
    // cout<<str<<endl;
    // cout<<(*p_string).size()<<endl;
    // cout<<sizeof str.c_str()<<endl;


    //int *p3 =new int [3];
    //p3[0]=1;
    //p3[1]=2;
    //p3[2]=3;
    //cout<<"p3[1] is "<<p3[1]<<"\n";
    //p3++;
    //cout<<"p3[0] is "<<p3[0]<<"\n";
    //cout<<"p3[1] is "<<p3[1]<<"\n";
    //p3--;//指针加减 指向上个元素的地址;
    //cout<<"p3[0] is "<<p3[0]<<endl;
    //// int a=0;
    //// for(a=0;a<3;a++)
    //// {
    ////     cout<<*p3<<"\n";
    ////     //p3++; 
    //// }
    //delete []p3;
    //return 0;

    //double wages[3]={1000.0,2000.0,3000.0};
    //short stacks[3]={3,2,1};

    //double *pw=wages;
    //short *ps=&stacks[0];
    //cout<<"pw="<<pw<<",*pw="<<*pw<<endl;
    //pw++;//add 1 to pw pointer.
    //cout<<"add 1 to pw pointer.\n";
    //cout<<"pw="<<pw<<",*pw="<<*pw<<endl;
    //cout<<"ps="<<ps<<",*ps="<<*ps<<endl;
    //ps++;//add 1 to ps pointer.
    //cout<<"add 1 to ps pointer.\n";
    //cout<<"ps="<<ps<<",*ps="<<*ps<<endl<<endl;
    //cout<<"access two elements with array notation\n";
    //cout<<"stacks[0]="<<stacks[0]
    //    <<",stacks[1]="<<stacks[1]<<endl;
    //cout<<"access two elements with pointer notation.\n";
    //cout<<"*stacks="<<*stacks
    //    <<",*(stacks+1)="<<*(stacks+1)<<endl;

    //cout<<sizeof(wages)<<"=size of wages array\n";
    //cout<<sizeof(pw)<<"=size of pw pointer";

    //int *pw=new int [5];
    //int i,k;mZ));
    //for (k=0;k<5;k++){mZmZ    //    cout<mZw:"<<*pw<<endl;
    //for (k=0;k<5;k++){
    //    cout<<pw[k]<<endl;
    //}
    //delete [] pw;

    //int array[10]{1,2,3,4,5,6,7,8,9,10};
    ////cout<<array<<endl;
    ////cout<<&array<<endl; 
    //int (*pas)[10]=&array;//数组指针
    //int *pas_1[10];//指针数组
    ////pas_1[2]==*(pas_1+2)
    //cout<<pas_1[0]<<endl;
    ////cout<<*(pas_1[1])<<endl;  
    //cout<<sizeof(pas_1)<<endl;
    //int *pt=array;
    //int *pe=&array[9];
    //cout<<"pt is :"<<pt<<endl;
    //cout<<"pe is :"<<pe<<endl;
    //cout<<pe-pt<<endl;
    //pt=new int[15];
    //cout<<pt<<endl;
    //cout<<(pt+4)<<endl;
    //delete []pt;
    //char (*ch)=new char[10];

    //using namespace std;
    //char animal[20]="bear";
    //const char * bird="wrem";
    //char *ps;

    //cout<<animal<<" and ";
    //cout<<bird<<"\n";
    ////cout<<ps<<endl;
    //cout<<"Enter a kind of animal:";
    //cin>>animal;
    //ps=animal;
    //cout<<"ps is:"<<ps<<endl;
    //cout<<"sizeof(ps) is :"<<sizeof(ps)<<endl;
    //cout<<animal<<" at "<<(int *)animal<<endl;
    //cout<<ps<<" at "<<(int*)ps<<endl;
    //
    //ps=new char[strlen(animal)+1];
    //strncpy(ps,animal,strlen(animal)+1);//
    //ps[strlen(animal)+1]='\0';
    //cout <<"after using strcpy.\n";
    //cout<<animal<<" at "<<(int *)animal<<endl;
    //cout<<ps<<" at "<<(int *)ps<<endl;
    //delete []ps;


    //struct People{
    //    int age;//偏移量 0
    //    float high; //偏移量 4
    //    bool sex; //偏移量 8       
    //    char name[20];//偏移量 12
    //    string meg;//偏移量 32
    //};//大小64
    //People *p1=new People{1,1,1};
    //cout<<(*p1).age<<endl;
    //cout<<"the p1:"<<p1<<"\n"<<"the p1 size is:"<<sizeof(*p1)<<endl;
     
   // char *name;
   // name=getname();
   // cout<<name<<" at "<<(int *)name<<"\n";
   // delete []name;

   // name=getname();
   // cout<<name<<" at "<<(int *)name<<"\n";
   // delete []name;
    char *name;
    name=getname();
    delete name;
    return 0;
            
}
char * getname(){
        using namespace std;
        char temp[20];
        cout<<"enter you name :";
        cin>>temp;
        char *pn=new char[strlen(temp)+1];
        strcpy(pn,temp);
        return  pn;
} 
     
    
    
    
