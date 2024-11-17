class Solution {
public:
    void sortColors(vector<int>& nums) {
        int noo=0,noz=0,ntw=0;
        for(int i =0;i<nums.size();i++){
            if(nums[i]==0) noz++;
            else if(nums[i]==1) noo++;
            else ntw++;
        }
        for(int i=0;i<nums.size();i++){
            if(i<noz) nums[i]=0;
            else if(i<noz+noo) nums[i]=1;
            else nums[i]=2;
        }
    }
};