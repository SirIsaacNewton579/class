#include<iostream> //第4章 2-(3)题
using namespace std;
inline int min(int a,int b){
    return (a>b?b:a);
}
int main(){
    int n;
    cin >> n;
    for(int i=1;i<=2*n-1;i++){
        for(int j=1;j<=2*n-1;j++){
            cout << min(min(min(i,j),2*n-i),2*n-j);
        }
        cout << endl;
    }
    return 0;
}