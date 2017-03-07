/*************************************************************************
> Try to fast_sort 
> version 1.0
> File Name: fast_sort.cpp
> Author:zl 
> Mail: 982358010@qq.com
> Created Time: 2017年01月05日 星期四 01时05分34秒
************************************************************************/

#include<iostream>
#include<time.h>
#include<stdlib.h>
//#define n 5
#define random(x)(rand()%x)
using namespace std;
void out_put(int *,int);
void quick_sort(int [],int,int);
void quick_sort2(int *,int,int);
int main()
{
    int *array=new int[10]{1,3,5,7,9,2,4,6,8,10};
    int n=10;
    quick_sort2(array,0,9);
    array=(int *)array;
    cout<<array<<","<<(array)<<endl;
    //int *p=array;
    //while (n--){
    //    cout<<*array++<<endl;
    //}
    //out_put(array,10);
    delete [] array;
}
int AdjustArray(int s [],int l,int r)
{
    int i=l,j=r;
    int x=s[l];
    while(i<j)
    {
        while(i<j && s[j]>=x)
            j--;
        if(i<j)
        {
            s[i]=s[j];
            i++;
        }
        while(i<j && s[i]<x)
            i++;
        if(i<j)
        {
            s[j]=s[i];
            j--;
        }
    }
    s[i]=x;
    return i;
}
void out_put(int *array,int length)
{
    //传值弱类型
    while (length--){
        cout<<*array++<<endl;
    }
}
void quick_sort(int s[],int l,int r)
{
    if(l<r)
    {
        int i=AdjustArray(s,l,r);
        quick_sort(s,l,i-1);
        quick_sort(s,i+1,r);
    }
}
void quick_sort2(int *s,int left,int right)
{
    if (left>=right){
        return;
    }//指向值相等就返回
    int i=left;//i指向数组左
    int j=right;//j指向数组右
    int key=s[i];//左边的数作为基数

    while (i<j){
        while (i<j && key<=s[j]){
            j--;
        }
        s[i]=s[j];
        while (i<j && s[i]<=key){
            i++;
        }
        s[j]=s[i];
    }
    s[i]=key;
    quick_sort2(s,left,i-1);
    quick_sort2(s,i+1,right);
}
