#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>ans(int n){
     vector<vector<int>> matrix(n, vector<int>(n,0));
int top=0,bottom=n-1,left=0,right=n-1;
int count=1;
while(top<=bottom && left <=right){

    for(int i=left;i<=right;i++)
    {matrix[top][i]=count++;}
    top++;

    for(int i=top;i<=bottom;i++){matrix[i][right]=count++;}
    right--;

    if(top<=bottom)
    {
        for(int i=right;i>=left;i--){matrix[bottom][i]=count++;}
        bottom--;
    }
    if(left<=right){
        for(int i=bottom;i>=top;i--){matrix[i][left]=count++;}
        left++;
    }
}
return matrix;
}
int main(){
int n;
cin>>n;
vector<vector<int>>matrix=ans(n);



for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<matrix[i][j]<<" ";
    }
    cout<<endl;
}
}
