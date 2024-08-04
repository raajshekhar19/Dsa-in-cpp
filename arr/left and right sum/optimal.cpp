 //vector<int> leftRightDifference(vector<int>& nums) {
        /* 
        
        find prefix sum
        if we shift the psum by one to right we get left sum
        if we subs the ast term from the psum we get right */
        /* int n = nums.size();
        vector<int> psum;
        for(int i = 0 ; i <n ; i++){
            psum[i] +=nums[i];
        }

        int left = 0;
        int right = 0;
        vector<int> ans(n,0);
        for(int i = 0 ;i<n ;i++){
            if(i-1>=0){
                left = psum[i-1];
            }
            right = psum[n-1] - psum[i-1];
            int sol=abs(right - left);
            ans[i] =sol;
        }
        return ans;

        vector <int> answ;
        vector <int> pref(nums.size(), 0);
        pref[0] = nums[0];
        for (int i = 1; i!=nums.size(); i++){
            pref[i] = pref[i-1] + nums[i];
        } 
        int left = 0;
        int right = 0;
        for (int i = 0; i!=nums.size(); i++){
            if (i-1 >= 0){
                left = pref[i-1];
            }
            right = pref[nums.size()-1] - pref[i];
            int sum = fabs(left - right);
            answ.push_back(sum);
        }
        return answ;
    }


    } */