/* 
time complexity -> O(3N)
space complexity -> O(2N)
 vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int>leftSum(n,0);
        int sum = 0;
        for(int i = 0;i<n ;i++){
            leftSum[i] = leftSum[i] + sum;
            sum = sum + nums[i];
        }
        sum = 0;
        vector<int>rightSum(n,0);
        for(int i = n-1 ;i>=0;i--){
            rightSum[i] = rightSum[i] + sum;
            sum = sum + nums[i];
        }
        for(int i = 0;i<n;i++){
            nums[i] = abs(leftSum[i]-rightSum[i]);
        }
        return nums;
        
    } 
 */