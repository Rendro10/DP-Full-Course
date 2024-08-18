#include<bits/stdc++.h>
using namespace std;

int MIN_LCS(string x,string y,int m,int n){
    if(m==0||n==0){
        return 0;
    }
    if(x[m-1]==y[n-1]){
        return 1+MIN_LCS(x,y,m-1,n-1);
    }
    return max(MIN_LCS(x,y,m-1,n),MIN_LCS(x,y,m,n-1));
}

int main(){
    string x,y;
    cin>>x>>y;
    int m =x.length();
    int n = y.length();
    cout<<"min no of deletion->"<<(m-MIN_LCS(x,y,m,n))<<endl;
    cout<<"min no of insertion->"<<(n-MIN_LCS(x,y,m,n));
    return 0;
}