class Solution {
public:
    int pivotIndex(vector<int>& nums) {

      int leftsum=0;
      int total=0;
      for(int i=0;i<nums.size();i++){

        total +=nums[i];
      }
      for(int i=0;i<nums.size();i++){

        if(2*leftsum +nums[i] == total){
            
            return i;


        }

        leftsum+=nums[i];
      }


      return -1;
    }
};