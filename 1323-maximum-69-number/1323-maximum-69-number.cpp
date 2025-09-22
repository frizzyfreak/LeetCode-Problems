class Solution {
public:
    int maximum69Number (int num) {
        int placevalue=0;
        int placevaluesix=-1;
        int test=num;
        while(test!=0){

            int rem=test%10;
            if(rem==6){
                placevaluesix=placevalue;
            }
            test=test/10;
            placevalue++;
        }

        if(placevaluesix==-1) //we never got a 6
            return num;
        else{
            return num+(3*pow(10,placevaluesix));
        }
    }
};