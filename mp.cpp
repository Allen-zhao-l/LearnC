/*************************************************************************
	> File Name: mp.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年01月25日 星期三 21时33分33秒
 ************************************************************************/
 
#include<iostream>
using namespace std;
int main(){
    int i,j,k,n,tmp;
    cout<<"Enter number for array length."<<endl;
    cin>>n;
    int a[n]{};
    cout<<"NUM("<<n<<")"<<endl;
    for (k=0;k<n;k++){
        cin>>a[k];
    }
    for (i=0;i<n-1;i++){
        for (j=0;j<n-i;j++){
            if (a[j]<a[j+1]){
                tmp=a[j];
                a[j]=a[j+1];
                a[j+1]=tmp;
            }
        }
    }
    for (k=0;k<n;k++){
        cout<<a[k]<<",";
    }
    cout<<endl;
}
