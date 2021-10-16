#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,left=0,right=0;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }

    }
    int q=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
        {

            left=left+a[i][q];
            break;

        }
        q++;
    }
    int l=n-1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
        {

            right=right+a[i][l];
            break;

        }
        l--;
    }
    cout<<abs(left-right);

}
