#include<iostream>
using namespace std;

static int t[100][100];

int LCS_res(string x,string y,int m,int n){
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(i==0 || j==0){
                t[i][j] = 0;
            }
        }
    }
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(x[i-1]==y[j-1] && i!=j){
                t[i][j] = 1+t[i-1][j-1];
            }
            else{
                t[i][j] = max(t[i-1][j],t[i][j-1]);
            }
        }
    }
    return t[m][n];
}
int main(){
    string x,y;
    cin>>x;
    y = x;
    int m = x.length();
    int n = y.length();
    cout<<LCS_res(x,y,m,n)<<endl;
    return 0;
}