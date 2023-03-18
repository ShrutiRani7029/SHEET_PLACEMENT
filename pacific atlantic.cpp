class Solution {
public:
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& mat) {
            int N=mat.size();
    int M=mat[0].size();
    
     
    vector<vector<int>> visa(N,vector<int>(M,0)); //visited matrix for atlantic ocean
    vector<vector<int>> visi(N,vector<int>(M,0)); //visited matrix for pacific ocean
        
     
    queue<pair<int,int>> mqa;   //queue for storing the edge cells that  directly touch the atlantic ocean
     
    for(int i=0;i<N;i++){
        mqa.push({i,M-1});      //pushing the edge cells into queue and marking them as visited
        visa[i][M-1]=1;
    }
    for(int i=0;i<M;i++){
        mqa.push({N-1,i});
        visa[N-1][i]=1;
    }
     
     while(!mqa.empty()){
         
         int r=mqa.front().first;
         int c=mqa.front().second;
         mqa.pop();
         
         for(int delr=-1;delr<=1;delr++){         // A way to traverrse in four directions ,it's my way you can 
             for(int delc=-1;delc<=1;delc++){     //  do as you like
                 if(delr==0||delc==0){
                     int nr=r+delr;
                     int nc=c+delc;
                     if(nr>=0&&nr<N&&nc>=0&&nc<M){
                         if(!visa[nr][nc]&&mat[nr][nc]>=mat[r][c]){
                            
                             visa[nr][nc]=1;
                             mqa.push({nr,nc});
                         }
                     }
                 }
             }
         }
     }

    for(int i=0;i<N;i++){                         // Same thing for pacific ocean  
         mqa.push({i,0});                         // Can take the same queue as it is empty now
         visi[i][0]=1;
     }
     for(int i=0;i<M;i++){
         mqa.push({0,i});
         visi[0][i]=1;
     }
    while(!mqa.empty()){
         
         int r=mqa.front().first;
         int c=mqa.front().second;
         mqa.pop();

         for(int delr=-1;delr<=1;delr++){
             for(int delc=-1;delc<=1;delc++){
                 if(delr==0||delc==0){
                     int nr=r+delr;
                     int nc=c+delc;
                     if(nr>=0&&nr<N&&nc>=0&&nc<M){
                         if(!visi[nr][nc]&&mat[nr][nc]>=mat[r][c]){
                            
                             visi[nr][nc]=1;
                             mqa.push({nr,nc});
                         }
                     }
                 }
             }
         }
     }
     
    
     vector<vector<int>> fin;    
                                            
     for(int i=0;i<N;i++){                   //In the two visited matrices where both the cells are marked as 
         for(int j=0;j<M;j++){                    // 1 will contribute to the answer
             if(visa[i][j]==1&&visi[i][j]==1){
                 fin.push_back({i,j});
             }
         }
     }return fin;
     
     


}
    
};
