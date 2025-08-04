class Solution {
public:
    int brokenCalc(int startValue, int target) {

        int count;
        if(startValue==target) return 0;

        while(target > startValue){
            if(target%2==0){
                target=target/2;
                count+=1;
            }
            else{
                target = (target+1)/2;
                count+=2;
            }
        }
        return count + (startValue-target);
    }
};