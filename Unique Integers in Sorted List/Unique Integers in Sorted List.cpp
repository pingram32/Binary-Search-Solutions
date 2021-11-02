int solve(vector<int>& nums) {
    int temp=nums[0], count=1;
    for(int i=0;i<nums.size();i++){
        if(temp!=nums[i]){
            temp=nums[i];
            count++;
        }
    }
    return count;
}
