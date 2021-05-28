class Solution {
public:
    vector<int> Divisors(int n)
    {
        vector<int> a;
            for(int j=1; j*j<n; j++)
            {
                if(n%j == 0)
                {
                    if(j*j == n)
                    {
                        a.push_back(j);
                    }
                    else
                    {
                        a.push_back(j);
                        a.push_back(n/j);
                    }
                }
            }
        return a;
    }
    
    
    
    int sumFourDivisors(vector<int>& nums) {
        int sum = 0;
        for(int i=0; i<nums.size(); i++)
        {
            vector<int> divisors = Divisors(nums[i]);
        if(divisors.size() == 0)
            return 0;
        else if(divisors.size() == 4)
        {
            for(int j=0; i<4; i++)
            sum += divisors[j];
        }
        }
        return sum;
    }
};