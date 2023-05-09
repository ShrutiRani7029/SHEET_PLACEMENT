class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        //code here
        int count=0;
       map<int,int>mp;
       for(int i=0;i<n;i++){
           mp[a[i]]++;
       }
       for(int i=0;i<m;i++)
       {
           mp[b[i]]++;
       }
       for(auto it:mp){
           if(it.first<0 || it.first>=0)count++;
       }
       return count;
    }
};
