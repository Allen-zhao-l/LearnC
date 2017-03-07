#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char src[]="?eiJing";
	for (char a='Z';strcmp(src,"BeiJing");--a){
		cout<<"src is "<<src<<'\t'<<"Error!"<<endl;
		src[0]=a;
	}
	cout<<"bingo: "<<src<<endl;
	return 0;
}
