/*************************************************************************
	> File Name: car.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年02月19日 星期日 15时41分35秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<ctime>
#define random(x)(rand()%x)
using namespace std;

bool one(bool);
bool one(bool change){
    int is_car=random(3);
    int k;
    vector<int> p_door(3);
    p_door[is_car]=1;
    //cout<<is_car<<"|"<<chose<<endl;
    if (change){
        for (k=0;k<3;k++){
                if (p_door[k]=0){
                    p_door.erase(k);
                    break;
                }
            }
        }    
        int chose=random(2);
            return true;
        }else{
            return false;
        }
    }else{
        if (chose==is_car){
            return true;
        }else{
            return false;
        }
    }
    cout<<p_door.size()<<endl;
    delete [] p_door;
    return false;
}
int main(){
    int num=1000;
    int win=0;
    srand(int(time(0)));
    while(num--){
        if (one(true)){
            win++;
        }
    }
    cout<<win<<endl;
}
