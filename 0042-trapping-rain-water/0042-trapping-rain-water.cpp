class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        if(n==0) return 0;
        int left=0,right=n-1,leftmax=0,rightmax=0,total=0;

        while(left<right){
            if(height[left]<=height[right]){
                if(height[left]<=leftmax){
                    total+=leftmax-height[left];
                }else{  //heightleft>leftmax
                    leftmax=height[left];
                }
                left++;
            }
            else if(height[right]<height[left]){
                if(height[right]<=rightmax){
                    total+=rightmax-height[right];
                }
                else{   //height[right]>rightmax
                    rightmax=height[right];
                }
                right--;
            }
        }
        return total;
    }
};