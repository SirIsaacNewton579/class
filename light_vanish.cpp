#include<iostream> //第4章 2-(2)题
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        if(i%2 != 0 && i%3 != 0 && i%5 != 0) cout << i << "\t";    
    }
    return 0;
}