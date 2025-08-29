class Solution {
public:
    double solve(double x, long n){
    if(n==0) return 1; // anything raised to power 0 is 1
    else if(n<0) return solve(1/x,-n); // negative number
    else if(n%2==0) return solve(x*x,n/2); //even number
    else if(n%2!=0) return x*solve(x*x,(n-1)/2); // odd number
    return 0;
    }
    double myPow(double x, int n) {
        return solve(x,(long)n); //edge case fasega when doing with integer type as 2^31-1 is the limit fpor +ve nos
    }
};