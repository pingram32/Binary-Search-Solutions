int solve(vector<int>& nums) {
    int count=0;
    vector<int> s=nums;
    
    sort(s.begin(), s.end());
    for(int i=0;i<nums.size();i++){
        if(s[i]==nums[i]){
            count++;
        }
    }
    return count;
}
