class Solution {
    
    //private:
    
    vector<vector<int>>xtra,zeroes;
    int ans;
    
    void solve(int i, int count){
        
        if(i>=zeroes.size()){
            ans=min(ans,count);
        }
        
        for(int j=0;j<xtra.size();j++){
            if(xtra[j][2]==0)continue;
            xtra[j][2]--;
            solve(i+1, abs(xtra[j][0]-zeroes[i][0]) + abs(xtra[j][1] -zeroes[i][1])+count);
          xtra[j][2] ++;
        }
    }

/*
for(int j=0;j<xtra.size();j++): This loop iterates through all the objects in the xtra vector.

if(xtra[j][2]==0)continue;: This line checks if the remaining move count of the current object is zero. If it's zero, it means that the object cannot move anymore, so the loop continues to the next object.

xtra[j][2]--;: This line decrements the move count of the current object by 1. It simulates moving the object one step closer to its target.

solve(i+1, abs(xtra[j][0]-zeroes[i][0]) + abs(xtra[j][1] -zeroes[i][1])+count);: This line recursively calls the solve function with updated parameters. It moves to the next target position (i+1), calculates the distance between the current object's position (xtra[j][0], xtra[j][1]) and the target position (zeroes[i][0], zeroes[i][1]), and adds it to the count. This effectively simulates moving the object to the current target position.

xtra[j][2]++;: After the recursive call, the move count of the object is incremented back to its original value. This is necessary because we are exploring different possibilities, and we need to backtrack to consider other moves.

The reason for xtra[j][2] being used with a value of 2 (specifically xtra[j][2]-- and xtra[j][2]++) is that it represents the number of remaining moves an object can make. In the context of this code, it seems like the original move count of an object is grid[i][j] - 1. So, xtra[j][2] starts with the original move count minus one, and it is decremented when simulating a move and incremented back when backtracking. This is a common technique in recursive search algorithms to keep track of the state.

*/
public:
    int minimumMoves(vector<vector<int>>& grid) {
        for(int i=0;i<3;i++)
            
        {
            for(int j=0;j<3;j++){
            if(grid[i][j]==0)zeroes.push_back({i,j});
            
            else if(grid[i][j]>1)xtra.push_back({i,j,grid[i][j]-1});
            }
        }
        
        if(zeroes.size()==0)return 0;
        ans=INT_MAX;
        solve(0,0); ///function for further work
        return ans;
        
        
    }
};
