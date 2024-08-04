/* 

     int rangeSum(vector<int>& nums, int n, int left, int right) {
        //subarr -> subarrsum
        //subarr sum -> arr
        //sort
        //return ans in range
        vector<int> subarrSum;
        for(int i = 0 ; i <n;i++){
        int sum = 0 ;
        for(int j = i; j<n ;j++){
                sum = sum + nums[j];
                subarrSum.push_back(sum);
            }
        }

        sort(subarrSum.begin(),subarrSum.end());

        int mod = 1e9 + 7, ans =0;

        for( int i = left -1; i<=right-1 ;i++){
            ans = (ans+ subarrSum[i])%mod;
        }
        return ans;



     }

 */