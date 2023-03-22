#include<iostream> //第2-3章 三-7题
using namespace std;
void NSplit(int,int,int*,int [],int);
int main(){
    int b = 0;
    const int n = 100;
    int seq[n+1];
    seq[0] = n;
    NSplit(n,n,&b,seq,1);
    cout << b ;
    return 0;
}
void NSplit(int n,int i,int *b,int seq[],int idx){
    if(n>0){
        if(i>=5) {seq[idx] = 5; NSplit(n-5,5,b,seq,idx+1);}
        if(i>=2) {seq[idx] = 2; NSplit(n-2,2,b,seq,idx+1);}
        seq[idx] = 1; NSplit(n-1,1,b,seq,idx+1);
    }
    else if(n==0){
        (*b) ++;
        cout << seq[0] << "=";
        for(int j=1;j<idx-1;j++){
            cout << seq[j] << "+";
        }
        cout << seq[idx-1] << endl;
    }
}