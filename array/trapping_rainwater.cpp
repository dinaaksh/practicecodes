class Solution {
public:
    int trap(vector<int>& height) {
        int lmax=height[0];
        int rmax=height[height.size()-1];
        int left=1;
        int right=height.size()-2;
        int area=0;
        while(left<=right){
            if(rmax<=lmax){
                area+=max(0,rmax-height[right]);
                rmax=max(rmax,height[right]);
                right--;
            }
            else{
                area+=max(0,lmax-height[left]);
                lmax=max(lmax,height[left]);
                left++;
            }
        }
        return area;
    }
};
