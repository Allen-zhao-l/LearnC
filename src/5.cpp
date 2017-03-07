/*************************************************************************
 > File Name: 5.cpp
 > Author:allen
 > Mail: 982358010@qq.com
 > Created Time: 2017年02月13日 星期一 21时49分38秒
 ************************************************************************/

#include<iostream>
#include<assert.h>//断言
#include<cstring>
#define DOUBLE(x) x+x;
int find_sec_max(int *, int);
int func(int);
int &add1(int &);
char *i_strcpy(char *, const char *);
void out(int *, int, char base = '\n');
int * even_odd(int *, int);

int main() {
	using namespace std;
	//int x;
	//cout<<"the express x=100 has the value";
	//cout<<(x=100)<<endl;
	//cout<<"Now x="<<x<<endl;
	//cout<<"the express x<3 has the value";
	//cout<<(x<3)<<endl;
	//cout.setf(ios_base::boolalpha);
	//cout<<"the express x<3 has the value";
	//cout<<(x<3)<<endl;
	//cout<<"the express x>3 has the value";
	//cout<<(x>3)<<endl;

	//const int ArSize=16;
	//long long factorials[ArSize];
	//factorials[1]=factorials[0]=1LL;
	//for (int i=1;i<ArSize;i++){
	//    factorials[i]=i*factorials[i-1];
	//}
	//for (int i=0;i<ArSize;i++){
	//    cout<<i<<"!="<<factorials[i]<<endl;
	//}

	//string *str=new string;
	//getline(cin,*str);

	//for (int i=str->size();i>=0;i--){
	//    cout<<(*str)[i];
	//}
	//cout<<"\nBye!";
	//delete str;

	//int guests=0;
	//while (guests++<10){
	//    cout<<guests<<endl;
	//}

	//class Point
	//{
	//    public:
	//        void setPoint(int x,int y)
	//        {
	//            xPos=x;
	//            yPos=y;
	//         }
	//        void printPoint()
	//        {
	//            cout<<"x="<<xPos<<endl;
	//            cout<<"y="<<yPos<<endl;
	//        }
	//    private:
	//        int xPos;
	//        int yPos;
	//};

	//Point p1;
	//p1.setPoint(10,20);
	//p1.printPoint();

	//int i=0,j=0;
	//cout<<i++<<"|"<<++j<<endl;
	//cout<<func(100);
	//int x=0;
	//union p{
	//    int p_int;
	//    char  p_char[5];
	//}a;
	////a.p_char[0]=65;
	//a.p_int=65;
	////a.p_char[1]=66;
	//cout<<a.p_int<<endl;
	//cout<<a.p_char<<endl;
	//cout<<sizeof(a)<<endl;
	////cout<<add1(++x)<<endl;

	//char string[10];
	//char * p_char_array=new char[10];
	//strcpy(p_char_array,"nihao");
	//cout<<p_char_array[6]<<endl;
	//delete [] p_char_array;
	//cout<<sizeof(*p_char_array);
	//int i=0;
	//i=5*DOUBLE(5);
	//cout<<i<<endl;
	//strcpy(string,str1);

	//char *p="and";
	//cout<<p[0]<<endl;
	//cout<<__FILE__;

	//int array[]{0,2,4,6,8,10};
	//int sec_max;
	//sec_max=find_sec_max(array,sizeof(array)/sizeof(int));
	//cout<<sec_max<<endl;
	//assert(sec_max!=0);

	//char string[10],str1[10];
	//for (int i=0;i<10;i++){
	//    str1[i]='a';
	//}
	//cout<<str1<<endl;
	//cout<<strlen(str1)<<endl;
	//i_strcpy(string,str1);
	//cout<<string<<endl;
	//cout<<(int)string[10]<<endl;

	//int *a=new int[10]{22,33,44,53,73,1,78};
	//int *b=even_odd(a,7);
	//out(b,7);
	//delete []a;

//    struct Point{
//        int x;
//        int y;
//    };
//    Point *p1=new Point[10];
//    p1->x=1;
//    cout<<p1[1].x<<endl;
//    cout<<p1->x<<endl;

	int *array = new int[10] { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	even_odd(array, 10);
	cout << "find sec max number: " << find_sec_max(array, 10) << endl;
	out(array, 10, ',');
	delete[] array;
	return 0;
}
int func(int x) {
	using namespace std;
	int countx = 0;
	while (x) {
		countx++;
		x = x & (x - 1);
	}
	return countx;
}
int &add1(int &x) {
	return ++x;
}
const int MINNUMBER = -32767;
int find_sec_max(int *data, int count) {
	int maxnumber = data[0];
	int sec_max = MINNUMBER;
	for (int i = 1; i < count; i++) {
		if (data[i] > maxnumber) {
			sec_max = maxnumber;
			maxnumber = data[i];
		} else {
			if (data[i] > sec_max) {
				sec_max = data[i];
			}
		}
	}
	return sec_max;
}
void out(int *array, int count, char base) {
	using namespace std;
	while (count--) {
		cout << *array++ << base;
	}
}
char * i_strcpy(char *strDest, const char *strSrc) {
	assert((strDest!=NULL)&&(strSrc!=NULL));
	char *address = strDest;
	while ((*strDest++ = *strSrc++) != '\0')
		;
	return address;
}
int * even_odd(int *a, int n) {
	int i = 0, tmp;
	while (n--) {
		if ((a[i]) % 2 == 0) {
			tmp = a[i];
			for (int j = i; j >= 0; j--) {
				a[j] = a[j - 1];
			}
			a[0] = tmp;
		}
		i++;
	}
	return a;
}
