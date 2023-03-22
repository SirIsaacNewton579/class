#include<iostream> //第2-3章 三-5题
using namespace std;
int main(){
    int n=0;
    for(int i=1;i<5;i++){
        for(int j=0;j<=5-i;j++){
            for(int k=0;k<=5-i-j;k++){
                cout <<i<<j<<k<<5-i-j-k<<endl;
                n++;
            }
        }
    }
    return 0;
}