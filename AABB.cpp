#include<iostream> //第2-3章 三-6题
using namespace std;
bool isSqNum(int);
int main(){
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(isSqNum(1100*i+11*j))
                cout << 1100*i+11*j << endl;
        }
    }
    return 0;
}

//判断是否为完全平方数
bool isSqNum(int a){
    int s=0,i=1;
    if(a==0) return true;
    while(s<a){
        s += 2*(i++)-1;
        if(s==a) return true;
    }
    return false;
}