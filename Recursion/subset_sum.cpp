bool solve(int n,int target,vector<int> up,int index){
    // Base Case 
    if(target==0){
        return true;
    }
    if(index==up.size() || target<0) return false;
    // inclusion
    if(solve(n,target-up[index],up,index+1)){
        return true;
    }
      // Exclusion
    if(solve(n,target,up,index+1)){
        return true;
    }

    return false;
}

bool isSubsetPresent(int n, int k, vector<int> &a)
{
    return solve(n,k,a,0);
}