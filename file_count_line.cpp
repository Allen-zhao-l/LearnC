/*************************************************************************
	> File Name: file_count_line.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年03月08日 星期三 10时58分15秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<fstream>
using namespace std;
#define MAX 100
int main()
{
    char inPath [MAX],outPath [MAX];
    ifstream inFile;
    ofstream outFile;
    int count=0;
    
    do {
        cout<<"Input file Path:";
        cin.getline(inPath,MAX);
        cout<<"Output file Path:";
        cin.getline(outPath,MAX);
        if (!strcmp(inPath,outPath)){
            cout<<"The Path has repeat!"<<endl;
            continue;
        }
        inFile.open(inPath);
        outFile.open(outPath);
    }while (!inFile.is_open() && !outFile.is_open());
    cout<<"file open success!"<<endl;
    
    char *line=new char[1000];
    while (inFile.getline(line,1000)){
        ++count;
        outFile<<count<<'\t'<<line<<endl;
    }
    cout<<"OK"<<endl;
    delete [] line;
    inFile.close();
    outFile.close();    
    cout<<"files closed!"<<endl;
    cout<<"Count line: "<<count<<endl;
}

