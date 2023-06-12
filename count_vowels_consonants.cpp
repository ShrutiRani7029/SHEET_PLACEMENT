#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="atyiopwertyiong";
    int n=s.size();
    int count1=0,count2=0;
    
    for(int i=0;i<n;i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i] =='o' || s[i]=='u'){
            count1++;}
        else count2++;
    }
    cout<<" no of vowels : "<<count1<<endl;
    cout<<" no of consonants : "<<count2<<endl;
    
    
}
